/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Os
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Lcfg.h
 *   Generation Time: 2018-01-02 16:37:33
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#if !defined (OS_LCFG_H)                                                             /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_LCFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module declarations */
# include "Os_Cfg.h"
# include "Os_Types.h"
# include "Os_Types_Lcfg.h"

/* Os kernel module dependencies */

/* Os hal dependencies */
# include "Os_Hal_Lcfg.h"

/* User file includes */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define OS_START_SEC_Default_Appl_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Appl_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_APPL_INIT_TASK_CODE) Os_Task_Default_Appl_Init_Task(void);

# define OS_STOP_SEC_Default_Appl_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Appl_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_APPL_TASK_CODE) Os_Task_Default_Appl_Task(void);

# define OS_STOP_SEC_Default_Appl_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_BAC_Appl_BMW_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_BAC_Appl_BMW_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BAC_APPL_BMW_TASK_CODE) Os_Task_Default_BAC_Appl_BMW_Task(void);

# define OS_STOP_SEC_Default_BAC_Appl_BMW_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_BSW_Sync_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_BSW_Sync_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BSW_SYNC_TASK_CODE) Os_Task_Default_BSW_Sync_Task(void);

# define OS_STOP_SEC_Default_BSW_Sync_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Background_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Background_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_BACKGROUND_TASK_CODE) Os_Task_Default_Background_Task(void);

# define OS_STOP_SEC_Default_Background_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_Init_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_INIT_TASK_CODE) Os_Task_Default_Init_Task(void);

# define OS_STOP_SEC_Default_Init_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Default_RTE_Mode_switch_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Default_RTE_Mode_switch_Task()
 *********************************************************************************************************************/
extern FUNC(void, OS_DEFAULT_RTE_MODE_SWITCH_TASK_CODE) Os_Task_Default_RTE_Mode_switch_Task(void);

# define OS_STOP_SEC_Default_RTE_Mode_switch_Task_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_OsTask_BSW_ASIL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  OsTask_BSW_ASIL()
 *********************************************************************************************************************/
extern FUNC(void, OS_OSTASK_BSW_ASIL_CODE) Os_Task_OsTask_BSW_ASIL(void);

# define OS_STOP_SEC_OsTask_BSW_ASIL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_OsTask_LowPrioNvm_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  OsTask_LowPrioNvm()
 *********************************************************************************************************************/
extern FUNC(void, OS_OSTASK_LOWPRIONVM_CODE) Os_Task_OsTask_LowPrioNvm(void);

# define OS_STOP_SEC_OsTask_LowPrioNvm_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Fr_IrqLine0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Fr_IrqLine0()
 *********************************************************************************************************************/
extern FUNC(void, OS_FR_IRQLINE0_CODE) Os_Isr_Fr_IrqLine0(void);

# define OS_STOP_SEC_Fr_IrqLine0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_Fr_IrqTimer0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  Fr_IrqTimer0()
 *********************************************************************************************************************/
extern FUNC(void, OS_FR_IRQTIMER0_CODE) Os_Isr_Fr_IrqTimer0(void);

# define OS_STOP_SEC_Fr_IrqTimer0_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# define OS_START_SEC_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *  WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR()
 *********************************************************************************************************************/
extern FUNC(void, OS_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE) Os_Isr_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR(void);

# define OS_STOP_SEC_WDG_59_DRIVERA_TRIGGERFUNCTION_CAT2_ISR_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* OS_LCFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Lcfg.h
 *********************************************************************************************************************/
