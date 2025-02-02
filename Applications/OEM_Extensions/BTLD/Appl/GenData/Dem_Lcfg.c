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
 *            Module: Dem
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2018-01-04 11:34:43
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



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[1] = {
    /* Index    ReadDataFunc                                                                Referable Keys */
  { /*     0 */  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR }   /* [#NoDataElementConfigured] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06U },  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_STARTUP, AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_SYNC_LOSS, AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_A, AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_B, AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_A, AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_B, AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_A, AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_B, AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_ALL_RUN_REQUESTS_KILLED, AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_IMPROPER_CALLER, AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_RAM_CHECK_FAILED, AutoCreatedDemEvent_FlsConfigSet_FLS_E_COMPARE_FAILED, AutoCreatedDemEvent_FlsConfigSet_FLS_E_ERASE_FAILED, AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED, AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, AutoCreatedDemEvent_FlsConfigSet_FLS_E_WRITE_FAILED, AutoCreatedDemEvent_McuModuleConfiguration_MCU_E_CLOCK_FAILURE, AutoCreatedDemEvent_contr_EPS_A_FlexRay_FrDemCtrlTestResultRef, DemEventParameter, DemEventParameter_002, DemEventParameter_003, DemEventParameter_004, DemEventParameter_005, DemEventParameter_006, DemEventParameter_007, DemEventParameter_008, DemEventParameter_009, DemEventParameter_010, DemEventParameter_011] */
  { /*     1 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00U }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element      Description
  EventKind    DemEventKind of the DemEventParameter
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[31] = {
    /* Index    EventKind                                               Referable Keys */
  { /*     0 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [#EVENT_INVALID, Satellite#0] */
  { /*     1 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter, Satellite#0] */
  { /*     2 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_002, Satellite#0] */
  { /*     3 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_003, Satellite#0] */
  { /*     4 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_004, Satellite#0] */
  { /*     5 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_005, Satellite#0] */
  { /*     6 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_006, Satellite#0] */
  { /*     7 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_007, Satellite#0] */
  { /*     8 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_008, Satellite#0] */
  { /*     9 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_009, Satellite#0] */
  { /*    10 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_010, Satellite#0] */
  { /*    11 */ DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE },  /* [DemEventParameter_011, Satellite#0] */
  { /*    12 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_STARTUP, Satellite#0] */
  { /*    13 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_SYNC_LOSS, Satellite#0] */
  { /*    14 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_A, Satellite#0] */
  { /*    15 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_B, Satellite#0] */
  { /*    16 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_A, Satellite#0] */
  { /*    17 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_B, Satellite#0] */
  { /*    18 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_A, Satellite#0] */
  { /*    19 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_B, Satellite#0] */
  { /*    20 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_ALL_RUN_REQUESTS_KILLED, Satellite#0] */
  { /*    21 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, Satellite#0] */
  { /*    22 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_IMPROPER_CALLER, Satellite#0] */
  { /*    23 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_RAM_CHECK_FAILED, Satellite#0] */
  { /*    24 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  { /*    25 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  { /*    26 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  { /*    27 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  { /*    28 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  { /*    29 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE },  /* [AutoCreatedDemEvent_McuModuleConfiguration_MCU_E_CLOCK_FAILURE, Satellite#0] */
  { /*    30 */ DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE }   /* [AutoCreatedDemEvent_contr_EPS_A_FlexRay_FrDemCtrlTestResultRef, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[10] = {
  /* Index     MemoryDataPtr                                                                                  Referable Keys */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()       /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[10] = {
  /* Index     MemoryDataSize                                                        Referable Keys */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())      ,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())     ,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0()) ,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1()) ,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2()) ,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3()) ,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4()) ,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5()) ,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6()) ,  /* [__INVALID__CONFIG__] */
  /*     9 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())    /* [__INVALID__CONFIG__] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 8 * Primary, ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_SharedDataPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[9] = {
  /* Index     MemoryEntry                                                                                             Referable Keys */
  /*     0 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     1 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     2 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     3 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     4 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     5 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     6 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     7 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [__INVALID__CONFIG__] */
  /*     8 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetReadoutBuffer(0).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[0].Data] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[1];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[31];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DemEventParameter, Satellite#0] */
  /*     2 */  /* [DemEventParameter_002, Satellite#0] */
  /*     3 */  /* [DemEventParameter_003, Satellite#0] */
  /*     4 */  /* [DemEventParameter_004, Satellite#0] */
  /*     5 */  /* [DemEventParameter_005, Satellite#0] */
  /*     6 */  /* [DemEventParameter_006, Satellite#0] */
  /*     7 */  /* [DemEventParameter_007, Satellite#0] */
  /*     8 */  /* [DemEventParameter_008, Satellite#0] */
  /*     9 */  /* [DemEventParameter_009, Satellite#0] */
  /*    10 */  /* [DemEventParameter_010, Satellite#0] */
  /*    11 */  /* [DemEventParameter_011, Satellite#0] */
  /*    12 */  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_STARTUP, Satellite#0] */
  /*    13 */  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_SYNC_LOSS, Satellite#0] */
  /*    14 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_A, Satellite#0] */
  /*    15 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_B, Satellite#0] */
  /*    16 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_A, Satellite#0] */
  /*    17 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_B, Satellite#0] */
  /*    18 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_A, Satellite#0] */
  /*    19 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_B, Satellite#0] */
  /*    20 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_ALL_RUN_REQUESTS_KILLED, Satellite#0] */
  /*    21 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, Satellite#0] */
  /*    22 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_IMPROPER_CALLER, Satellite#0] */
  /*    23 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_RAM_CHECK_FAILED, Satellite#0] */
  /*    24 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  /*    25 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  /*    26 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  /*    27 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  /*    28 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  /*    29 */  /* [AutoCreatedDemEvent_McuModuleConfiguration_MCU_E_CLOCK_FAILURE, Satellite#0] */
  /*    30 */  /* [AutoCreatedDemEvent_contr_EPS_A_FlexRay_FrDemCtrlTestResultRef, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[31];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [DemEventParameter, Satellite#0] */
  /*     2 */  /* [DemEventParameter_002, Satellite#0] */
  /*     3 */  /* [DemEventParameter_003, Satellite#0] */
  /*     4 */  /* [DemEventParameter_004, Satellite#0] */
  /*     5 */  /* [DemEventParameter_005, Satellite#0] */
  /*     6 */  /* [DemEventParameter_006, Satellite#0] */
  /*     7 */  /* [DemEventParameter_007, Satellite#0] */
  /*     8 */  /* [DemEventParameter_008, Satellite#0] */
  /*     9 */  /* [DemEventParameter_009, Satellite#0] */
  /*    10 */  /* [DemEventParameter_010, Satellite#0] */
  /*    11 */  /* [DemEventParameter_011, Satellite#0] */
  /*    12 */  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_STARTUP, Satellite#0] */
  /*    13 */  /* [AutoCreatedDemEvent_A_FlexRay_5b5a9ac2_FRSM_E_CLUSTER_SYNC_LOSS, Satellite#0] */
  /*    14 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_A, Satellite#0] */
  /*    15 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_ACS_CH_B, Satellite#0] */
  /*    16 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_A, Satellite#0] */
  /*    17 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_NIT_CH_B, Satellite#0] */
  /*    18 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_A, Satellite#0] */
  /*    19 */  /* [AutoCreatedDemEvent_A_FlexRay_FRIF_E_SW_CH_B, Satellite#0] */
  /*    20 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_ALL_RUN_REQUESTS_KILLED, Satellite#0] */
  /*    21 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_CONFIGURATION_DATA_INCONSISTENT, Satellite#0] */
  /*    22 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_IMPROPER_CALLER, Satellite#0] */
  /*    23 */  /* [AutoCreatedDemEvent_EcuMConfiguration_ECUM_E_RAM_CHECK_FAILED, Satellite#0] */
  /*    24 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  /*    25 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  /*    26 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  /*    27 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  /*    28 */  /* [AutoCreatedDemEvent_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  /*    29 */  /* [AutoCreatedDemEvent_McuModuleConfiguration_MCU_E_CLOCK_FAILURE, Satellite#0] */
  /*    30 */  /* [AutoCreatedDemEvent_contr_EPS_A_FlexRay_FrDemCtrlTestResultRef, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[4];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[1];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_NOINIT) Dem_Cfg_SatelliteInfo0;
#define DEM_STOP_SEC_0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Bmw (Vector), VARIANT-PRE-COMPILE, 11.06.02.92975]
**********************************************************************************************************************/

