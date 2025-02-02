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
 *            Module: IpduM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IpduM_Cfg.h
 *   Generation Time: 2018-01-02 16:37:32
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


#if !defined (IPDUM_CFG_H)
# define IPDUM_CFG_H

/**********************************************************************************************************************
 * MISRA JUSTIFICATION
 *********************************************************************************************************************/
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0779 EOF */ /* MD_CSL_0779 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
# include "Platform_Types.h"
# include "ComStack_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#ifndef IPDUM_USE_DUMMY_FUNCTIONS
#define IPDUM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef IPDUM_USE_DUMMY_STATEMENT
#define IPDUM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef IPDUM_DUMMY_STATEMENT
#define IPDUM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef IPDUM_DUMMY_STATEMENT_CONST
#define IPDUM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef IPDUM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define IPDUM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef IPDUM_ATOMIC_VARIABLE_ACCESS
#define IPDUM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef IPDUM_PROCESSOR_RH850_1363
#define IPDUM_PROCESSOR_RH850_1363
#endif
#ifndef IPDUM_COMP_GREENHILLS
#define IPDUM_COMP_GREENHILLS
#endif
#ifndef IPDUM_GEN_GENERATOR_MSR
#define IPDUM_GEN_GENERATOR_MSR
#endif
#ifndef IPDUM_CPUTYPE_BITORDER_LSB2MSB
#define IPDUM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef IPDUM_CONFIGURATION_VARIANT_PRECOMPILE
#define IPDUM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef IPDUM_CONFIGURATION_VARIANT_LINKTIME
#define IPDUM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef IPDUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define IPDUM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef IPDUM_CONFIGURATION_VARIANT
#define IPDUM_CONFIGURATION_VARIANT IPDUM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef IPDUM_POSTBUILD_VARIANT_SUPPORT
#define IPDUM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


#define IPDUM_DEV_ERROR_DETECT                 STD_ON  /**< /ActiveEcuC/IpduM/IPduMGeneral[0:IpduMSafeBswChecks] || /ActiveEcuC/IpduM/IPduMGeneral[0:IpduMDevErrorDetect] */
#define IPDUM_DEV_ERROR_REPORT                 STD_ON  /**< /ActiveEcuC/IpduM/IPduMGeneral[0:IpduMDevErrorDetect] */

#define IPDUM_LITTLE_ENDIAN                    0
#define IPDUM_BIG_ENDIAN                       1
#define IPDUM_HEADER_BYTE_ORDER                IPDUM_BIG_ENDIAN /**< /ActiveEcuC/IpduM/IPduMGeneral[0:IpduMHeaderByteOrder] */

#define IPDUM_VERSION_INFO_API                 STD_OFF  /**< /ActiveEcuC/IpduM/IPduMGeneral[0:IpduMVersionInfoApi] */
#define IPDUM_DIRECT_COM_INVOCATION            STD_ON  /**< /ActiveEcuC/IpduM/IpduMPublishedInformation[0:IpduMRxDirectComInvocation] */
#define IPDUM_TRIGGER_TRANSMIT_API             STD_ON  /**< /ActiveEcuC/PduR/IpduM[0:PduRTriggertransmit] */
#define IPDUM_TX_CONFIRMATION_API              STD_ON  /**< /ActiveEcuC/PduR/IpduM[0:PduRTxConfirmation] */
#define IPDUM_UL_TRIGGER_TRANSMIT_API          STD_ON
#define IPDUM_UL_TX_CONFIRMATION_API           STD_ON




/**
 * \defgroup IpduMHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define IpduMConf_IpduMRxIndication_pduTr_SVC_A_FlexRay_434514f6_In   0
/**\} */




/**
 * \defgroup IpduMHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define IpduMConf_IpduMTxDynamicPart_ANFRAGE_23008def                 0
#define IpduMConf_IpduMTxDynamicPart_DBG_EPS_BS_MOD_58_BYTE_23008def  1
#define IpduMConf_IpduMTxDynamicPart_DBG_EPS_MOD_EXT_120_BYTE_23008def 2
#define IpduMConf_IpduMTxDynamicPart_RQ_STG_EFAN_23008def             3
#define IpduMConf_IpduMTxDynamicPart_SECU_CHAL_23008def               4
/**\} */




/**
 * \defgroup IpduMHandleIds Handle IDs.
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define IpduMConf_IpduMTxRequest_pduTr_FR_DBG_EPS_A_FlexRay_7d601c47  0
#define IpduMConf_IpduMTxRequest_pduTr_SVC_A_FlexRay_434514f6_Out     1
/**\} */

/* User Config File Start */

/* User Config File End */


/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#endif  /* IPDUM_CFG_H */
/**********************************************************************************************************************
  END OF FILE: IpduM_Cfg.h
**********************************************************************************************************************/

