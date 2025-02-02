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
 *          File:  Rte_DemMaster_0.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DemMaster_0>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DEMMASTER_0_H
# define _RTE_DEMMASTER_0_H

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

# include "Rte_DemMaster_0_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBClrEvt_CodingEventNotCoded_ClearEventAllowed(P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Allowed); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData(P2VAR(DataArrayType_uint8_6, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_FileManipulated_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_FileManipulated_ReadData(P2VAR(DataArrayType_uint8_18, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_StartApplication_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtSwid_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtSwid_ReadData(P2VAR(DataArrayType_uint8_4, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtVin_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtVin_ReadData(P2VAR(DataArrayType_uint8_7, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Systemzeit_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Systemzeit_ReadData(P2VAR(DataArrayType_uint8_4, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_GeneralCBDataEvt_EventDataChanged(Dem_EventIdType EventId); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_CBClrEvt_CodingEventNotCoded_ClearEventAllowed Rte_Call_DemMaster_0_CBClrEvt_CodingEventNotCoded_ClearEventAllowed
#  define RTE_START_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_OMC_APPL_CODE) Omc_ClearEventAllowed(P2VAR(boolean, AUTOMATIC, RTE_OMC_APPL_VAR) Allowed); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_OMC_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBClrEvt_VsmEventOpmode_ClearEventAllowed Omc_ClearEventAllowed
#  define Rte_Call_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_DemDataElementClass_FUwBn_ReadData CSDataServices_DemDataElementClass_FUwBn_ReadData
#  define RTE_START_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_DemDataElementClass_FUwTn_ReadData CSDataServices_DemDataElementClass_FUwTn_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_FileManipulated_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_FileManipulated_ReadData
#  define RTE_START_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_INTEGRATIONSAMPLE_APPL_CODE) R_ReadDataMILE_KM(P2VAR(uint8, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_INTEGRATIONSAMPLE_APPL_CODE) R_ReadDataMILE_KM(P2VAR(IntegrationSample_Dem_DataDemDataElementClass_KILOMETER_ArrayType, AUTOMATIC, RTE_INTEGRATIONSAMPLE_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_INTEGRATIONSAMPLE_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CBReadData_DemDataElementClass_KmStand_ReadData R_ReadDataMILE_KM
#  define Rte_Call_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_StartApplication_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_SwtSwid_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtSwid_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_SwtVin_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_SwtVin_ReadData
#  define Rte_Call_CBReadData_DemDataElementClass_Systemzeit_ReadData Rte_Call_DemMaster_0_CBReadData_DemDataElementClass_Systemzeit_ReadData
#  define Rte_Call_GeneralCBDataEvt_EventDataChanged Rte_Call_DemMaster_0_GeneralCBDataEvt_EventDataChanged


# endif /* !defined(RTE_CORE) */


# define DemMaster_0_START_SEC_CODE
# include "DemMaster_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_ClearDTC Dem_ClearDTC
#  define RTE_RUNNABLE_Dem_MasterMainFunction Dem_MasterMainFunction
#  define RTE_RUNNABLE_GetDTCOfEvent Dem_GetDTCOfEvent
#  define RTE_RUNNABLE_GetDTCStatusAvailabilityMask Dem_GetDTCStatusAvailabilityMask
#  define RTE_RUNNABLE_GetDebouncingOfEvent Dem_GetDebouncingOfEvent
#  define RTE_RUNNABLE_GetEventEnableCondition Dem_GetEventEnableCondition
#  define RTE_RUNNABLE_GetEventExtendedDataRecordEx Dem_GetEventExtendedDataRecordEx
#  define RTE_RUNNABLE_GetEventFailed Dem_GetEventFailed
#  define RTE_RUNNABLE_GetEventFreezeFrameDataEx Dem_GetEventFreezeFrameDataEx
#  define RTE_RUNNABLE_GetEventMemoryOverflow Dem_GetEventMemoryOverflow
#  define RTE_RUNNABLE_GetEventStatus Dem_GetEventUdsStatus
#  define RTE_RUNNABLE_GetEventTested Dem_GetEventTested
#  define RTE_RUNNABLE_GetEventUdsStatus Dem_GetEventUdsStatus
#  define RTE_RUNNABLE_GetFaultDetectionCounter Dem_GetFaultDetectionCounter
#  define RTE_RUNNABLE_GetMonitorStatus Dem_GetMonitorStatus
#  define RTE_RUNNABLE_GetNumberOfEventMemoryEntries Dem_GetNumberOfEventMemoryEntries
#  define RTE_RUNNABLE_GetOperationCycleState Dem_GetOperationCycleState
#  define RTE_RUNNABLE_PostRunRequested Dem_PostRunRequested
#  define RTE_RUNNABLE_SelectDTC Dem_SelectDTC
#  define RTE_RUNNABLE_SetEnableCondition Dem_SetEnableCondition
#  define RTE_RUNNABLE_SetOperationCycleState Dem_SetOperationCycleState
# endif

FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_ClearDTC(uint8 parg0); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(void, DemMaster_0_CODE) Dem_MasterMainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDTCStatusAvailabilityMask(uint8 ClientId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DebouncingState); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventEnableCondition(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) EventFailed); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventMemoryOverflow(uint8 parg0, Dem_DTCOriginType parg1, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) OverflowIndication); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) UDSStatusByte); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) EventTested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) UDSStatusByte); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetMonitorStatus(Dem_EventIdType EventId, P2VAR(Dem_MonitorStatusType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) MonitorStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetNumberOfEventMemoryEntries(uint8 parg0, Dem_DTCOriginType parg1, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetOperationCycleState(Dem_OperationCycleIdType parg0, P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) CycleState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_PostRunRequested(P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) IsRequested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_SelectDTC(uint8 parg0, uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_SetEnableCondition(uint8 parg0, boolean ConditionFulfilled); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */

# define DemMaster_0_STOP_SEC_CODE
# include "DemMaster_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_DemDataElementClass_EthArpDiscardType_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_EthDiscardedArpEntry_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_EthDroppedFrameStatus_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_FUwBn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_FUwTn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_FileManipulated_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_KmStand_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_Port0CrcErrorCount_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_Port0LowSignalQualityStatus_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_StartApplication_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_SwtFehlerwert_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_SwtSwid_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_SwtVin_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_Systemzeit_E_NOT_OK (1U)

#  define RTE_E_CallbackClearEventAllowed_E_NOT_OK (1U)

#  define RTE_E_ClearDTC_DEM_CLEAR_BUSY (5U)

#  define RTE_E_ClearDTC_DEM_CLEAR_FAILED (7U)

#  define RTE_E_ClearDTC_DEM_CLEAR_MEMORY_ERROR (6U)

#  define RTE_E_ClearDTC_DEM_PENDING (4U)

#  define RTE_E_ClearDTC_DEM_WRONG_DTC (8U)

#  define RTE_E_ClearDTC_DEM_WRONG_DTCORIGIN (9U)

#  define RTE_E_ClearDTC_E_NOT_OK (1U)

#  define RTE_E_ClearDTC_E_OK (0U)

#  define RTE_E_DemServices_E_NOT_OK (1U)

#  define RTE_E_EnableCondition_E_NOT_OK (1U)

#  define RTE_E_EvMemOverflowIndication_E_NOT_OK (1U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL (21U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (10U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE (14U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT (48U)

#  define RTE_E_GeneralDiagnosticInfo_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_OK (0U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DEMMASTER_0_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
