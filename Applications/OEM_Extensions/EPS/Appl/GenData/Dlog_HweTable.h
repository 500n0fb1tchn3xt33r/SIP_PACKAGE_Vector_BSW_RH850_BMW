/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       Hardware Description Data.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [no]
*
*  \copyright   BMW AG 2015 - 2016
*
*  \version     5.3.1
*
*/
/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:56.115721
*
------------------------------------------------------------------------------*/

#ifndef DLOG_HWETABLE_H_
#define DLOG_HWETABLE_H_

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/

#include <Std_Types.h>
#include "DlogClassic_Cfg.h"
#include "Dlog_Data.h"


/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* Violation of MISRA rule 19.1, Reason: Including Dlog_MemMap.h is necessary throughout
   the file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/* check version of the module */
#if (!DlogClassic_CHECK_VERSION(5,3,1))
   #error "Version of Dlog_HweTable.h does not match the version of the module!"
#endif

/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

/* ---------------------------------------------------------------------------*/
/*                              HWE table                                     */
/* -------------------------------------------------------------------------- */

typedef struct {
  uint8 sgbmId[DLOG_SGBM_ID_LENGTH];
#if (DLOG_HWEDEVELOPMENTINFOLENGTH > 0u)
  uint8 developmentInfo[DLOG_HWEDEVELOPMENTINFOLENGTH + 1]; /* ... plus one Byte length info */
#endif
} Dlog_HweInfoRomType;

/* ---------------------------------------------------------------------------*/
/*          Hardware Description Data                                         */
/* -------------------------------------------------------------------------- */

/** Define data type 'HwDescDataType' for the Hardware Description Data       */
typedef struct {
  /** HardwareLogisticData                                                   */
#if (DLOG_TOTALNUMBEROFHWESGBMIDS > 0u)
  Dlog_HweInfoRomType HweTable[DLOG_TOTALNUMBEROFHWESGBMIDS];
  /** Indices of start and end in HweTable */
  uint8 HweTableIndices[DLOG_NUMBEROFHWECONFIGSETS + 1];
#endif
  Dlog_HWDataType hwData;
} Dlog_HwDescDataType;


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/


#define Dlog_START_SEC_CONST_BM_HW_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

/** extern declaration of hardware description data                           */
extern const Dlog_HwDescDataType Dlog_HwDescData;

#define Dlog_STOP_SEC_CONST_BM_HW_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */


/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

#define Dlog_START_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

extern Dlog_HweInfoType Dlog_HweInfos[DLOG_MAXNUMBEROFHWESGBMIDS];
extern uint8 Dlog_HweDevelopmentInfos[DLOG_MAXNUMBEROFHWESGBMIDS][DLOG_HWEDEVELOPMENTINFOLENGTH + 1]; /* ... plus one Byte length info */

#define Dlog_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
#include "Dlog_MemMap.h"  /* PRQA S 5087 */



/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define Dlog_START_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

extern void Dlog_InitHweTable(void);

#define Dlog_STOP_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */



#endif /* DLOG_HWETABLE_H_ */
