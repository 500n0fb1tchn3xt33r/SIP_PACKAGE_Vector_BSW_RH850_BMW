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
 *            Module: BswM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BswM_Private_Cfg.h
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


#if !defined(BSWM_PRIVATE_CFG_H)
#define BSWM_PRIVATE_CFG_H


/* -----------------------------------------------------------------------------
    &&&~ INCLUDE
 ----------------------------------------------------------------------------- */
#include "BswM_Cfg.h"

#include "Com.h" 
#include "Rte_BswM.h" 
#include "Appl_Main.h" 
#include "Fr.h" 
#include "FrIf.h" 
#include "FrSM.h" 
#include "PduR.h" 
#include "IpduM.h" 
#include "ComM.h" 
#include "Dem.h" 
#include "Rte_Main.h" 
#include "BswM_UserCallouts.h" 
#include "IntegrationSample_Prototype.h" 
#include "Mcu.h" 
#include "Det.h" 
#include "Fee_30_SmallSector.h" 
#include "WdgM.h" 
#include "FrTp.h" 
#include "FrXcp.h" 
#include "Xcp.h" 
#include "NvM.h" 
#include "Dcm.h" 
#include "SchM_BswM.h" 
#include "EcuM.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BSWM_INIT_GEN                STD_ON 
#define BSWM_MODENOTIFICATIONFCT     STD_ON 
#define BSWM_SWCMODEREQUESTUPDATEFCT STD_ON 


#if (BSWM_CONFIGURATION_VARIANT == BSWM_CONFIGURATION_VARIANT_PRECOMPILE && BSWM_POSTBUILD_VARIANT_SUPPORT == STD_OFF)
# define BSWM_FUNCTION_BASED STD_ON
#else
# define BSWM_FUNCTION_BASED STD_OFF
#endif

#if (defined (BSWM_ACTIONLISTSTRUEIDXOFRULES))
# if ((BSWM_ACTIONLISTSTRUEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSTRUEIDXOFRULES))
#  define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSTRUEIDXOFRULES
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_ACTIONLISTSFALSEIDXOFRULES))
#  if ((BSWM_ACTIONLISTSFALSEIDXOFRULES == STD_ON) && defined (BSWM_NO_ACTIONLISTSFALSEIDXOFRULES))
#   define BSWM_NO_ACTIONLIST BSWM_NO_ACTIONLISTSFALSEIDXOFRULES
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# if(defined(BSWM_SIZEOFACTIONLISTS))
#  if (BSWM_SIZEOFACTIONLISTS == STD_ON)
#   define BSWM_NO_ACTIONLIST BswM_GetSizeOfActionLists()
#  endif
# endif
#endif
#if (defined(BSWM_NO_ACTIONLIST))
#else
# define BSWM_NO_ACTIONLIST 255
#endif

#define BSWM_GROUPCONTROL_IDLE   (uint8)0x00u
#define BSWM_GROUPCONTROL_NORMAL (uint8)0x01u
#define BSWM_GROUPCONTROL_REINIT (uint8)0x02u
#define BSWM_GROUPCONTROL_DM     (uint8)0x04u



#define BSWM_ID_RULE_Rule_DcmCodingReset                                          0U 
#define BSWM_ID_RULE_Rule_Dlog_Init_when_IS_Startup                               1U 
#define BSWM_ID_RULE_Rule_Dlog_Run_when_Dlog_Init                                 2U 
#define BSWM_ID_RULE_Rule_Start_Omc_Init_when_Darh_Run                            3U 
#define BSWM_ID_RULE_Rule_Start_StdDiag_Init_when_Omc_Run                         4U 
#define BSWM_ID_RULE_Rule_Start_Darh_Run_when_Darh_Init                           5U 
#define BSWM_ID_RULE_Rule_Start_Omc_Run_when_Omc_Init                             6U 
#define BSWM_ID_RULE_Rule_Start_StdDiag_Run_when_StdDiag_Init                     7U 
#define BSWM_ID_RULE_Rule_Start_Systime_Run_when_Systime_Init                     8U 
#define BSWM_ID_RULE_Rule_DcmEcuReset                                             9U 
#define BSWM_ID_RULE_Rule_Systime_Init                                            10U 
#define BSWM_ID_RULE_Rule_Darh_Init                                               11U 
#define BSWM_ID_RULE_Rule_ComM_Channel_is_FULL_COM                                12U 
#define BSWM_ID_RULE_Rule_ComM_Channel_is_SILENT_COMMUNICATION                    13U 
#define BSWM_ID_RULE_Rule_Set_DarhReportError_due_ComM_and_CEL_mode               14U 
#define BSWM_ID_RULE_Rule_Switch_StdDiagSessionChangeIndication                   15U 
#define BSWM_ID_RULE_Rule_NDC_Enable_Rx_Enable_Tx                                 16U 
#define BSWM_ID_RULE_Rule_NDC_Enable_Rx_Disable_Tx                                17U 
#define BSWM_ID_RULE_Rule_NDC_Disable_Rx_Enable_Tx                                18U 
#define BSWM_ID_RULE_Rule_NDC_Disable_Rx_Disable_Tx                               19U 
#define BSWM_ID_RULE_Rule_Shutdown                                                20U 
#define BSWM_ID_RULE_Rule_ComM_Channel_is_NO_COM                                  21U 
#define BSWM_ID_RULE_Rule_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run 22U 
#define BSWM_ID_RULE_Rule_Reset_when_SimpleTimer0_fired                           23U 
#define BSWM_ID_RULE_Rule_BS_Init                                                 24U 
#define BSWM_ID_RULE_Rule_Bs_Run                                                  25U 
#define BSWM_ID_RULE_ESH_RunToPostRun                                             26U 
#define BSWM_ID_RULE_ESH_RunToPostRunNested                                       27U 
#define BSWM_ID_RULE_ESH_WaitToShutdown                                           28U 
#define BSWM_ID_RULE_ESH_WakeupToPrep                                             29U 
#define BSWM_ID_RULE_ESH_WaitToWakeup                                             30U 
#define BSWM_ID_RULE_ESH_WakeupToRun                                              31U 
#define BSWM_ID_RULE_ESH_DemInit                                                  32U 
#define BSWM_ID_RULE_ESH_InitToWakeup                                             33U 
#define BSWM_ID_RULE_ESH_PostRunToPrepNested                                      34U 
#define BSWM_ID_RULE_ESH_PostRunNested                                            35U 
#define BSWM_ID_RULE_ESH_PostRun                                                  36U 
#define BSWM_ID_RULE_ESH_PrepToWait                                               37U 
#define BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_TX                                     38U 
#define BSWM_ID_RULE_CC_A_FlexRay_5b5a9ac2_RX                                     39U 

#define BSWM_ID_AL_AL_CodingResetExecution                                                        0U 
#define BSWM_ID_AL_AL_Rule_Dlog_Init_True                                                         1U 
#define BSWM_ID_AL_AL_Rule_Dlog_Run_True                                                          2U 
#define BSWM_ID_AL_AL_Rule_Start_Omc_Init_when_Darh_Run_True                                      3U 
#define BSWM_ID_AL_AL_Rule_Start_StdDiag_Init_when_Omc_Run_True                                   4U 
#define BSWM_ID_AL_AL_RuleDarh_Init_to_Run_True                                                   5U 
#define BSWM_ID_AL_AL_Rule_Start_Omc_Run_when_Omc_Init_True                                       6U 
#define BSWM_ID_AL_AL_Rule_Start_StdDiag_Run_when_StdDiag_Init_True                               7U 
#define BSWM_ID_AL_AL_Rule_Start_Systime_Run_when_Systime_Init_True                               8U 
#define BSWM_ID_AL_AL_ResetExecution                                                              9U 
#define BSWM_ID_AL_AL_Rule_Systime_Init_True                                                      10U 
#define BSWM_ID_AL_AL_Rule_Darh_Init_True                                                         11U 
#define BSWM_ID_AL_AL_ComM_Channel_is_FULL_COM                                                    12U 
#define BSWM_ID_AL_AL_ComM_Channel_is_SILENT_COMMUNICATION_BswMActionList_True                    13U 
#define BSWM_ID_AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_True               14U 
#define BSWM_ID_AL_AL_Set_DarhReportError_due_ComM_and_CEL_mode_BswMActionList_False              15U 
#define BSWM_ID_AL_INIT_AL_Initialize                                                             16U 
#define BSWM_ID_AL_AL_Switch_StdDiagSessionChangeIndication_True                                  17U 
#define BSWM_ID_AL_AL_Switch_StdDiagSessionChangeIndication_False                                 18U 
#define BSWM_ID_AL_AL_NDC_Enable_RX_AND_TX_NORMAL                                                 19U 
#define BSWM_ID_AL_AL_NDC_Enable_RX_Disable_TX_NORMAL                                             20U 
#define BSWM_ID_AL_AL_NDC_Disable_RX_Enable_TX_NORMAL                                             21U 
#define BSWM_ID_AL_AL_NDC_Disable_Rx_And_Tx_Normal                                                22U 
#define BSWM_ID_AL_AL_ComM_Channel_is_NO_COM_BswMActionList_True                                  23U 
#define BSWM_ID_AL_AL_Set_EcuRunMode_to_Normal_Operation_when_all_modules_run_BswMActionList_True 24U 
#define BSWM_ID_AL_AL_Reset_when_SimpleTimer0_fired_BswMActionList_True                           25U 
#define BSWM_ID_AL_AL_Bs_Run_when_Bs_Init                                                         26U 
#define BSWM_ID_AL_AL_BswMActionList_Bs_Init_True                                                 27U 
#define BSWM_ID_AL_ESH_AL_ExitRun                                                                 28U 
#define BSWM_ID_AL_ESH_AL_RunToPostRun                                                            29U 
#define BSWM_ID_AL_ESH_AL_WaitForNvMToShutdown                                                    30U 
#define BSWM_ID_AL_ESH_AL_WakeupToPrep                                                            31U 
#define BSWM_ID_AL_ESH_AL_WaitForNvMWakeup                                                        32U 
#define BSWM_ID_AL_ESH_AL_WakeupToRun                                                             33U 
#define BSWM_ID_AL_ESH_AL_DemInit                                                                 34U 
#define BSWM_ID_AL_ESH_AL_InitToWakeup                                                            35U 
#define BSWM_ID_AL_ESH_AL_PostRunToPrepShutdown                                                   36U 
#define BSWM_ID_AL_ESH_AL_ESH_PostRunToPrepCheck                                                  37U 
#define BSWM_ID_AL_ESH_AL_PostRunToRun                                                            38U 
#define BSWM_ID_AL_ESH_AL_ExitPostRun                                                             39U 
#define BSWM_ID_AL_ESH_AL_PrepShutdownToWaitForNvM                                                40U 
#define BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_TX_Disable                                            41U 
#define BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_TX_EnableNoinit                                       42U 
#define BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_RX_Disable                                            43U 
#define BSWM_ID_AL_CC_AL_A_FlexRay_5b5a9ac2_RX_EnableNoinit                                       44U 


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
/** 
  \defgroup  BswMPCGetConstantDuplicatedRootDataMacros  BswM Get Constant Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated by constance root data elements.
  \{
*/ 
#define BswM_GetActionListQueueOfPCConfig()                           BswM_ActionListQueue.raw  /**< the pointer to BswM_ActionListQueue */
#define BswM_GetActionListsOfPCConfig()                               BswM_ActionLists  /**< the pointer to BswM_ActionLists */
#define BswM_GetComMChannelMappingOfPCConfig()                        BswM_ComMChannelMapping  /**< the pointer to BswM_ComMChannelMapping */
#define BswM_GetComMChannelStateOfPCConfig()                          BswM_ComMChannelState  /**< the pointer to BswM_ComMChannelState */
#define BswM_GetDeferredRulesOfPCConfig()                             BswM_DeferredRules  /**< the pointer to BswM_DeferredRules */
#define BswM_GetFrSMMappingOfPCConfig()                               BswM_FrSMMapping  /**< the pointer to BswM_FrSMMapping */
#define BswM_GetFrSMStateOfPCConfig()                                 BswM_FrSMState  /**< the pointer to BswM_FrSMState */
#define BswM_GetGenericMappingOfPCConfig()                            BswM_GenericMapping  /**< the pointer to BswM_GenericMapping */
#define BswM_GetGenericStateOfPCConfig()                              BswM_GenericState  /**< the pointer to BswM_GenericState */
#define BswM_GetImmediateUserOfPCConfig()                             BswM_ImmediateUser  /**< the pointer to BswM_ImmediateUser */
#define BswM_GetInitializedOfPCConfig()                               BswM_Initialized  /**< the pointer to BswM_Initialized */
#define BswM_GetModeRequestMappingOfPCConfig()                        BswM_ModeRequestMapping  /**< the pointer to BswM_ModeRequestMapping */
#define BswM_GetModeRequestQueueOfPCConfig()                          BswM_ModeRequestQueue  /**< the pointer to BswM_ModeRequestQueue */
#define BswM_GetNvMJobMappingOfPCConfig()                             BswM_NvMJobMapping  /**< the pointer to BswM_NvMJobMapping */
#define BswM_GetNvMJobStateOfPCConfig()                               BswM_NvMJobState  /**< the pointer to BswM_NvMJobState */
#define BswM_GetRuleStatesOfPCConfig()                                BswM_RuleStates  /**< the pointer to BswM_RuleStates */
#define BswM_GetRulesIndOfPCConfig()                                  BswM_RulesInd  /**< the pointer to BswM_RulesInd */
#define BswM_GetRulesOfPCConfig()                                     BswM_Rules  /**< the pointer to BswM_Rules */
#define BswM_GetSizeOfActionListsOfPCConfig()                         45U  /**< the number of accomplishable value elements in BswM_ActionLists */
#define BswM_GetSizeOfComMChannelMappingOfPCConfig()                  1U  /**< the number of accomplishable value elements in BswM_ComMChannelMapping */
#define BswM_GetSizeOfDeferredRulesOfPCConfig()                       30U  /**< the number of accomplishable value elements in BswM_DeferredRules */
#define BswM_GetSizeOfFrSMMappingOfPCConfig()                         1U  /**< the number of accomplishable value elements in BswM_FrSMMapping */
#define BswM_GetSizeOfGenericMappingOfPCConfig()                      4U  /**< the number of accomplishable value elements in BswM_GenericMapping */
#define BswM_GetSizeOfImmediateUserOfPCConfig()                       6U  /**< the number of accomplishable value elements in BswM_ImmediateUser */
#define BswM_GetSizeOfModeRequestMappingOfPCConfig()                  5U  /**< the number of accomplishable value elements in BswM_ModeRequestMapping */
#define BswM_GetSizeOfNvMJobMappingOfPCConfig()                       1U  /**< the number of accomplishable value elements in BswM_NvMJobMapping */
#define BswM_GetSizeOfRulesIndOfPCConfig()                            21U  /**< the number of accomplishable value elements in BswM_RulesInd */
#define BswM_GetSizeOfRulesOfPCConfig()                               40U  /**< the number of accomplishable value elements in BswM_Rules */
#define BswM_GetSizeOfTimerStateOfPCConfig()                          3U  /**< the number of accomplishable value elements in BswM_TimerState */
#define BswM_GetSizeOfTimerValueOfPCConfig()                          3U  /**< the number of accomplishable value elements in BswM_TimerValue */
#define BswM_GetTimerStateOfPCConfig()                                BswM_TimerState.raw  /**< the pointer to BswM_TimerState */
#define BswM_GetTimerValueOfPCConfig()                                BswM_TimerValue.raw  /**< the pointer to BswM_TimerValue */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDuplicatedRootDataMacros  BswM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define BswM_GetSizeOfActionListQueueOfPCConfig()                     BswM_GetSizeOfActionListsOfPCConfig()  /**< the number of accomplishable value elements in BswM_ActionListQueue */
#define BswM_GetSizeOfComMChannelStateOfPCConfig()                    BswM_GetSizeOfComMChannelMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_ComMChannelState */
#define BswM_GetSizeOfFrSMStateOfPCConfig()                           BswM_GetSizeOfFrSMMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_FrSMState */
#define BswM_GetSizeOfGenericStateOfPCConfig()                        BswM_GetSizeOfGenericMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_GenericState */
#define BswM_GetSizeOfModeRequestQueueOfPCConfig()                    BswM_GetSizeOfImmediateUserOfPCConfig()  /**< the number of accomplishable value elements in BswM_ModeRequestQueue */
#define BswM_GetSizeOfNvMJobStateOfPCConfig()                         BswM_GetSizeOfNvMJobMappingOfPCConfig()  /**< the number of accomplishable value elements in BswM_NvMJobState */
#define BswM_GetSizeOfRuleStatesOfPCConfig()                          BswM_GetSizeOfRulesOfPCConfig()  /**< the number of accomplishable value elements in BswM_RuleStates */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDataMacros  BswM Get Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read CONST and VAR data.
  \{
*/ 
#define BswM_GetActionListQueue(Index)                                (BswM_GetActionListQueueOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfActionLists(Index)                            (BswM_GetActionListsOfPCConfig()[(Index)].FctPtrOfActionLists)
#define BswM_GetComMChannelState(Index)                               (BswM_GetComMChannelStateOfPCConfig()[(Index)])
#define BswM_GetRulesIdxOfDeferredRules(Index)                        (BswM_GetDeferredRulesOfPCConfig()[(Index)].RulesIdxOfDeferredRules)
#define BswM_GetFrSMState(Index)                                      (BswM_GetFrSMStateOfPCConfig()[(Index)])
#define BswM_GetExternalIdOfGenericMapping(Index)                     (BswM_GetGenericMappingOfPCConfig()[(Index)].ExternalIdOfGenericMapping)
#define BswM_GetImmediateUserEndIdxOfGenericMapping(Index)            (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfGenericMapping)
#define BswM_GetImmediateUserStartIdxOfGenericMapping(Index)          (BswM_GetGenericMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfGenericMapping)
#define BswM_GetInitValueOfGenericMapping(Index)                      (BswM_GetGenericMappingOfPCConfig()[(Index)].InitValueOfGenericMapping)
#define BswM_GetGenericState(Index)                                   (BswM_GetGenericStateOfPCConfig()[(Index)])
#define BswM_GetMaskedBitsOfImmediateUser(Index)                      (BswM_GetImmediateUserOfPCConfig()[(Index)].MaskedBitsOfImmediateUser)
#define BswM_GetRulesIndEndIdxOfImmediateUser(Index)                  (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndEndIdxOfImmediateUser)
#define BswM_GetRulesIndStartIdxOfImmediateUser(Index)                (BswM_GetImmediateUserOfPCConfig()[(Index)].RulesIndStartIdxOfImmediateUser)
#define BswM_IsInitialized()                                          ((BswM_GetInitializedOfPCConfig()) != FALSE)
#define BswM_GetImmediateUserEndIdxOfModeRequestMapping(Index)        (BswM_GetModeRequestMappingOfPCConfig()[(Index)].ImmediateUserEndIdxOfModeRequestMapping)
#define BswM_GetImmediateUserStartIdxOfModeRequestMapping(Index)      (BswM_GetModeRequestMappingOfPCConfig()[(Index)].ImmediateUserStartIdxOfModeRequestMapping)
#define BswM_GetModeRequestQueue(Index)                               (BswM_GetModeRequestQueueOfPCConfig()[(Index)])
#define BswM_GetNvMJobState(Index)                                    (BswM_GetNvMJobStateOfPCConfig()[(Index)])
#define BswM_GetRuleStates(Index)                                     (BswM_GetRuleStatesOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfRules(Index)                                  (BswM_GetRulesOfPCConfig()[(Index)].FctPtrOfRules)
#define BswM_GetIdOfRules(Index)                                      (BswM_GetRulesOfPCConfig()[(Index)].IdOfRules)
#define BswM_GetInitOfRules(Index)                                    (BswM_GetRulesOfPCConfig()[(Index)].InitOfRules)
#define BswM_GetRulesInd(Index)                                       (BswM_GetRulesIndOfPCConfig()[(Index)])
#define BswM_GetTimerState(Index)                                     (BswM_GetTimerStateOfPCConfig()[(Index)])
#define BswM_GetTimerValue(Index)                                     (BswM_GetTimerValueOfPCConfig()[(Index)])
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetBitDataMacros  BswM Get Bit Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read bitcoded data elements.
  \{
*/ 
#define BswM_IsOnInitOfImmediateUser(Index)                           (BSWM_ONINITOFIMMEDIATEUSER_MASK == (BswM_GetMaskedBitsOfImmediateUser(Index) & BSWM_ONINITOFIMMEDIATEUSER_MASK))  /**< Arbitrate depending rules on initialization. */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDeduplicatedDataMacros  BswM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define BswM_GetExternalIdOfComMChannelMapping(Index)                 ComMConf_ComMChannel_A_FlexRay_5b5a9ac2  /**< External id of BswMComMIndication. */
#define BswM_GetImmediateUserEndIdxOfComMChannelMapping(Index)        1U  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_GetImmediateUserStartIdxOfComMChannelMapping(Index)      0U  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_IsImmediateUserUsedOfComMChannelMapping(Index)           (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfComMChannelMapping(Index)                  COMM_NO_COMMUNICATION  /**< Initialization value of port. */
#define BswM_GetExternalIdOfFrSMMapping(Index)                        ComMConf_ComMChannel_A_FlexRay_5b5a9ac2  /**< External id of BswMFrSMIndication. */
#define BswM_GetImmediateUserEndIdxOfFrSMMapping(Index)               2U  /**< the end index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_GetImmediateUserStartIdxOfFrSMMapping(Index)             1U  /**< the start index of the 0:n relation pointing to BswM_ImmediateUser */
#define BswM_IsImmediateUserUsedOfFrSMMapping(Index)                  (((TRUE)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetInitValueOfFrSMMapping(Index)                         FRSM_BSWM_READY  /**< Initialization value of port. */
#define BswM_IsImmediateUserUsedOfGenericMapping(Index)               (((boolean)(BswM_GetImmediateUserStartIdxOfGenericMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFGENERICMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_IsRulesIndUsedOfImmediateUser(Index)                     (((boolean)(BswM_GetRulesIndStartIdxOfImmediateUser(Index) != BSWM_NO_RULESINDSTARTIDXOFIMMEDIATEUSER)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_RulesInd */
#define BswM_IsImmediateUserUsedOfModeRequestMapping(Index)           (((boolean)(BswM_GetImmediateUserStartIdxOfModeRequestMapping(Index) != BSWM_NO_IMMEDIATEUSERSTARTIDXOFMODEREQUESTMAPPING)) != FALSE)  /**< TRUE, if the 0:n relation has 1 relation pointing to BswM_ImmediateUser */
#define BswM_GetExternalIdOfNvMJobMapping(Index)                      13  /**< External id of BswMNvMJobModeIndication. */
#define BswM_GetInitValueOfNvMJobMapping(Index)                       NVM_REQ_OK  /**< Initialization value of port. */
#define BswM_GetSizeOfActionListQueue()                               BswM_GetSizeOfActionListQueueOfPCConfig()
#define BswM_GetSizeOfActionLists()                                   BswM_GetSizeOfActionListsOfPCConfig()
#define BswM_GetSizeOfComMChannelMapping()                            BswM_GetSizeOfComMChannelMappingOfPCConfig()
#define BswM_GetSizeOfComMChannelState()                              BswM_GetSizeOfComMChannelStateOfPCConfig()
#define BswM_GetSizeOfDeferredRules()                                 BswM_GetSizeOfDeferredRulesOfPCConfig()
#define BswM_GetSizeOfFrSMMapping()                                   BswM_GetSizeOfFrSMMappingOfPCConfig()
#define BswM_GetSizeOfFrSMState()                                     BswM_GetSizeOfFrSMStateOfPCConfig()
#define BswM_GetSizeOfGenericMapping()                                BswM_GetSizeOfGenericMappingOfPCConfig()
#define BswM_GetSizeOfGenericState()                                  BswM_GetSizeOfGenericStateOfPCConfig()
#define BswM_GetSizeOfImmediateUser()                                 BswM_GetSizeOfImmediateUserOfPCConfig()
#define BswM_GetSizeOfModeRequestMapping()                            BswM_GetSizeOfModeRequestMappingOfPCConfig()
#define BswM_GetSizeOfModeRequestQueue()                              BswM_GetSizeOfModeRequestQueueOfPCConfig()
#define BswM_GetSizeOfNvMJobMapping()                                 BswM_GetSizeOfNvMJobMappingOfPCConfig()
#define BswM_GetSizeOfNvMJobState()                                   BswM_GetSizeOfNvMJobStateOfPCConfig()
#define BswM_GetSizeOfRuleStates()                                    BswM_GetSizeOfRuleStatesOfPCConfig()
#define BswM_GetSizeOfRules()                                         BswM_GetSizeOfRulesOfPCConfig()
#define BswM_GetSizeOfRulesInd()                                      BswM_GetSizeOfRulesIndOfPCConfig()
#define BswM_GetSizeOfTimerState()                                    BswM_GetSizeOfTimerStateOfPCConfig()
#define BswM_GetSizeOfTimerValue()                                    BswM_GetSizeOfTimerValueOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSetDataMacros  BswM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define BswM_SetActionListQueue(Index, Value)                         BswM_GetActionListQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetComMChannelState(Index, Value)                        BswM_GetComMChannelStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetFrSMState(Index, Value)                               BswM_GetFrSMStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetGenericState(Index, Value)                            BswM_GetGenericStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetInitialized(Value)                                    BswM_GetInitializedOfPCConfig() = (Value)
#define BswM_SetModeRequestQueue(Index, Value)                        BswM_GetModeRequestQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetNvMJobState(Index, Value)                             BswM_GetNvMJobStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetRuleStates(Index, Value)                              BswM_GetRuleStatesOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerState(Index, Value)                              BswM_GetTimerStateOfPCConfig()[(Index)] = (Value)
#define BswM_SetTimerValue(Index, Value)                              BswM_GetTimerValueOfPCConfig()[(Index)] = (Value)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCHasMacros  BswM Has Macros (PRE_COMPILE)
  \brief  These macros can be used to detect at runtime a deactivated piece of information. TRUE in the CONFIGURATION_VARIANT PRE-COMPILE, TRUE or FALSE in the CONFIGURATION_VARIANT POST-BUILD.
  \{
*/ 
#define BswM_HasActionListQueue()                                     (TRUE != FALSE)
#define BswM_HasActionLists()                                         (TRUE != FALSE)
#define BswM_HasFctPtrOfActionLists()                                 (TRUE != FALSE)
#define BswM_HasComMChannelMapping()                                  (TRUE != FALSE)
#define BswM_HasExternalIdOfComMChannelMapping()                      (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfComMChannelMapping()             (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfComMChannelMapping()           (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfComMChannelMapping()               (TRUE != FALSE)
#define BswM_HasInitValueOfComMChannelMapping()                       (TRUE != FALSE)
#define BswM_HasComMChannelState()                                    (TRUE != FALSE)
#define BswM_HasDeferredRules()                                       (TRUE != FALSE)
#define BswM_HasRulesIdxOfDeferredRules()                             (TRUE != FALSE)
#define BswM_HasFrSMMapping()                                         (TRUE != FALSE)
#define BswM_HasExternalIdOfFrSMMapping()                             (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfFrSMMapping()                    (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfFrSMMapping()                  (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfFrSMMapping()                      (TRUE != FALSE)
#define BswM_HasInitValueOfFrSMMapping()                              (TRUE != FALSE)
#define BswM_HasFrSMState()                                           (TRUE != FALSE)
#define BswM_HasGenericMapping()                                      (TRUE != FALSE)
#define BswM_HasExternalIdOfGenericMapping()                          (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfGenericMapping()                 (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfGenericMapping()               (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfGenericMapping()                   (TRUE != FALSE)
#define BswM_HasInitValueOfGenericMapping()                           (TRUE != FALSE)
#define BswM_HasGenericState()                                        (TRUE != FALSE)
#define BswM_HasImmediateUser()                                       (TRUE != FALSE)
#define BswM_HasMaskedBitsOfImmediateUser()                           (TRUE != FALSE)
#define BswM_HasOnInitOfImmediateUser()                               (TRUE != FALSE)
#define BswM_HasRulesIndEndIdxOfImmediateUser()                       (TRUE != FALSE)
#define BswM_HasRulesIndStartIdxOfImmediateUser()                     (TRUE != FALSE)
#define BswM_HasRulesIndUsedOfImmediateUser()                         (TRUE != FALSE)
#define BswM_HasInitialized()                                         (TRUE != FALSE)
#define BswM_HasModeRequestMapping()                                  (TRUE != FALSE)
#define BswM_HasImmediateUserEndIdxOfModeRequestMapping()             (TRUE != FALSE)
#define BswM_HasImmediateUserStartIdxOfModeRequestMapping()           (TRUE != FALSE)
#define BswM_HasImmediateUserUsedOfModeRequestMapping()               (TRUE != FALSE)
#define BswM_HasModeRequestQueue()                                    (TRUE != FALSE)
#define BswM_HasNvMJobMapping()                                       (TRUE != FALSE)
#define BswM_HasExternalIdOfNvMJobMapping()                           (TRUE != FALSE)
#define BswM_HasInitValueOfNvMJobMapping()                            (TRUE != FALSE)
#define BswM_HasNvMJobState()                                         (TRUE != FALSE)
#define BswM_HasRuleStates()                                          (TRUE != FALSE)
#define BswM_HasRules()                                               (TRUE != FALSE)
#define BswM_HasFctPtrOfRules()                                       (TRUE != FALSE)
#define BswM_HasIdOfRules()                                           (TRUE != FALSE)
#define BswM_HasInitOfRules()                                         (TRUE != FALSE)
#define BswM_HasRulesInd()                                            (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueue()                               (TRUE != FALSE)
#define BswM_HasSizeOfActionLists()                                   (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMapping()                            (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelState()                              (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRules()                                 (TRUE != FALSE)
#define BswM_HasSizeOfFrSMMapping()                                   (TRUE != FALSE)
#define BswM_HasSizeOfFrSMState()                                     (TRUE != FALSE)
#define BswM_HasSizeOfGenericMapping()                                (TRUE != FALSE)
#define BswM_HasSizeOfGenericState()                                  (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUser()                                 (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestMapping()                            (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueue()                              (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobMapping()                                 (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobState()                                   (TRUE != FALSE)
#define BswM_HasSizeOfRuleStates()                                    (TRUE != FALSE)
#define BswM_HasSizeOfRules()                                         (TRUE != FALSE)
#define BswM_HasSizeOfRulesInd()                                      (TRUE != FALSE)
#define BswM_HasSizeOfTimerState()                                    (TRUE != FALSE)
#define BswM_HasSizeOfTimerValue()                                    (TRUE != FALSE)
#define BswM_HasTimerState()                                          (TRUE != FALSE)
#define BswM_HasTimerValue()                                          (TRUE != FALSE)
#define BswM_HasPCConfig()                                            (TRUE != FALSE)
#define BswM_HasActionListQueueOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasActionListsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasComMChannelMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasComMChannelStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasDeferredRulesOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasFrSMMappingOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasFrSMStateOfPCConfig()                                 (TRUE != FALSE)
#define BswM_HasGenericMappingOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasGenericStateOfPCConfig()                              (TRUE != FALSE)
#define BswM_HasImmediateUserOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasModeRequestMappingOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasModeRequestQueueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasNvMJobMappingOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasNvMJobStateOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasRuleStatesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasRulesIndOfPCConfig()                                  (TRUE != FALSE)
#define BswM_HasRulesOfPCConfig()                                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueueOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelMappingOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasSizeOfComMChannelStateOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRulesOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfFrSMMappingOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfFrSMStateOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasSizeOfGenericMappingOfPCConfig()                      (TRUE != FALSE)
#define BswM_HasSizeOfGenericStateOfPCConfig()                        (TRUE != FALSE)
#define BswM_HasSizeOfImmediateUserOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestMappingOfPCConfig()                  (TRUE != FALSE)
#define BswM_HasSizeOfModeRequestQueueOfPCConfig()                    (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobMappingOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfNvMJobStateOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfRuleStatesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfRulesIndOfPCConfig()                            (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasSizeOfTimerStateOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfTimerValueOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasTimerStateOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasTimerValueOfPCConfig()                                (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIncrementDataMacros  BswM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define BswM_IncActionListQueue(Index)                                BswM_GetActionListQueue(Index)++
#define BswM_IncComMChannelState(Index)                               BswM_GetComMChannelState(Index)++
#define BswM_IncFrSMState(Index)                                      BswM_GetFrSMState(Index)++
#define BswM_IncGenericState(Index)                                   BswM_GetGenericState(Index)++
#define BswM_IncModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)++
#define BswM_IncNvMJobState(Index)                                    BswM_GetNvMJobState(Index)++
#define BswM_IncRuleStates(Index)                                     BswM_GetRuleStates(Index)++
#define BswM_IncTimerState(Index)                                     BswM_GetTimerState(Index)++
#define BswM_IncTimerValue(Index)                                     BswM_GetTimerValue(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCDecrementDataMacros  BswM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define BswM_DecActionListQueue(Index)                                BswM_GetActionListQueue(Index)--
#define BswM_DecComMChannelState(Index)                               BswM_GetComMChannelState(Index)--
#define BswM_DecFrSMState(Index)                                      BswM_GetFrSMState(Index)--
#define BswM_DecGenericState(Index)                                   BswM_GetGenericState(Index)--
#define BswM_DecModeRequestQueue(Index)                               BswM_GetModeRequestQueue(Index)--
#define BswM_DecNvMJobState(Index)                                    BswM_GetNvMJobState(Index)--
#define BswM_DecRuleStates(Index)                                     BswM_GetRuleStates(Index)--
#define BswM_DecTimerState(Index)                                     BswM_GetTimerState(Index)--
#define BswM_DecTimerValue(Index)                                     BswM_GetTimerValue(Index)--
/** 
  \}
*/ 

  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/** 
  \defgroup  DataAccessMacros  Data Access Macros
  \brief  generated data access macros to abstract the generated data from the code to read and write CONST or VAR data.
  \{
*/ 
  /* PRQA S 3453 MACROS_3453 */  /* MD_CSL_3453 */
/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
  /* PRQA L:MACROS_3453 */
/** 
  \}
*/ 

/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL ACCESS FUNCTION MACROS
**********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/* PRQA S 3451 EXTERNDECLARATIONS */ /* MD_BswM_3451 */ 
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  BswM_ActionLists
**********************************************************************************************************************/
/** 
  \var    BswM_ActionLists
  \details
  Element    Description
  FctPtr     Pointer to the array list function.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[45];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_DeferredRules
**********************************************************************************************************************/
/** 
  \var    BswM_DeferredRules
  \details
  Element     Description
  RulesIdx    the index of the 1:1 relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[30];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericMapping
**********************************************************************************************************************/
/** 
  \var    BswM_GenericMapping
  \brief  Maps the external id of BswMGenericRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ExternalId               External id of BswMGenericRequest.
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
  InitValue                Initialization value of port.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_GenericMappingType, BSWM_CONST) BswM_GenericMapping[4];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ImmediateUser
**********************************************************************************************************************/
/** 
  \var    BswM_ImmediateUser
  \brief  Contains all immediate request ports.
  \details
  Element             Description
  MaskedBits          contains bitcoded the boolean data of BswM_OnInitOfImmediateUser, BswM_RulesIndUsedOfImmediateUser
  RulesIndEndIdx      the end index of the 0:n relation pointing to BswM_RulesInd
  RulesIndStartIdx    the start index of the 0:n relation pointing to BswM_RulesInd
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_ImmediateUserType, BSWM_CONST) BswM_ImmediateUser[6];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestMapping
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestMapping
  \brief  Maps the external id of BswMSwcModeRequest to an internal id and references immediate request ports.
  \details
  Element                  Description
  ImmediateUserEndIdx      the end index of the 0:n relation pointing to BswM_ImmediateUser
  ImmediateUserStartIdx    the start index of the 0:n relation pointing to BswM_ImmediateUser
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_ModeRequestMappingType, BSWM_CONST) BswM_ModeRequestMapping[5];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Rules
**********************************************************************************************************************/
/** 
  \var    BswM_Rules
  \details
  Element    Description
  Id         External id of rule.
  Init       Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED).
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[40];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RulesInd
**********************************************************************************************************************/
/** 
  \var    BswM_RulesInd
  \brief  the indexes of the 1:1 sorted relation pointing to BswM_Rules
*/ 
#define BSWM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_RulesIndType, BSWM_CONST) BswM_RulesInd[21];
#define BSWM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ActionListQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ActionListQueue
  \brief  Variable to store action lists which shall be executed.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uBswM_ActionListQueueType, BSWM_VAR_NOINIT) BswM_ActionListQueue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ComMChannelState
**********************************************************************************************************************/
/** 
  \var    BswM_ComMChannelState
  \brief  Variable to store current mode of BswMComMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(ComM_ModeType, BSWM_VAR_NOINIT) BswM_ComMChannelState[1];
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_FrSMState
**********************************************************************************************************************/
/** 
  \var    BswM_FrSMState
  \brief  Variable to store current mode of BswMFrSMIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(FrSM_BswM_StateType, BSWM_VAR_NOINIT) BswM_FrSMState[1];
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_GenericState
**********************************************************************************************************************/
/** 
  \var    BswM_GenericState
  \brief  Variable to store current mode of BswMGenericRequest mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(BswM_ModeType, BSWM_VAR_NOINIT) BswM_GenericState[4];
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_Initialized
**********************************************************************************************************************/
#define BSWM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(BswM_InitializedType, BSWM_VAR_ZERO_INIT) BswM_Initialized;
#define BSWM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_ModeRequestQueue
**********************************************************************************************************************/
/** 
  \var    BswM_ModeRequestQueue
  \brief  Variable to store an immediate mode request which must be queued because of a current active arbitration.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(BswM_ModeRequestQueueType, BSWM_VAR_NOINIT) BswM_ModeRequestQueue[6];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_NvMJobState
**********************************************************************************************************************/
/** 
  \var    BswM_NvMJobState
  \brief  Variable to store current mode of BswMNvMJobModeIndication mode request ports.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(NvM_RequestResultType, BSWM_VAR_NOINIT) BswM_NvMJobState[1];
#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_RuleStates
**********************************************************************************************************************/
/** 
  \var    BswM_RuleStates
  \brief  Stores the last execution state of the rule.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[40];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerState
**********************************************************************************************************************/
/** 
  \var    BswM_TimerState
  \brief  Variable to store current state of BswMTimer (STARTED, STOPPER OR EXPIRED).
*/ 
#define BSWM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uBswM_TimerStateType, BSWM_VAR_NOINIT) BswM_TimerState;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  BswM_TimerValue
**********************************************************************************************************************/
/** 
  \var    BswM_TimerValue
  \brief  Variable to store current timer values.
*/ 
#define BSWM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern VAR(uBswM_TimerValueType, BSWM_VAR_NOINIT) BswM_TimerValue;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
#define BSWM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */



/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/* PRQA L:EXTERNDECLARATIONS */


#define BSWM_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#if (BSWM_USE_INIT_POINTER == STD_ON)
extern  P2CONST(BswM_ConfigType, AUTOMATIC, BSWM_PBCFG) BswM_ConfigPtr;
#endif

#define BSWM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CONFIGURATION CLASS: POST_BUILD
  SECTION: GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/


/* -----------------------------------------------------------------------------
    &&&~ EXTERNAL DECLARATIONS
 ----------------------------------------------------------------------------- */

#define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/*! \addtogroup    BswMGeneratedFunctions BswM Generated Functions
 * \{
 */
/* PRQA S 0779 FUNCTIONDECLARATIONS */ /* MD_BswM_0779 */

/**********************************************************************************************************************
 *  Init
 *********************************************************************************************************************/
/*! \defgroup    Init
 * \{
 */
/**********************************************************************************************************************
 *  BswM_Init_Gen
 *********************************************************************************************************************/
/*!
 * \brief       Initializes BswM.
 * \details     Part of the BswM_Init. Initializes all generated variables and executes action lists for initialization.
 * \pre         -
 * \reentrant   FALSE
 * \synchronous TRUE
 * \note        May only be called by BswM_Init.
 */
extern FUNC(void, BSWM_CODE) BswM_Init_Gen(void);
/*! \} */ /* End of group Init */

/*!
 * \{
 * \brief       Function called by Rte to indicate a new mode of a SwcModeRequestPort.
 * \details     Mode is read from Rte, stored and depending immediate rules are arbitrated.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        Function is called by RTE.
 */
/*! \fn BswM_Read_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup */
/*! \} */ /* End of sharing description for BswMRteRequestFunctions */

/**********************************************************************************************************************
 *  Common
 *********************************************************************************************************************/
/*! \defgroup    Common
 * \{
 */
/**********************************************************************************************************************
 *  BswM_ModeNotificationFct
 *********************************************************************************************************************/
/*!
 * \brief       Switch Modes of RTE and writes RTE values.
 * \details     Forwards a BswM Switch Action to the RTE and writes value of RteRequestPorts to RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
extern FUNC(void, BSWM_CODE) BswM_ModeNotificationFct(void);
/*! \} */ /* End of group Common */

/**********************************************************************************************************************
 *  SwcModeRequestUpdate
 *********************************************************************************************************************/
/*! \defgroup    SwcModeRequestUpdate
 * \{
 */
/**********************************************************************************************************************
 *  BswM_SwcModeRequestUpdateFct
 *********************************************************************************************************************/
/*!
 * \brief       Reads port values from RTE.
 * \details     Gets the current value of SwcModeRequest Ports and SwcNotification Ports from RTE.
 * \pre         -
 * \context     TASK
 * \reentrant   TRUE
 * \synchronous TRUE
 * \note        May only be called by BswM_MainFunction.
 */
extern FUNC(void, BSWM_CODE) BswM_SwcModeRequestUpdateFct(void);
/*! \} */ /* End of group SwcModeRequestUpdate */
/* PRQA L:FUNCTIONDECLARATIONS */
/*! \} */ /* End of group BswMGeneratedFunctions */


#if (BSWM_FUNCTION_BASED == STD_OFF)
/**********************************************************************************************************************
 *  BswM_Action_ActionListHandler()
 **********************************************************************************************************************/
/*!
 * \brief       Executes an action list.
 * \details     Executes all actions of an action list.
 * \param[in]   handleId  Id of the action list to execute.
 * \return      E_OK      Action list was completely executed.
 * \return      E_NOT_OK  Action list was aborted because an action failed.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(Std_ReturnType, BSWM_CODE) BswM_Action_ActionListHandler(BswM_HandleType handleId);
#endif

#if ((BSWM_RULES == STD_ON)  && (BSWM_FUNCTION_BASED == STD_OFF))
/**********************************************************************************************************************
 *  BswM_ArbitrateRule()
 **********************************************************************************************************************/
/*!
 * \brief       Arbitrates a rule.
 * \details     Evaluates the logical expression of the rule and determines the action list to execute.
 * \param[in]   ruleId  Id of the rule to arbitrate
 * \return      ID of action list to execute (BSWM_NO_ACTIONLIST if no action list shall be executed)
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(BswM_SizeOfActionListsType, BSWM_CODE) BswM_ArbitrateRule(BswM_HandleType ruleId);
#endif

/**********************************************************************************************************************
 *  BswM_ExecuteIpduGroupControl()
 **********************************************************************************************************************/
/*!
 * \brief       Enabes and disables PDU Groups and DeadlineMonitoring in Com.
 * \details     Forwards the changes to the local Com_IpduGroupVector caused by executed actions to the corresponding 
 *              Com APIS.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ExecuteIpduGroupControl(void);

#if(BSWM_IMMEDIATEUSER == STD_ON)
# if (BSWM_DEV_ERROR_REPORT == STD_ON)
/**********************************************************************************************************************
 *  BswM_ImmediateModeRequest()
 **********************************************************************************************************************/
/*!
 * \brief       Processes an immediate mode request.
 * \details     Queues mode request and starts arbitration of depending rules if no other request is currently active.
 * \param[in]   start   Handle of first mode request.
 * \param[in]   end     Handle of last mode request.
 * \param[in]   sid     Service Id of calling API. Only available if BSWM_DEV_ERROR_REPORT is STD_ON.
 * \pre         -
 * \context     ANY
 * \reentrant   TRUE
 * \synchronous TRUE
 */
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end, uint8 sid);
# else
extern FUNC(void, BSWM_CODE) BswM_ImmediateModeRequest(BswM_SizeOfImmediateUserType start, BswM_SizeOfImmediateUserType end);
# endif
#endif

#define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif /* BSWM_PRIVATE_CFG_H */


