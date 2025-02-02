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
 *          File:  TSC_SysTime.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_SysTime.h"
#include "TSC_SysTime.h"








SysTime_LifeCycleRequestType TSC_SysTime_Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode(void)
{
  return Rte_IRead_LifeCycleHandler_LifeCycleRequest_requestMode();
}







     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_SysTime_Rte_Call_SysTimeReportError_ReportError(uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  return Rte_Call_SysTimeReportError_ReportError(InstanceId, ApiId, ErrorId);
}


     /* Mode Interfaces */
SysTime_LifeCycleRequestType TSC_SysTime_Rte_Mode_LifeCycle_Mode(SysTime_LifeCycleRequestType *previousMode, SysTime_LifeCycleRequestType *nextMode)
{
  return Rte_Mode_LifeCycle_Mode( previousMode, nextMode);
}

Std_ReturnType TSC_SysTime_Rte_Switch_LifeCycle_Mode(SysTime_LifeCycleRequestType mode)
{
  return Rte_Switch_LifeCycle_Mode( mode);
}



     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */






Std_ReturnType TSC_SysTime_Rte_Read_SysTimeRx_timeSignal(uint32 *data)
{
  return Rte_Read_SysTimeRx_timeSignal(data);
}








     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */







     /* SysTime */
      /* SysTime */
void TSC_SysTime_Rte_Enter_SysTimeGetTimeArea(void)
{
  Rte_Enter_SysTimeGetTimeArea();
}
void TSC_SysTime_Rte_Exit_SysTimeGetTimeArea(void)
{
  Rte_Exit_SysTimeGetTimeArea();
}



