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
 *   Generation Time: 2018-01-04 11:34:41
 *           Project: BTLD - Version 1.0
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

#include "Rte_BswM.h" 
#include "Fr.h" 
#include "Fee_30_SmallSector.h" 
#include "FrIf.h" 
#include "PduR.h" 
#include "FrSM.h" 
#include "FrTp.h" 
#include "FrXcp.h" 
#include "Xcp.h" 
#include "ComM.h" 
#include "Dcm.h" 
#include "Rte_Main.h" 
#include "Dlog_Nvm.h" 
#include "Prog_Internal.h" 
#include "Boot_Main.h" 
#include "Mcu.h" 
#include "ApplFr_Stubs.h" 
#include "Dlog_PBCfg.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BSWM_INIT_GEN                STD_ON 
#define BSWM_MODENOTIFICATIONFCT     STD_OFF 
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




#define BSWM_ID_RULE_BswMRule_DcmProgGlue_ResetWhenBtldDefaultSession 0U 
#define BSWM_ID_RULE_Rule_DcmEcuReset                                 1U 

#define BSWM_ID_AL_AL_DcmProgGlue_ResetWhenBtldDefaultSession_True 0U 
#define BSWM_ID_AL_INIT_AL_Initialize                              1U 
#define BSWM_ID_AL_AL_ResetExecution                               2U 
#define BSWM_ID_AL_AL_switch_to_FULL_COM                           3U 
#define BSWM_ID_AL_EcumAlOnRunII                                   4U 


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
#define BswM_GetDeferredRulesOfPCConfig()                             BswM_DeferredRules  /**< the pointer to BswM_DeferredRules */
#define BswM_GetInitializedOfPCConfig()                               BswM_Initialized  /**< the pointer to BswM_Initialized */
#define BswM_GetRuleStatesOfPCConfig()                                BswM_RuleStates  /**< the pointer to BswM_RuleStates */
#define BswM_GetRulesOfPCConfig()                                     BswM_Rules  /**< the pointer to BswM_Rules */
#define BswM_GetSizeOfActionListsOfPCConfig()                         5U  /**< the number of accomplishable value elements in BswM_ActionLists */
#define BswM_GetSizeOfDeferredRulesOfPCConfig()                       2U  /**< the number of accomplishable value elements in BswM_DeferredRules */
#define BswM_GetSizeOfRulesOfPCConfig()                               2U  /**< the number of accomplishable value elements in BswM_Rules */
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDuplicatedRootDataMacros  BswM Get Duplicated Root Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated root data elements.
  \{
*/ 
#define BswM_GetSizeOfActionListQueueOfPCConfig()                     BswM_GetSizeOfActionListsOfPCConfig()  /**< the number of accomplishable value elements in BswM_ActionListQueue */
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
#define BswM_GetRulesIdxOfDeferredRules(Index)                        (BswM_GetDeferredRulesOfPCConfig()[(Index)].RulesIdxOfDeferredRules)
#define BswM_IsInitialized()                                          ((BswM_GetInitializedOfPCConfig()) != FALSE)
#define BswM_GetRuleStates(Index)                                     (BswM_GetRuleStatesOfPCConfig()[(Index)])
#define BswM_GetFctPtrOfRules(Index)                                  (BswM_GetRulesOfPCConfig()[(Index)].FctPtrOfRules)
#define BswM_GetIdOfRules(Index)                                      (BswM_GetRulesOfPCConfig()[(Index)].IdOfRules)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCGetDeduplicatedDataMacros  BswM Get Deduplicated Data Macros (PRE_COMPILE)
  \brief  These macros can be used to read deduplicated data elements.
  \{
*/ 
#define BswM_GetInitOfRules(Index)                                    BSWM_FALSE  /**< Initialization value of rule state (TRUE, FALSE, UNDEFINED or DEACTIVATED). */
#define BswM_GetSizeOfActionListQueue()                               BswM_GetSizeOfActionListQueueOfPCConfig()
#define BswM_GetSizeOfActionLists()                                   BswM_GetSizeOfActionListsOfPCConfig()
#define BswM_GetSizeOfDeferredRules()                                 BswM_GetSizeOfDeferredRulesOfPCConfig()
#define BswM_GetSizeOfRuleStates()                                    BswM_GetSizeOfRuleStatesOfPCConfig()
#define BswM_GetSizeOfRules()                                         BswM_GetSizeOfRulesOfPCConfig()
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCSetDataMacros  BswM Set Data Macros (PRE_COMPILE)
  \brief  These macros can be used to write data.
  \{
*/ 
#define BswM_SetActionListQueue(Index, Value)                         BswM_GetActionListQueueOfPCConfig()[(Index)] = (Value)
#define BswM_SetInitialized(Value)                                    BswM_GetInitializedOfPCConfig() = (Value)
#define BswM_SetRuleStates(Index, Value)                              BswM_GetRuleStatesOfPCConfig()[(Index)] = (Value)
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
#define BswM_HasDeferredRules()                                       (TRUE != FALSE)
#define BswM_HasRulesIdxOfDeferredRules()                             (TRUE != FALSE)
#define BswM_HasInitialized()                                         (TRUE != FALSE)
#define BswM_HasRuleStates()                                          (TRUE != FALSE)
#define BswM_HasRules()                                               (TRUE != FALSE)
#define BswM_HasFctPtrOfRules()                                       (TRUE != FALSE)
#define BswM_HasIdOfRules()                                           (TRUE != FALSE)
#define BswM_HasInitOfRules()                                         (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueue()                               (TRUE != FALSE)
#define BswM_HasSizeOfActionLists()                                   (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRules()                                 (TRUE != FALSE)
#define BswM_HasSizeOfRuleStates()                                    (TRUE != FALSE)
#define BswM_HasSizeOfRules()                                         (TRUE != FALSE)
#define BswM_HasPCConfig()                                            (TRUE != FALSE)
#define BswM_HasActionListQueueOfPCConfig()                           (TRUE != FALSE)
#define BswM_HasActionListsOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasDeferredRulesOfPCConfig()                             (TRUE != FALSE)
#define BswM_HasInitializedOfPCConfig()                               (TRUE != FALSE)
#define BswM_HasRuleStatesOfPCConfig()                                (TRUE != FALSE)
#define BswM_HasRulesOfPCConfig()                                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListQueueOfPCConfig()                     (TRUE != FALSE)
#define BswM_HasSizeOfActionListsOfPCConfig()                         (TRUE != FALSE)
#define BswM_HasSizeOfDeferredRulesOfPCConfig()                       (TRUE != FALSE)
#define BswM_HasSizeOfRuleStatesOfPCConfig()                          (TRUE != FALSE)
#define BswM_HasSizeOfRulesOfPCConfig()                               (TRUE != FALSE)
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCIncrementDataMacros  BswM Increment Data Macros (PRE_COMPILE)
  \brief  These macros can be used to increment VAR data with numerical nature.
  \{
*/ 
#define BswM_IncActionListQueue(Index)                                BswM_GetActionListQueue(Index)++
#define BswM_IncRuleStates(Index)                                     BswM_GetRuleStates(Index)++
/** 
  \}
*/ 

/** 
  \defgroup  BswMPCDecrementDataMacros  BswM Decrement Data Macros (PRE_COMPILE)
  \brief  These macros can be used to decrement VAR data with numerical nature.
  \{
*/ 
#define BswM_DecActionListQueue(Index)                                BswM_GetActionListQueue(Index)--
#define BswM_DecRuleStates(Index)                                     BswM_GetRuleStates(Index)--
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
extern CONST(BswM_ActionListsType, BSWM_CONST) BswM_ActionLists[5];
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
extern CONST(BswM_DeferredRulesType, BSWM_CONST) BswM_DeferredRules[2];
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
  FctPtr     Pointer to the rule function which does the arbitration.
*/ 
#define BSWM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
extern CONST(BswM_RulesType, BSWM_CONST) BswM_Rules[2];
#define BSWM_STOP_SEC_CONST_UNSPECIFIED
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
extern VAR(BswM_RuleStatesType, BSWM_VAR_NOINIT) BswM_RuleStates[2];
#define BSWM_STOP_SEC_VAR_NOINIT_8BIT
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


