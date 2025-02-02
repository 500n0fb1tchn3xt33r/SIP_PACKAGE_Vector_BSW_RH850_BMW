/**
*  \file
*
*  \brief       BMW SWC StdDiag
*
*  This file is the post build configuration header file of the module StdDiag
*  for usage in the BMW AUTOSAR Core.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.4.0
*
*  \remarks     The StdDiag module is responsible for BMW specific session
*               handling and handles a number of BMW specific diagnostic requests.
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:55.860695
*
------------------------------------------------------------------------------*/


#ifndef STDDIAGCLASSIC_PBCFG_H
#define STDDIAGCLASSIC_PBCFG_H

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/

#include "BUtil/PlatformTypes.h"
#include "StdDiagClassic_Version.h"

/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!StdDiagClassic_CHECK_VERSION(5,4,0))
   #error "Version of StdDiagClassic_PBCfg.h does not match the version of the module!"
#endif

/*------------------------------------------------------------------------------
                      Data Types
------------------------------------------------------------------------------*/

typedef uint8 StdDiag_SgbdIndexType[3];

typedef struct {
  StdDiag_SgbdIndexType SgbdIndex;
} StdDiag_PBConfigType;

/*------------------------------------------------------------------------------
                      Constants
------------------------------------------------------------------------------*/
/* PRQA S 5087 2 */
#define StdDiag_START_SEC_CONST_UNSPECIFIED
#include "StdDiag_MemMap.h"

/**
 * \brief SGBD Index
 *
 * These constants specify the possible SGBD Indexes to be read
 * via UDS Service $22 $F1 $50
 */
extern const StdDiag_PBConfigType StdDiag_Config;


/* PRQA S 5087 2 */
#define StdDiag_STOP_SEC_CONST_UNSPECIFIED
#include "StdDiag_MemMap.h"

/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define StdDiag_START_SEC_VAR_INIT_UNSPECIFIED
#include "StdDiag_MemMap.h"

extern const StdDiag_PBConfigType * StdDiag_PBConfigSetPtr;

/* PRQA S 5087 2 */
#define StdDiag_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "StdDiag_MemMap.h"

/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define StdDiag_START_SEC_CODE
#include "StdDiag_MemMap.h"

/**
 * \brief Function to select Post Build configuration
 */
extern void StdDiag_SetConfiguration(const StdDiag_PBConfigType * selectedConfig);

/* PRQA S 5087 2 */
#define StdDiag_STOP_SEC_CODE
#include "StdDiag_MemMap.h"

#endif /* STDDIAGCLASSIC_PBCFG_H */