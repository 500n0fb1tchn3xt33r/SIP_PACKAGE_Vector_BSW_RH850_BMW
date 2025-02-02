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
 *          File:  TSC_SysTime.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_SysTime_Rte_Read_SysTimeRx_timeSignal(uint32 *data);

/** Sender receiver - implicit read services */
SysTime_LifeCycleRequestType TSC_SysTime_Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void);

/** Service interfaces */
Std_ReturnType TSC_SysTime_Rte_Call_SysTimeReportError_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);
Std_ReturnType TSC_SysTime_Rte_Call_SysTimeReportError_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId);

/** Mode switches */
SysTime_LifeCycleRequestType TSC_SysTime_Rte_Mode_LifeCycle_Mode(SysTime_LifeCycleRequestType *previousMode, SysTime_LifeCycleRequestType *nextMode);
Std_ReturnType TSC_SysTime_Rte_Switch_LifeCycle_Mode(SysTime_LifeCycleRequestType mode);

/** Exclusive Areas */
void TSC_SysTime_Rte_Enter_SysTimeGetTimeArea(void);
void TSC_SysTime_Rte_Exit_SysTimeGetTimeArea(void);




