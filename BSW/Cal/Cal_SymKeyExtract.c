/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Cal_SymKeyExtract.c
 *      Project:  SysService_AsrCal
 *       Module:  MICROSAR Crypto Abstraction Library (Cal)
 *    Generator:  -
 *
 *  Description:  This module implements the Crypto Abstraction Layer to perform
 *                cryptographic routine. The CAL provides synchronous services
 *                to enable a unique access to basic cryptographic functionalities
 *                for all software modules and software components.
 *
 *  Limitation to the Autosar specification:
 *                This implementation provides only a sub-set of the functionality
 *                as specified in the CAL_SWS of Autosar.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file (Cal.h).
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#define CAL_SYMKEYEXTRACT_SOURCE
/**********************************************************************************************************************
*  INCLUDES
**********************************************************************************************************************/
#include "Cal.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
/* vendor specific version information is BCD coded */
#if (  (CAL_SW_MAJOR_VERSION != (0x02)) \
    || (CAL_SW_MINOR_VERSION != (0x01)) \
    || (CAL_SW_PATCH_VERSION != (0x02)) )
# error "Vendor specific version numbers of Cal_SymKeyExtract.c and Cal.h are inconsistent"
#endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* PRQA S 3453 7 */ /* MD_CAL_3453 */
#ifndef CAL_DUMMYSTATEMENT
# if (CAL_USE_DUMMY_STATEMENT == STD_ON)
#  define CAL_DUMMYSTATEMENT(x) (void)(x)
# else
#  define CAL_DUMMYSTATEMENT(x)
# endif
#endif

#if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
  Cal_AlignType Buffer[CAL_SYMKEYEXTRACT_CONTEXT_BUFFER_SIZE - 1]; /* Generator added one element for the status */
  Cal_AlignType Status;
} Cal_SymKeyExtractCtxBufStruct;

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define CAL_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
STATIC FUNC(P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_SymKeyExtractGetCfg(Cal_ConfigIdType cfgId);
# endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

# if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
/**********************************************************************************************************************
  Cal_SymKeyExtractGetCfg
**********************************************************************************************************************/
STATIC FUNC(P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA), CAL_CODE) Cal_SymKeyExtractGetCfg(Cal_ConfigIdType cfgId)
{
  P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA) calRtn;
  uint8 i;

  calRtn = NULL_PTR;

  for(i = 0; i < CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS; i++)
  {
    if(cfgId == Cal_SymKeyExtractConfig[i].ConfigId)
    {
      calRtn = &Cal_SymKeyExtractConfig[i];
      break;
    }
  }

  return calRtn;
}
# endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

/**********************************************************************************************************************
*  GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
*  Cal_SymKeyExtractStart
**********************************************************************************************************************/
/*! \brief                          This function shall be used to initialize the symmetrical key extraction service of
*                                   the CAL module.
*  \param[in]     cfgId             Holds the identifier of the CAL module configuration which has to be used during
*                                   the key extraction.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \return  CAL_E_OK                - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to initialize the symmetrical key extraction service of
*                                   the CAL module. The function shall initialize the context buffer given by
*                                   "contextBuffer", call the function Cpl_<Primitive>Start of the primitive which is
*                                   identified by the "cfgId" and return the value returned by that function.
*                                   If Cpl_<Primitive>Start returned successfully, the function shall set the state of
*                                   this service to "active", and store this state in the context buffer.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymKeyExtractStart(Cal_ConfigIdType cfgId,
                                                      Cal_SymKeyExtractCtxBufType contextBuffer)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
  P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA) symKeyExtractCfg;
  P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symKeyExtractCfg = Cal_SymKeyExtractGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if(symKeyExtractCfg != NULL_PTR)
  {
    /* Call the configured Primitive Function */
    calRtn = symKeyExtractCfg->PrimitiveStartFct(symKeyExtractCfg->PrimitiveConfigPtr,
                                                 context->Buffer);
  }

  if(calRtn == CAL_E_OK)
  {
    context->Status = CAL_ACT_ACTIVE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

  return calRtn;
}

/**********************************************************************************************************************
*  Cal_SymKeyExtractUpdate
**********************************************************************************************************************/
/*! \brief                          This function shall be used to feed the symmetrical key extraction service with
*                                   input data.
*  \param[in]  cfgId                Holds the identifier of the CAL module configuration which has to be used during
*                                   the key extraction.
*  \param[in/out] contextBuffer     Holds the pointer to the buffer in which the context of this service can be
*                                   stored.
*  \param[in] dataPtr               Holds a pointer to the data which contains the key in a format which cannot be used
*                                   directly by the CAL. From this data the key will be extracted in a CAL-conforming
*                                   format.
*  \param[in]  dataLength           Contains the length of the dataPtr in bytes.
*  \return  CAL_E_OK                - Request successful
*  \return CAL_E_NOT_OK             - Request failed
*  \description                     This function shall be used to feed the symmetrical key extraction service with
*                                   input data.
*                                   If the service state given by the context buffer is "idle", the function has to
*                                   return with "CAL_E_NOT_OK".
*                                   Otherwise, this function shall call the function Cpl_<Primitive>Update of the
*                                   primitive which is identified by the "cfgId", and return the value returned by that
*                                   function. The calculation of the extraction algorithm is done by the underlying
*                                   primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymKeyExtractUpdate(Cal_ConfigIdType cfgId,
                                                       Cal_SymKeyExtractCtxBufType contextBuffer,  /* PRQA S 3673 */ /* MD_CAL_16.7 */
                                                       P2CONST(uint8, AUTOMATIC, CAL_APPL_DATA) dataPtr,
                                                       uint32 dataLength)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
  P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA) symKeyExtractCfg;
  P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symKeyExtractCfg = Cal_SymKeyExtractGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((symKeyExtractCfg != NULL_PTR) && (dataPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = symKeyExtractCfg->PrimitiveUpdateFct(symKeyExtractCfg->PrimitiveConfigPtr,
                                                    context->Buffer,
                                                    dataPtr,
                                                    dataLength);
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(dataPtr);                                                      /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(dataLength);                                                   /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

  return calRtn;
}

/**********************************************************************************************************************
*  Cal_SymKeyExtractFinish
**********************************************************************************************************************/
/*! \brief                  This function shall be used to finish the symmetrical key extraction service.
*  \param[in]  cfgId        Holds the identifier of the CAL module configuration which has to be used during
*                           the key extraction.
*  \param[in/out] contextBuffer  Holds the pointer to the buffer in which the context of this service can be
*                                stored.
*  \param[in] keyPtr        Holds a pointer to a structure where the result (i.e. the symmetrical key) is
*                           stored in.
*  \return  CAL_E_OK        - Request successful
*  \return CAL_E_NOT_OK     - Request failed
*  \description             This function shall be used to finish the symmetrical key extraction service.
*                           If the service state given by the context buffer is "idle", the function has to
*                           return with "CAL_E_NOT_OK".
*                           Otherwise, this function shall call the function Cpl_<Primitive>Finish of the
*                           primitive which is identified by the "cfgId", and return the value returned by that
*                           function. If Cpl_<Primitive>Finish returned successfully, the function shall set
*                           the state of this service to "idle", and store this state in the context buffer.
*                           The calculation of the extraction algorithm is done by the underlying primitive.
**********************************************************************************************************************/
FUNC(Cal_ReturnType, CAL_CODE) Cal_SymKeyExtractFinish(Cal_ConfigIdType cfgId,
                                                       Cal_SymKeyExtractCtxBufType contextBuffer,
                                                       P2VAR(Cal_SymKeyType, AUTOMATIC, CAL_APPL_DATA) keyPtr)
{
  Cal_ReturnType calRtn = CAL_E_NOT_OK;
# if ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 )
  P2CONST(Cal_SymKeyExtractConfigType, AUTOMATIC, CAL_APPL_DATA) symKeyExtractCfg;
  P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA) context;

  /* PRQA S 0310 1 */ /* MD_CAL_11.4 */
  context = ((P2VAR(Cal_SymKeyExtractCtxBufStruct, AUTOMATIC, CAL_APPL_DATA))contextBuffer); /* Casted Context Buffer */
  symKeyExtractCfg = Cal_SymKeyExtractGetCfg(cfgId); /* Pointer to Specific Service Configuration */

  if((symKeyExtractCfg != NULL_PTR) && (keyPtr != NULL_PTR))
  {
    if(context->Status == CAL_ACT_ACTIVE)                                           /* PRQA S 0310 */ /* MD_CAL_11.4 */
    {
      /* Call the configured Primitive Function */
      calRtn = symKeyExtractCfg->PrimitiveFinishFct(symKeyExtractCfg->PrimitiveConfigPtr,
                                                    context->Buffer,
                                                    keyPtr);
    }

    if(calRtn == CAL_E_OK)
    {
      context->Status = CAL_ACT_IDLE;                                               /* PRQA S 0310 */ /* MD_CAL_11.4 */
    }
  }

# else
  CAL_DUMMYSTATEMENT(cfgId);                                                        /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(contextBuffer);                                                /* PRQA S 3112 */ /* MD_CAL_3112 */
  CAL_DUMMYSTATEMENT(keyPtr);                                                       /* PRQA S 3112 */ /* MD_CAL_3112 */
# endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

  return calRtn;
}

# define CAL_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* ( CAL_NUMBER_OF_SYM_KEY_EXTRACT_CONFIGS != 0 ) */

/**********************************************************************************************************************
 *  END OF FILE: CAL_SYMKEYEXTRACT_SOURCE.C
 *********************************************************************************************************************/