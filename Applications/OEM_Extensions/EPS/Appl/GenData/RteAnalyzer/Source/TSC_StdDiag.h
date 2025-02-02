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
 *          File:  TSC_StdDiag.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit write services */
Std_ReturnType TSC_StdDiag_Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data);
Std_ReturnType TSC_StdDiag_Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data);
Std_ReturnType TSC_StdDiag_Rte_Write_ComControlModeRequestPort_requestedMode(NormalCommunicationModeType data);

/** Sender receiver - implicit read services */
StdDiag_LifeCycleRequestType TSC_StdDiag_Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void);

/** Client server interfaces */
Std_ReturnType TSC_StdDiag_Rte_Call_RoeStatePort_GetRoeState(Darh_RoeStateType *RoeState);
Std_ReturnType TSC_StdDiag_Rte_Call_RoeStatePort_GetRoeState(Darh_RoeStateType *RoeState);
Std_ReturnType TSC_StdDiag_Rte_Call_RoeStatePort_GetRoeState(Darh_RoeStateType *RoeState);

/** Service interfaces */
Std_ReturnType TSC_StdDiag_Rte_Call_DCMServicesPort_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType);
Std_ReturnType TSC_StdDiag_Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_StdDiag_Rte_Call_DCMServicesPort_GetSesCtrlType(Dcm_SesCtrlType *SesCtrlType);
Std_ReturnType TSC_StdDiag_Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_StdDiag_Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_StdDiag_Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_StdDiag_Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_StdDiag_Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_StdDiag_Rte_Call_ClearDTCPort_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin);
Std_ReturnType TSC_StdDiag_Rte_Call_EnableConditionPort_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_StdDiag_Rte_Call_ReportErrorPort_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);

/** Mode switches */
Stm_VehicleStateType TSC_StdDiag_Rte_Mode_VehicleStatePort_currentVehicleStateMode(void);
Omc_ExtendedOperatingModeType TSC_StdDiag_Rte_Mode_ExtendedOperatingModeControlPort_currentExtendedOperatingMode(void);
StdDiag_LifeCycleRequestType TSC_StdDiag_Rte_Mode_LifeCycle_Mode(StdDiag_LifeCycleRequestType *previousMode, StdDiag_LifeCycleRequestType *nextMode);
Omc_OperatingModeType TSC_StdDiag_Rte_Mode_OperatingModeControlPort_currentOperatingMode(void);
Std_ReturnType TSC_StdDiag_Rte_Switch_LifeCycle_Mode(StdDiag_LifeCycleRequestType mode);
NormalCommunicationModeType TSC_StdDiag_Rte_Mode_ComControlNormalModeAccessPort_CommunicationModeDeclarationGroup(void);
Omc_ExtendedOperatingModeType TSC_StdDiag_Rte_Mode_ExtendedOperatingModeControlPort_currentExtendedOperatingMode(void);
Omc_OperatingModeType TSC_StdDiag_Rte_Mode_OperatingModeControlPort_currentOperatingMode(void);
Omc_OperatingModeType TSC_StdDiag_Rte_Mode_OperatingModeControlPort_currentOperatingMode(void);
NormalCommunicationModeType TSC_StdDiag_Rte_Mode_ComControlNormalModeAccessPort_CommunicationModeDeclarationGroup(void);
Omc_ExtendedOperatingModeType TSC_StdDiag_Rte_Mode_ExtendedOperatingModeControlPort_currentExtendedOperatingMode(void);
Omc_OperatingModeType TSC_StdDiag_Rte_Mode_OperatingModeControlPort_currentOperatingMode(void);




