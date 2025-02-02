/**
 * \file
 *
 * \brief       Read NV-Memory into Mirror.
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2015 - 2017
 *
 * \version     5.3.1
 *
 */

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

/* -------------------------------------------------------------------------- */
#include "Dlog_Nvm.h"
#include "Dlog_SvkGen.h"
#include "Dlog_HweTable.h"
#if ( DLOG_ENABLE_ECU == STD_ON )
#include "Dlog_Ecu.h"
#endif
/* -------------------------------------------------------------------------- */
#include <MemIf.h>             /* Autosar Memory Interface */
/* -------------------------------------------------------------------------- */
#include "Boot_Main.h"          /* Contains NVM_BLOCK_BOOT_SVK_HISTORY */
/* -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */


/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* Violation of MISRA Rule 14.2. Reason: void cast for unused parameter, see PRQA: 3112 */

/* Violation of MISRA rule 14.7. Reason: early return in case of errors makes code more readable,
   see PRQA: 2006, 5207 */


/*------------------------------------------------------------------------------
                        Local Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!DlogClassic_CHECK_VERSION(5,3,1))
   #error "Version of Dlog_Nvm.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Local Variables
------------------------------------------------------------------------------*/


#define Dlog_START_SEC_VAR_NO_INIT_8
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

/* PRQA S 3218 1 *//* Needed here for memory mapping */
static uint8 Dlog_NvmState;

#define Dlog_STOP_SEC_VAR_NO_INIT_8
#include "Dlog_MemMap.h"  /* PRQA S 5087 */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

#define Dlog_START_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */


/**
 * \brief Initializes the given NV-Mirror from NV-Memory via MemIf
 *
 * \param[in] blockId      Block Id of the NV-Memory-Block
 * \param[in] mirror       Pointer to the RAM Mirror
 * \param[in] size         Size of the block
 * \param[in] InitFunction Function to initialize the block in case the
 *                         NV-Memory is invalid
 *
 * \remarks This function is called from bootloader only
 */
void Dlog_InitNvmBlock(uint16 blockId, Dlog_NvmMirrorPtr mirror, uint16 size, Std_ReturnType (*InitFunction)(void)) {
  /* read SvkHistoryMemory from NVRAM to RAM mirror                          */
  Std_ReturnType ret = MemIf_Read(DLOG_NVM_MEMIF_DEVICE_ID, blockId, 0, mirror, size);

  /* read from NVRAM and evaluate block status                               */
  /* the side effect is intended */
  if ((E_OK != ret) || (WaitMemDriverReady() != MEMIF_JOB_OK)) { /* PRQA S 3415 */
    /* init the mirror with default data                                     */
    (void)InitFunction();
    /* write to NVRAM                                                        */
    ret = Dlog_WriteNvmBlock(blockId, mirror, TRUE);

    if (E_OK != ret) {
    }
  }
}


/**
 * \brief Initializes NV-Mirror from NV-Memory via MemIf
 *
 * \remarks This function is called from bootloader only
 */
void Dlog_InitNvm(void)
{
#if DLOG_HWETABLE_INIT_FROM_ROM == STD_ON
  Dlog_InitHweTable();
#endif

#if ( DLOG_ENABLE_ECU == STD_ON )
  Dlog_InitNvmBlock(
      DLOG_NVM_BLOCK_PROG_DATA,
      (Dlog_NvmMirrorPtr)&Dlog_ProgData,
      sizeof(Dlog_ProgDataType),
      &Dlog_InitProgData);
#endif
}




/**
 * Writes the given NV-Block to NV-Memory
 *
 * \param[in] blockId  Id of the block to be written
 * \param[in] mirror   RAM mirror of the block to be written
 * \param[in] OpStatus Should be DLOG_INITIAL on the first call and DLOG_PENDING on all
 *                     subsequent calls while this function returns DLOG_NVM_PENDING.
 *
 * \retval DLOG_NVM_OK      The block has been written successfully
 * \retval DLOG_NVM_NOT_OK  An error occured
 * \retval DLOG_NVM_PENDING The job is still pending
 *
 */
Dlog_NvmBlockState Dlog_WriteNvmBlockAsync(
    uint16 blockId,
    Dlog_NvmMirrorPtr mirror, /* PRQA S 3673 *//* configuration dependent */
    Dlog_OpStatusType OpStatus) {
  Std_ReturnType ret;
  Dlog_NvmBlockState nvmBlockState = DLOG_NVM_NOT_OK;
   MemIf_StatusType status;

  if (DLOG_INITIAL == OpStatus) {
    Dlog_NvmState = 0;
  }
  switch(Dlog_NvmState) {
    case 0:
      status = MemIf_GetStatus(DLOG_NVM_MEMIF_DEVICE_ID);
      if (MEMIF_IDLE == status) {
        ret = Dlog_WriteNvmBlock( blockId, mirror, FALSE);

        if (E_OK == ret) {
          ++Dlog_NvmState;
          nvmBlockState = DLOG_NVM_PENDING;
        }
      } else {
        nvmBlockState = DLOG_NVM_PENDING;
      }
      break;
    case 1:
      nvmBlockState = Dlog_GetNvmBlockState(blockId);
      break;
    default:
      /* We should not reach this line of code */
      break;  /* LCOV_EXCL_LINE */
  }
  return nvmBlockState;
}

/**
 * Writes the given NV-Block to NV-Memory
 *
 * \param[in] blockId Id of the block to be written
 * \param[in] mirror  RAM mirror of the block to be written
 * \param[in] wait    If TRUE, the routine blocks until the NV-Block
 *                    is written or an error occurs. The blocking is done by calling
 *                    the blocking user-defined function WaitMemDriverReader().
 *                    If FALSE, the routine returns immediately after the
 *                    write job has been triggered.
 *
 * \remark If configured for NvM, the parameter wait is ignored, i.e. the routine
 *         always returns immediately after the write job has been triggered.
 */
Std_ReturnType Dlog_WriteNvmBlock(
    uint16 blockId,
    Dlog_NvmMirrorPtr mirror, /* PRQA S 3673 *//* configuration dependent */
    boolean wait) {
  Std_ReturnType ret;
  /* write to NV-Memory                                                */
  ret = MemIf_Write( DLOG_NVM_MEMIF_DEVICE_ID, blockId, mirror);

  /* Wait until nv driver is finished                                  */
  /* the side effect is intended */
  if ((FALSE != wait) && (WaitMemDriverReady() != MEMIF_JOB_OK)) { /* PRQA S 3415 */
    ret = E_NOT_OK;
  }
  return ret;
  /* PRQA S 2006,5207 1 */
}

/**
 * Returns the state of a triggered read or write job.
 *
 * \param[in] blockId Id of the block
 *
 * \retval DLOG_NVM_OK      The job has finished successfully
 * \retval DLOG_NVM_NOT_OK  An error occured
 * \retval DLOG_NVM_PENDING The job is still pending
 */
Dlog_NvmBlockState Dlog_GetNvmBlockState(uint16 blockId) {
  Dlog_NvmBlockState ret = DLOG_NVM_NOT_OK;

  MemIf_StatusType status = MemIf_GetStatus(DLOG_NVM_MEMIF_DEVICE_ID);
  MemIf_JobResultType result = MemIf_GetJobResult(DLOG_NVM_MEMIF_DEVICE_ID);

  /* MISRA-C:2004 Rule 14.2: parameter needed for other configurations */
  /* PRQA S 3112 1 */
  (void)blockId;

  if (((MEMIF_IDLE == status) || (MEMIF_BUSY_INTERNAL == status)) && (MEMIF_JOB_OK == result)) {
    ret = DLOG_NVM_OK;
  } else if (MEMIF_JOB_PENDING == result) {
    ret = DLOG_NVM_PENDING;
  } else {
    /* Nothing to do, just avoid MISRA-warning */
  }

  return ret;
}

#define Dlog_STOP_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

