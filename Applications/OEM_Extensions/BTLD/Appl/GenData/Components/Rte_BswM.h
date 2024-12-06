/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_BswM.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BswM>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BSWM_H
# define _RTE_BSWM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_BswM_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Dcm_DiagnosticSessionControlType, RTE_CODE) Rte_Mode_BswM_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Dcm_EcuResetType, RTE_CODE) Rte_Mode_BswM_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Mode_BswM_Notification_SwcModeNotification_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Mode_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset Rte_Mode_BswM_Notification_SwcModeNotification_DcmEcuReset_DcmEcuReset


# endif /* !defined(RTE_CORE) */


# define BswM_START_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_BswM_MainFunction BswM_MainFunction
# endif

FUNC(void, BswM_CODE) BswM_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define BswM_STOP_SEC_CODE
# include "BswM_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BSWM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
