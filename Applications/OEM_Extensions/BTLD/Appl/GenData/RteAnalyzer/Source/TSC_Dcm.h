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
 *          File:  TSC_Dcm.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Mode switches */
Std_ReturnType TSC_Dcm_Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(Dcm_CommunicationModeType mode);
Std_ReturnType TSC_Dcm_Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType mode);
Std_ReturnType TSC_Dcm_Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType mode);
Std_ReturnType TSC_Dcm_Rte_Switch_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType mode);

/** Mode switch acknowledgement */
Std_ReturnType TSC_Dcm_Rte_SwitchAck_DcmEcuReset_DcmEcuReset(void);




