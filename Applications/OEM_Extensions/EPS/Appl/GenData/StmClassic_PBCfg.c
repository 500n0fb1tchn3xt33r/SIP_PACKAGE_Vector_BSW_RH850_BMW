/**
*  \file
*
*  \brief       BMW SWC StmClassic_PBCfg
*
*  Configuration file for Stm Post Build Functionality
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.2.0
*
*  \remarks     File is generated with PAGe
*
*/
/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:55.990708
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/
/*
   MISRA-C:2004 Rule 19.1: including Stm_MemMap.h is necessary throughout
   the file according to memory abstraction. See PRQA 5087.
*/

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/
#include "Stm.h"                /* Module Header                              */
#include "StmClassic_Cfg.h"     /* Module Header                              */
#include "StmClassic_PBCfg.h"   /* Module Header                              */
#include "StmClassic_Version.h"

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief check version of the module
 */
#if (!StmClassic_CHECK_VERSION(5,2,0))
   #error "Version of StmClassic_PbCfg.c does not match the Classic adapter version!"
#endif

#if (STM_PBCFG_ENABLED == STD_ON)
/*------------------------------------------------------------------------------
                      StmFeatureActivation
------------------------------------------------------------------------------*/
#define Stm_START_SEC_CONST_UNSPECIFIED
#include "Stm_MemMap.h" /* PRQA S 5087 */

/* Attributes of all Stm Functions                                            */
const Stm_PBConfigType Stm_PBConfig_StmFeatureActivation =
{
  TRUE, /*StmCentralErrorLockEnabled*/
  TRUE, /*StmEnergyStateEnabled*/
  TRUE, /*stmVehicleStateEnabled*/
};

#define Stm_STOP_SEC_CONST_UNSPECIFIED
#include "Stm_MemMap.h" /* PRQA S 5087 */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/

#define Stm_START_SEC_VAR_INIT_UNSPECIFIED
#include "Stm_MemMap.h" /* PRQA S 5087 */

/* PB configuration is initialized with the first ConfigSet */
const Stm_PBConfigType * Stm_PBConfigSetPtr = &Stm_PBConfig_StmFeatureActivation;

#define Stm_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Stm_MemMap.h" /* PRQA S 5087 */

#endif /* (STM_PBCFG_ENABLED == STD_ON) */

/*** End of file **************************************************************/
