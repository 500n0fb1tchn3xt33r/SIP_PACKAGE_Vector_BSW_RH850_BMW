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
 *            Module: Fr
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Fr_LCfg.c
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



#define FR_LCFG_SOURCE

/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */

#include "Fr.h"


#define FR_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(Fr_VConfigType, FR_CONST) Fr_Config = 0;



CONST(Fr_VRxVirtBuf2PhysBufMapType, FR_CONST) Fr_VRxVirtBuf2PhysBufMap[] = /* PRQA S 3408 */ /* MD_Fr_3408 */
{
  {
    0x36U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27628_A_FlexRay_S_276_B_2_R_8_ChA_IN  */ , 
    0x07U /*  Cycle Mask  */ , 
    0x02U /*  Cycle Base  */ 
  }, 
  {
    0x36U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27648_A_FlexRay_S_276_B_4_R_8_ChA_IN  */ , 
    0x07U /*  Cycle Mask  */ , 
    0x04U /*  Cycle Base  */ 
  }, 
  {
    0x35U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27518_A_FlexRay_S_275_B_1_R_8_ChA_IN  */ , 
    0x07U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x35U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27578_A_FlexRay_S_275_B_7_R_8_ChA_IN  */ , 
    0x07U /*  Cycle Mask  */ , 
    0x07U /*  Cycle Base  */ 
  }, 
  {
    0x34U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_26924_A_FlexRay_S_269_B_2_R_4_ChA_IN  */ , 
    0x03U /*  Cycle Mask  */ , 
    0x02U /*  Cycle Base  */ 
  }, 
  {
    0x33U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_25214_A_FlexRay_S_252_B_1_R_4_ChA_IN  */ , 
    0x03U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x32U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24702_A_FlexRay_S_247_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x32U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24712_A_FlexRay_S_247_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x31U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24404_A_FlexRay_S_244_B_0_R_4_ChA_IN  */ , 
    0x03U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x30U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23212_A_FlexRay_S_232_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x2FU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216616_A_FlexRay_S_216_B_6_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x06U /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216716_A_FlexRay_S_216_B_7_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x07U /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161016_A_FlexRay_S_216_B_10_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0AU /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161216_A_FlexRay_S_216_B_12_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0CU /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161316_A_FlexRay_S_216_B_13_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0DU /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161416_A_FlexRay_S_216_B_14_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0EU /*  Cycle Base  */ 
  }, 
  {
    0x2EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2161516_A_FlexRay_S_216_B_15_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0FU /*  Cycle Base  */ 
  }, 
  {
    0x2DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215216_A_FlexRay_S_215_B_2_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x02U /*  Cycle Base  */ 
  }, 
  {
    0x2DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215516_A_FlexRay_S_215_B_5_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x05U /*  Cycle Base  */ 
  }, 
  {
    0x2DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215616_A_FlexRay_S_215_B_6_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x06U /*  Cycle Base  */ 
  }, 
  {
    0x2DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215916_A_FlexRay_S_215_B_9_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x09U /*  Cycle Base  */ 
  }, 
  {
    0x2DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2151016_A_FlexRay_S_215_B_10_R_16_ChA_IN  */ , 
    0x0FU /*  Cycle Mask  */ , 
    0x0AU /*  Cycle Base  */ 
  }, 
  {
    0x2CU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21434_A_FlexRay_S_214_B_3_R_4_ChA_IN  */ , 
    0x03U /*  Cycle Mask  */ , 
    0x03U /*  Cycle Base  */ 
  }, 
  {
    0x2BU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x2AU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x29U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x28U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x27U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x26U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x25U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_12112_A_FlexRay_S_121_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x24U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11912_A_FlexRay_S_119_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x23U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11702_A_FlexRay_S_117_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x22U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10802_A_FlexRay_S_108_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x21U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10701_A_FlexRay_S_107_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x20U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10401_A_FlexRay_S_104_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x0FU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6802_A_FlexRay_S_68_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x0FU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6812_A_FlexRay_S_68_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x0EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6512_A_FlexRay_S_65_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x0DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x0CU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5502_A_FlexRay_S_55_B_0_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }, 
  {
    0x0CU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5534_A_FlexRay_S_55_B_3_R_4_ChA_IN  */ , 
    0x03U /*  Cycle Mask  */ , 
    0x03U /*  Cycle Base  */ 
  }, 
  {
    0x0BU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5338_A_FlexRay_S_53_B_3_R_8_ChA_IN  */ , 
    0x07U /*  Cycle Mask  */ , 
    0x03U /*  Cycle Base  */ 
  }, 
  {
    0x0AU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4712_A_FlexRay_S_47_B_1_R_2_ChA_IN  */ , 
    0x01U /*  Cycle Mask  */ , 
    0x01U /*  Cycle Base  */ 
  }, 
  {
    0x09U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4601_A_FlexRay_S_46_B_0_R_1_ChA_IN  */ , 
    0x00U /*  Cycle Mask  */ , 
    0x00U /*  Cycle Base  */ 
  }
};


CONST(Fr_VTxVirtBuf2PhysBufMapType, FR_CONST) Fr_VTxVirtBuf2PhysBufMap[] = /* PRQA S 3408 */ /* MD_Fr_3408 */
{
  {
    787U /*  CRC  */ , 
    0x1FU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_31501_A_FlexRay_S_315_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    198U /*  CRC  */ , 
    0x1EU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    835U /*  CRC  */ , 
    0x1DU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    605U /*  CRC  */ , 
    0x1CU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    472U /*  CRC  */ , 
    0x1BU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1367U /*  CRC  */ , 
    0x1AU /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1746U /*  CRC  */ , 
    0x19U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1899U /*  CRC  */ , 
    0x18U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1262U /*  CRC  */ , 
    0x17U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    685U /*  CRC  */ , 
    0x16U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27424_A_FlexRay_S_274_B_2_R_4_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    685U /*  CRC  */ , 
    0x15U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    187U /*  CRC  */ , 
    0x14U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2481032_A_FlexRay_S_248_B_10_R_32_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1791U /*  CRC  */ , 
    0x13U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23412_A_FlexRay_S_234_B_1_R_2_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1974U /*  CRC  */ , 
    0x12U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    551U /*  CRC  */ , 
    0x11U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216916_A_FlexRay_S_216_B_9_R_16_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1082U /*  CRC  */ , 
    0x10U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    94U /*  CRC  */ , 
    0x08U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5102_A_FlexRay_S_51_B_0_R_2_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1876U /*  CRC  */ , 
    0x07U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4912_A_FlexRay_S_49_B_1_R_2_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1876U /*  CRC  */ , 
    0x06U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4902_A_FlexRay_S_49_B_0_R_2_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    565U /*  CRC  */ , 
    0x05U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    811U /*  CRC  */ , 
    0x04U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    174U /*  CRC  */ , 
    0x03U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1057U /*  CRC  */ , 
    0x02U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }, 
  {
    1956U /*  CRC  */ , 
    0x01U /*  frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT Idx2DrvMemBufConf(cfgBufIdx)  */ , 
    0x00U /*  Bit0=dynamicPayload, Bit1=IsReconfigBuffer, Bit2=ReconfigLPdu  */ 
  }
};



 

#define FR_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

 


#define FR_START_SEC_CONST_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



#define FR_STOP_SEC_CONST_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


 

    


#define FR_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



CONST(uint16, FR_CONST) Fr_VCcRegAddrs[] =
{
  0x0020U /*  EIR  */ , 
  0x0024U /*  SIR  */ , 
  0x0028U /*  EILS  */ , 
  0x002CU /*  SILS  */ , 
  0x0030U /*  EIES  */ , 
  0x0034U /*  EIER  */ , 
  0x0038U /*  SIES  */ , 
  0x003CU /*  SIER  */ , 
  0x0040U /*  ILE  */ , 
  0x0044U /*  T0C  */ , 
  0x0048U /*  T1C  */ , 
  0x004CU /*  STPW1  */ , 
  0x0080U /*  SUCC1  */ , 
  0x0084U /*  SUCC2  */ , 
  0x0088U /*  SUCC3  */ , 
  0x008CU /*  NEMC  */ , 
  0x0090U /*  PRTC1  */ , 
  0x0094U /*  PRTC2  */ , 
  0x0098U /*  MHDC  */ , 
  0x00A0U /*  GTUC1  */ , 
  0x00A4U /*  GTUC2  */ , 
  0x00A8U /*  GTUC3  */ , 
  0x00ACU /*  GTUC4  */ , 
  0x00B0U /*  GTUC5  */ , 
  0x00B4U /*  GTUC6  */ , 
  0x00B8U /*  GTUC7  */ , 
  0x00BCU /*  GTUC8  */ , 
  0x00C0U /*  GTUC9  */ , 
  0x00C4U /*  GTUC10  */ , 
  0x00C8U /*  GTUC11  */ , 
  0x0300U /*  MRC  */ , 
  0x0304U /*  FRF  */ , 
  0x0308U /*  FRFM  */ , 
  0x0310U /*  MHDS  */ 
};



CONST(uint32, FR_CONST) Fr_VCcRegVals[] = /* PRQA S 3408 */ /* MD_Fr_3408 */
{
  0x07070FFFUL /*  EIR  */ , 
  0x0303FFFFUL /*  SIR  */ , 
  0x07070FFFUL /*  EILS  */ , 
  0x00000000UL /*  SILS  */ , 
  0x00000000UL /*  EIES  */ , 
  0x07070FFFUL /*  EIER  */ , 
  0x00000004UL /*  SIES  */ , 
  0x0303FFFBUL /*  SIER  */ , 
  0x00000003UL /*  ILE  */ , 
  0x00000000UL /*  T0C  */ , 
  0x00000000UL /*  T1C  */ , 
  0x00000000UL /*  STPW1  */ , 
  0x04804300UL /*  SUCC1  */ , 
  0x01061B72UL /*  SUCC2  */ , 
  0x00000022UL /*  SUCC3  */ , 
  0x00000000UL /*  NEMC  */ , 
  0x852D04F9UL /*  PRTC1  */ , 
  0x3CB4323BUL /*  PRTC2  */ , 
  0x010D0008UL /*  MHDC  */ , 
  0x00030D40UL /*  GTUC1  */ , 
  0x000F0E34UL /*  GTUC2  */ , 
  0x03030606UL /*  GTUC3  */ , 
  0x0E2F0E2CUL /*  GTUC4  */ , 
  0x30020101UL /*  GTUC5  */ , 
  0x007900D4UL /*  GTUC6  */ , 
  0x005B0018UL /*  GTUC7  */ , 
  0x01210005UL /*  GTUC8  */ , 
  0x00010202UL /*  GTUC9  */ , 
  0x0079007EUL /*  GTUC10  */ , 
  0x00000000UL /*  GTUC11  */ , 
  0x01368010UL /*  MRC  */ , 
  0x01800003UL /*  FRF  */ , 
  0x00000000UL /*  FRFM  */ , 
  0x0000007FUL /*  MHDS  */ 
};


/* -----------------------------------------------------------------------------
    &&&~ FlexrayBuffer Config
 ----------------------------------------------------------------------------- */

 
CONST(Fr_VCcBufType, FR_CONST) Fr_VCcBufs[] = /* PRQA S 3408 */ /* MD_Fr_3408 */
{
  {
    0x17010000UL /*  WRHS1  */ , 
    0x000800EEUL /*  WRHS2  */ , 
    0x07FCU /*  WRHS3  */ , 
    0x00U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 0, IsTx: 1, VirtualKeySlotTriggering  */ , 
  {
    0x15010008UL /*  WRHS1  */ , 
    0x000803E0UL /*  WRHS2  */ , 
    0x07F8U /*  WRHS3  */ , 
    0x01U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 8, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_801_A_FlexRay_S_8_B_0_R_1_ChA_OUT  */ , 
  {
    0x15010009UL /*  WRHS1  */ , 
    0x00080215UL /*  WRHS2  */ , 
    0x07F4U /*  WRHS3  */ , 
    0x02U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 9, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_901_A_FlexRay_S_9_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501000AUL /*  WRHS1  */ , 
    0x0008000AUL /*  WRHS2  */ , 
    0x07F0U /*  WRHS3  */ , 
    0x03U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 10, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1001_A_FlexRay_S_10_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501000BUL /*  WRHS1  */ , 
    0x000801FFUL /*  WRHS2  */ , 
    0x07ECU /*  WRHS3  */ , 
    0x04U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 11, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1101_A_FlexRay_S_11_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501000CUL /*  WRHS1  */ , 
    0x00080434UL /*  WRHS2  */ , 
    0x07E8U /*  WRHS3  */ , 
    0x05U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 12, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_1201_A_FlexRay_S_12_B_0_R_1_ChA_OUT  */ , 
  {
    0x15020031UL /*  WRHS1  */ , 
    0x00080259UL /*  WRHS2  */ , 
    0x07E4U /*  WRHS3  */ , 
    0x06U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 49, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4902_A_FlexRay_S_49_B_0_R_2_ChA_OUT  */ , 
  {
    0x15030031UL /*  WRHS1  */ , 
    0x00080259UL /*  WRHS2  */ , 
    0x07E0U /*  WRHS3  */ , 
    0x07U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 49, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4912_A_FlexRay_S_49_B_1_R_2_ChA_OUT  */ , 
  {
    0x15020033UL /*  WRHS1  */ , 
    0x000801B3UL /*  WRHS2  */ , 
    0x07DCU /*  WRHS3  */ , 
    0x08U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 51, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5102_A_FlexRay_S_51_B_0_R_2_ChA_OUT  */ , 
  {
    0x1101002EUL /*  WRHS1  */ , 
    0x00080060UL /*  WRHS2  */ , 
    0x07D8U /*  WRHS3  */ , 
    0x09U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 46, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4601_A_FlexRay_S_46_B_0_R_1_ChA_IN  */ , 
  {
    0x1103002FUL /*  WRHS1  */ , 
    0x00080195UL /*  WRHS2  */ , 
    0x07D4U /*  WRHS3  */ , 
    0x0AU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 47, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_4712_A_FlexRay_S_47_B_1_R_2_ChA_IN  */ , 
  {
    0x110B0035UL /*  WRHS1  */ , 
    0x0008058DUL /*  WRHS2  */ , 
    0x07D0U /*  WRHS3  */ , 
    0x0BU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 53, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5338_A_FlexRay_S_53_B_3_R_8_ChA_IN  */ , 
  {
    0x11000037UL /*  WRHS1  */ , 
    0x00080667UL /*  WRHS2  */ , 
    0x07CCU /*  WRHS3  */ , 
    0x0CU /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 55, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5502_A_FlexRay_S_55_B_0_R_2_ChA_IN  */ , 
  {
    0x11020038UL /*  WRHS1  */ , 
    0x00080781UL /*  WRHS2  */ , 
    0x07C8U /*  WRHS3  */ , 
    0x0DU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 56, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_5602_A_FlexRay_S_56_B_0_R_2_ChA_IN  */ , 
  {
    0x11030041UL /*  WRHS1  */ , 
    0x000802C1UL /*  WRHS2  */ , 
    0x07C4U /*  WRHS3  */ , 
    0x0EU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 65, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6512_A_FlexRay_S_65_B_1_R_2_ChA_IN  */ , 
  {
    0x11000044UL /*  WRHS1  */ , 
    0x000804E0UL /*  WRHS2  */ , 
    0x07C0U /*  WRHS3  */ , 
    0x0FU /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 68, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_6802_A_FlexRay_S_68_B_0_R_2_ChA_IN  */ , 
  {
    0x150100B7UL /*  WRHS1  */ , 
    0x001005F9UL /*  WRHS2  */ , 
    0x07B8U /*  WRHS3  */ , 
    0x10U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 183, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_18301_A_FlexRay_S_183_B_0_R_1_ChA_OUT  */ , 
  {
    0x151900D8UL /*  WRHS1  */ , 
    0x00040387UL /*  WRHS2  */ , 
    0x07B6U /*  WRHS3  */ , 
    0x11U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 216, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216916_A_FlexRay_S_216_B_9_R_16_ChA_OUT  */ , 
  {
    0x150100DCUL /*  WRHS1  */ , 
    0x0010008CUL /*  WRHS2  */ , 
    0x07AEU /*  WRHS3  */ , 
    0x12U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 220, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_22001_A_FlexRay_S_220_B_0_R_1_ChA_OUT  */ , 
  {
    0x150300EAUL /*  WRHS1  */ , 
    0x00030512UL /*  WRHS2  */ , 
    0x07ACU /*  WRHS3  */ , 
    0x13U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 234, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23412_A_FlexRay_S_234_B_1_R_2_ChA_OUT  */ , 
  {
    0x152A00F8UL /*  WRHS1  */ , 
    0x00040439UL /*  WRHS2  */ , 
    0x07AAU /*  WRHS3  */ , 
    0x14U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 248, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_2481032_A_FlexRay_S_248_B_10_R_32_ChA_OUT  */ , 
  {
    0x15080112UL /*  WRHS1  */ , 
    0x00040620UL /*  WRHS2  */ , 
    0x07A8U /*  WRHS3  */ , 
    0x15U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 274, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27408_A_FlexRay_S_274_B_0_R_8_ChA_OUT  */ , 
  {
    0x15060112UL /*  WRHS1  */ , 
    0x0003073EUL /*  WRHS2  */ , 
    0x07A6U /*  WRHS3  */ , 
    0x16U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 274, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27424_A_FlexRay_S_274_B_2_R_4_ChA_OUT  */ , 
  {
    0x15010126UL /*  WRHS1  */ , 
    0x007F0757UL /*  WRHS2  */ , 
    0x0766U /*  WRHS3  */ , 
    0x17U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 294, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29401_A_FlexRay_S_294_B_0_R_1_ChA_OUT  */ , 
  {
    0x15010127UL /*  WRHS1  */ , 
    0x007F06A2UL /*  WRHS2  */ , 
    0x0726U /*  WRHS3  */ , 
    0x18U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 295, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29501_A_FlexRay_S_295_B_0_R_1_ChA_OUT  */ , 
  {
    0x15010128UL /*  WRHS1  */ , 
    0x007F0744UL /*  WRHS2  */ , 
    0x06E6U /*  WRHS3  */ , 
    0x19U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 296, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29601_A_FlexRay_S_296_B_0_R_1_ChA_OUT  */ , 
  {
    0x15010129UL /*  WRHS1  */ , 
    0x007F06B1UL /*  WRHS2  */ , 
    0x06A6U /*  WRHS3  */ , 
    0x1AU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 297, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29701_A_FlexRay_S_297_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501012AUL /*  WRHS1  */ , 
    0x007F04AEUL /*  WRHS2  */ , 
    0x0666U /*  WRHS3  */ , 
    0x1BU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 298, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29801_A_FlexRay_S_298_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501012BUL /*  WRHS1  */ , 
    0x007F055BUL /*  WRHS2  */ , 
    0x0626U /*  WRHS3  */ , 
    0x1CU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 299, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_29901_A_FlexRay_S_299_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501012CUL /*  WRHS1  */ , 
    0x007F0090UL /*  WRHS2  */ , 
    0x05E6U /*  WRHS3  */ , 
    0x1DU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 300, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30001_A_FlexRay_S_300_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501012DUL /*  WRHS1  */ , 
    0x007F0165UL /*  WRHS2  */ , 
    0x05A6U /*  WRHS3  */ , 
    0x1EU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 301, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_30101_A_FlexRay_S_301_B_0_R_1_ChA_OUT  */ , 
  {
    0x1501013BUL /*  WRHS1  */ , 
    0x001D062AUL /*  WRHS2  */ , 
    0x0597U /*  WRHS3  */ , 
    0x1FU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 315, IsTx: 1, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_31501_A_FlexRay_S_315_B_0_R_1_ChA_OUT  */ , 
  {
    0x11010068UL /*  WRHS1  */ , 
    0x00010385UL /*  WRHS2  */ , 
    0x0596U /*  WRHS3  */ , 
    0x20U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 104, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10401_A_FlexRay_S_104_B_0_R_1_ChA_IN  */ , 
  {
    0x1101006BUL /*  WRHS1  */ , 
    0x00030690UL /*  WRHS2  */ , 
    0x0594U /*  WRHS3  */ , 
    0x21U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 107, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10701_A_FlexRay_S_107_B_0_R_1_ChA_IN  */ , 
  {
    0x1102006CUL /*  WRHS1  */ , 
    0x00040245UL /*  WRHS2  */ , 
    0x0592U /*  WRHS3  */ , 
    0x22U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 108, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_10802_A_FlexRay_S_108_B_0_R_2_ChA_IN  */ , 
  {
    0x11020075UL /*  WRHS1  */ , 
    0x00040442UL /*  WRHS2  */ , 
    0x0590U /*  WRHS3  */ , 
    0x23U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 117, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11702_A_FlexRay_S_117_B_0_R_2_ChA_IN  */ , 
  {
    0x11030077UL /*  WRHS1  */ , 
    0x000407A8UL /*  WRHS2  */ , 
    0x058EU /*  WRHS3  */ , 
    0x24U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 119, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_11912_A_FlexRay_S_119_B_1_R_2_ChA_IN  */ , 
  {
    0x11030079UL /*  WRHS1  */ , 
    0x000407BBUL /*  WRHS2  */ , 
    0x058CU /*  WRHS3  */ , 
    0x25U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 121, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_12112_A_FlexRay_S_121_B_1_R_2_ChA_IN  */ , 
  {
    0x11010093UL /*  WRHS1  */ , 
    0x007F038EUL /*  WRHS2  */ , 
    0x054CU /*  WRHS3  */ , 
    0x26U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 147, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_14701_A_FlexRay_S_147_B_0_R_1_ChA_IN  */ , 
  {
    0x110100D1UL /*  WRHS1  */ , 
    0x00100280UL /*  WRHS2  */ , 
    0x0544U /*  WRHS3  */ , 
    0x27U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 209, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_20901_A_FlexRay_S_209_B_0_R_1_ChA_IN  */ , 
  {
    0x110100D2UL /*  WRHS1  */ , 
    0x0010009FUL /*  WRHS2  */ , 
    0x053CU /*  WRHS3  */ , 
    0x28U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 210, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21001_A_FlexRay_S_210_B_0_R_1_ChA_IN  */ , 
  {
    0x110100D3UL /*  WRHS1  */ , 
    0x0010016AUL /*  WRHS2  */ , 
    0x0534U /*  WRHS3  */ , 
    0x29U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 211, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21101_A_FlexRay_S_211_B_0_R_1_ChA_IN  */ , 
  {
    0x110100D4UL /*  WRHS1  */ , 
    0x001004A1UL /*  WRHS2  */ , 
    0x052CU /*  WRHS3  */ , 
    0x2AU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 212, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21201_A_FlexRay_S_212_B_0_R_1_ChA_IN  */ , 
  {
    0x110100D5UL /*  WRHS1  */ , 
    0x00100554UL /*  WRHS2  */ , 
    0x0524U /*  WRHS3  */ , 
    0x2BU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 213, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21301_A_FlexRay_S_213_B_0_R_1_ChA_IN  */ , 
  {
    0x110700D6UL /*  WRHS1  */ , 
    0x00040394UL /*  WRHS2  */ , 
    0x0522U /*  WRHS3  */ , 
    0x2CU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 214, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21434_A_FlexRay_S_214_B_3_R_4_ChA_IN  */ , 
  {
    0x110000D7UL /*  WRHS1  */ , 
    0x00040261UL /*  WRHS2  */ , 
    0x0520U /*  WRHS3  */ , 
    0x2DU /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 215, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_215216_A_FlexRay_S_215_B_2_R_16_ChA_IN  */ , 
  {
    0x110000D8UL /*  WRHS1  */ , 
    0x00040387UL /*  WRHS2  */ , 
    0x051EU /*  WRHS3  */ , 
    0x2EU /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 216, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_216616_A_FlexRay_S_216_B_6_R_16_ChA_IN  */ , 
  {
    0x110100DBUL /*  WRHS1  */ , 
    0x00100547UL /*  WRHS2  */ , 
    0x0516U /*  WRHS3  */ , 
    0x2FU /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 219, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_21901_A_FlexRay_S_219_B_0_R_1_ChA_IN  */ , 
  {
    0x110300E8UL /*  WRHS1  */ , 
    0x000407E6UL /*  WRHS2  */ , 
    0x0514U /*  WRHS3  */ , 
    0x30U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 232, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_23212_A_FlexRay_S_232_B_1_R_2_ChA_IN  */ , 
  {
    0x110400F4UL /*  WRHS1  */ , 
    0x000407C0UL /*  WRHS2  */ , 
    0x0512U /*  WRHS3  */ , 
    0x31U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 244, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24404_A_FlexRay_S_244_B_0_R_4_ChA_IN  */ , 
  {
    0x110000F7UL /*  WRHS1  */ , 
    0x000405DFUL /*  WRHS2  */ , 
    0x0510U /*  WRHS3  */ , 
    0x32U /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 247, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_24712_A_FlexRay_S_247_B_1_R_2_ChA_IN  */ , 
  {
    0x110500FCUL /*  WRHS1  */ , 
    0x000105F9UL /*  WRHS2  */ , 
    0x050FU /*  WRHS3  */ , 
    0x33U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 252, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_25214_A_FlexRay_S_252_B_1_R_4_ChA_IN  */ , 
  {
    0x1106010DUL /*  WRHS1  */ , 
    0x0008012FUL /*  WRHS2  */ , 
    0x050BU /*  WRHS3  */ , 
    0x34U /*  IBCR  */ , 
    0x00U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 269, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_26924_A_FlexRay_S_269_B_2_R_4_ChA_IN  */ , 
  {
    0x11000113UL /*  WRHS1  */ , 
    0x000407D5UL /*  WRHS2  */ , 
    0x0509U /*  WRHS3  */ , 
    0x35U /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 275, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27518_A_FlexRay_S_275_B_1_R_8_ChA_IN  */ , 
  {
    0x11000114UL /*  WRHS1  */ , 
    0x0004021EUL /*  WRHS2  */ , 
    0x0507U /*  WRHS3  */ , 
    0x36U /*  IBCR  */ , 
    0x04U /*  Buffer INFO - currently only relevant for TMS platforms  */ 
  } /*  SlotID 276, IsTx: 0, frTrig_FR_3a54c8219f12452dafc00b243d0703e0_27648_A_FlexRay_S_276_B_4_R_8_ChA_IN  */ 
};

 

 

#define FR_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

 





 





