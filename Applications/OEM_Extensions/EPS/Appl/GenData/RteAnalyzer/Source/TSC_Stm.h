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
 *          File:  TSC_Stm.h
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
Std_ReturnType TSC_Stm_Rte_Read_CentralErrorLockRx_centralErrorLock(Stm_CentralErrorLockType *data);
Std_ReturnType TSC_Stm_Rte_Read_EnergyModeRx_energyState(Stm_EnergyStateType *data);
Std_ReturnType TSC_Stm_Rte_Read_VehicleStateRx_VehicleState(Stm_VehicleStateType *data);

/** Service interfaces */
Std_ReturnType TSC_Stm_Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_Stm_Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_Stm_Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled);
Std_ReturnType TSC_Stm_Rte_Call_CentralErrorLockEnableCondition_SetEnableCondition(boolean ConditionFulfilled);

/** Mode switches */
Stm_CentralErrorLockType TSC_Stm_Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode);
Stm_EnergyStateType TSC_Stm_Rte_Mode_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType *previousMode, Stm_EnergyStateType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType mode);
Stm_VehicleStateType TSC_Stm_Rte_Mode_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType *previousMode, Stm_VehicleStateType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType mode);
Stm_CentralErrorLockType TSC_Stm_Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode);
Stm_CentralErrorLockType TSC_Stm_Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode);
Stm_EnergyStateType TSC_Stm_Rte_Mode_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType *previousMode, Stm_EnergyStateType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_EnergyModeSwitchPort_currentEnergyMode(Stm_EnergyStateType mode);
Stm_VehicleStateType TSC_Stm_Rte_Mode_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType *previousMode, Stm_VehicleStateType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_VehicleStateModeSwitchPort_currentVehicleStateMode(Stm_VehicleStateType mode);
Stm_CentralErrorLockType TSC_Stm_Rte_Mode_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType *previousMode, Stm_CentralErrorLockType *nextMode);
Std_ReturnType TSC_Stm_Rte_Switch_CentralErrorLockModeSwitchPort_currentCentralErrorLockMode(Stm_CentralErrorLockType mode);




