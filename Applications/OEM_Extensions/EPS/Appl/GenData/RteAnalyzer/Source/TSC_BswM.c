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
 *          File:  TSC_BswM.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_BswM.h"
#include "TSC_BswM.h"








Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
{
  return Rte_Read_Request_ESH_PostRunRequest_0_requestedMode(data);
}

Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
{
  return Rte_Read_Request_ESH_PostRunRequest_1_requestedMode(data);
}

Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_RunRequest_0_requestedMode(BswM_ESH_RunRequest *data)
{
  return Rte_Read_Request_ESH_RunRequest_0_requestedMode(data);
}

Std_ReturnType TSC_BswM_Rte_Read_Request_ESH_RunRequest_1_requestedMode(BswM_ESH_RunRequest *data)
{
  return Rte_Read_Request_ESH_RunRequest_1_requestedMode(data);
}




Std_ReturnType TSC_BswM_Rte_Write_Provide_MRSP_Bs_requestMode(Bs_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MRSP_Bs_requestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_Darh_requestMode(Darh_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MSRP_Darh_requestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_Dlog_requestMode(Dlog_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MSRP_Dlog_requestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(IntegrationSample_EcuRunStateModeRequestType data)
{
  return Rte_Write_Provide_MSRP_IntegrationSample_EcuRunMode_IntegrationSample_EcuRunStateRequestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_Omc_requestMode(Omc_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MSRP_Omc_requestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_StdDiag_requestMode(StdDiag_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MSRP_StdDiag_requestMode(data);
}

Std_ReturnType TSC_BswM_Rte_Write_Provide_MSRP_Systime_requestMode(SysTime_LifeCycleRequestType data)
{
  return Rte_Write_Provide_MSRP_Systime_requestMode(data);
}





     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */
Dcm_DiagnosticSessionControlType TSC_BswM_Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(void)
{
  return Rte_Mode_Notification_BSWModeSwitch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl();
}
Dcm_EcuResetType TSC_BswM_Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset(void)
{
  return Rte_Mode_Notification_BSWModeSwitch_DcmEcuReset_DcmEcuReset();
}
BswM_ESH_Mode TSC_BswM_Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode(void)
{
  return Rte_Mode_Notification_ESH_ModeNotification_BswM_MDGP_ESH_Mode();
}
Dcm_CommunicationModeType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_DcmCommunicationControl_ComMConf_ComMChannel_BAC4_FlexRay_8e151c3c_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2();
}
IntegrationSample_EcuRunStateModeRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_IS_EcuRunState_EcuRunStateMode();
}
Darh_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Darh_Mode();
}
Dlog_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Dlog_Mode();
}
Omc_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Omc_Mode();
}
StdDiag_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_Lifecycle_StdDiag_Mode();
}
SysTime_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_Lifecycle_Systime_Mode();
}
Stm_CentralErrorLockType TSC_BswM_Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode(void)
{
  return Rte_Mode_Notification_SWCModeSwitch_currentCentralErrorLockMode_currentCentralErrorLockMode();
}
Bs_LifeCycleRequestType TSC_BswM_Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode(void)
{
  return Rte_Mode_Notification_SWC_ModeNotification_Lifecycle_Bs_Mode();
}
IntegrationSample_SimpleTimerStateType TSC_BswM_Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode(void)
{
  return Rte_Mode_Notification_SWC_Mode_Notification_SimpleTimerMode_SimpleTimerMode();
}

Std_ReturnType TSC_BswM_Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode(BswM_ESH_Mode mode)
{
  return Rte_Switch_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode( mode);
}
Std_ReturnType TSC_BswM_Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode(uint8 mode)
{
  return Rte_Switch_Switch_SwitchPort_Darh_ReportErrorMode_DarhReportErrorMode( mode);
}
Std_ReturnType TSC_BswM_Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup(NormalCommunicationModeType mode)
{
  return Rte_Switch_Switch_SwitchPort_StdDiagComControlNormalNotificationPort_CommunicationModeDeclarationGroup( mode);
}
Std_ReturnType TSC_BswM_Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup(uint8 mode)
{
  return Rte_Switch_Switch_SwitchPort_StdDiag_SessionChangeIndication_SessionModeDeclarationGroup( mode);
}
Std_ReturnType TSC_BswM_Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode(uint8 mode)
{
  return Rte_Switch_Switch_SwitchPort_Stm_SwitchPort_EM_LOCK_currentEMLockSignalReceptionMode( mode);
}



     /* Inter-Runnable variables */






Std_ReturnType TSC_BswM_Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(NormalCommunicationModeType *data)
{
  return Rte_Read_Request_SWCModeReq_StdDiag_CommunicationModeDeclarationGroup_requestedMode(data);
}








     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */







     /* BswM */
      /* BswM */



