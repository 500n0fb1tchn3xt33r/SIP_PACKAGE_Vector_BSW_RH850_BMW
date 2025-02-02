/*------------------------------------------------------------------------------
|                                                                              |
|  Copyright (C) BMW AG 2015                                                |
|                                                                              |
|  MODULE    : Dcm_Types.h                                                     |
|                                                                              |
|  PROJECT   : BMW AUTOSAR Core                                                |
|                                                                              |
|  PURPOSE   : include file for NvM callbacks                                  |
|                                                                              |
|  REMARKS   : ---                                                             |
|                                                                              |
|                                                                              |
|------------------------------------------------------------------------------|
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|                                                                              |
-------------------------------------------------------------------------------*/

#ifndef DCM_TYPES_H
#define DCM_TYPES_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

typedef struct
{
   /** \brief Tester source address configured per protocol **/
   uint16 TesterSourceAddr;
   /** \brief Id of the protocol on wich the request has been received **/
   uint8 ProtocolId;
   /** \brief Service identifier of the received request **/
   uint8 Sid;
   /** \brief Identifier of the received subfonction **/
   uint8 SubFncId;
   /** \brief Set/Clear the ReprogrammingRequest flag on ECU reset**/
   boolean ReprogrammingRequest;
   /** \brief Set/Clear the ResponseRequired flag on ECU reset**/
   boolean ResponseRequired;
   /** \brief Set/Clear the ApplUpdated flag on ECU reset**/
   boolean ApplUpdated;
}
Dcm_ProgConditionsType;

typedef uint8 Dcm_OpStatusType;
typedef uint8 Dcm_NegativeResponseCodeType;

#  ifndef DCM_E_PENDING
#   define DCM_E_PENDING  ((Std_ReturnType)10) 
#  endif

#  ifndef DCM_ENABLE_RX_TX_NORM
#   define DCM_ENABLE_RX_TX_NORM (0U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NORM
#   define DCM_ENABLE_RX_DISABLE_TX_NORM (1U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NORM
#   define DCM_DISABLE_RX_ENABLE_TX_NORM (2U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NORMAL
#   define DCM_DISABLE_RX_TX_NORMAL (3U)
#  endif

#  ifndef DCM_ENABLE_RX_TX_NM
#   define DCM_ENABLE_RX_TX_NM (4U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NM
#   define DCM_ENABLE_RX_DISABLE_TX_NM (5U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NM
#   define DCM_DISABLE_RX_ENABLE_TX_NM (6U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NM
#   define DCM_DISABLE_RX_TX_NM (7U)
#  endif

#  ifndef DCM_ENABLE_RX_TX_NORM_NM
#   define DCM_ENABLE_RX_TX_NORM_NM (8U)
#  endif

#  ifndef DCM_ENABLE_RX_DISABLE_TX_NORM_NM
#   define DCM_ENABLE_RX_DISABLE_TX_NORM_NM (9U)
#  endif

#  ifndef DCM_DISABLE_RX_ENABLE_TX_NORM_NM
#   define DCM_DISABLE_RX_ENABLE_TX_NORM_NM (10U)
#  endif

#  ifndef DCM_DISABLE_RX_TX_NORM_NM
#   define DCM_DISABLE_RX_TX_NORM_NM (11U)
#  endif

#  ifndef DCM_RES_POS_OK
#   define DCM_RES_POS_OK (0U)
#  endif

#  ifndef DCM_RES_POS_NOT_OK
#   define DCM_RES_POS_NOT_OK (1U)
#  endif

#  ifndef DCM_RES_NEG_OK
#   define DCM_RES_NEG_OK (2U)
#  endif

#  ifndef DCM_RES_NEG_NOT_OK
#   define DCM_RES_NEG_NOT_OK (3U)
#  endif

#  ifndef DCM_ENUM_ENABLEDTCSETTING
#   define DCM_ENUM_ENABLEDTCSETTING (0U)
#  endif

#  ifndef DCM_ENUM_DISABLEDTCSETTING
#   define DCM_ENUM_DISABLEDTCSETTING (1U)
#  endif

#  ifndef DCM_ENUM_DEFAULT_SESSION
#   define DCM_ENUM_DEFAULT_SESSION (1U)
#  endif

#  ifndef DCM_ENUM_PROGRAMMING_SESSION
#   define DCM_ENUM_PROGRAMMING_SESSION (2U)
#  endif

#  ifndef DCM_ENUM_EXTENDED_SESSION
#   define DCM_ENUM_EXTENDED_SESSION (3U)
#  endif

#  ifndef DCM_ENUM_DcmDspSessionRow_CODING_SESSION
#   define DCM_ENUM_DcmDspSessionRow_CODING_SESSION (65U)
#  endif

#  ifndef DCM_ENUM_NONE
#   define DCM_ENUM_NONE (0U)
#  endif

#  ifndef DCM_ENUM_HARD
#   define DCM_ENUM_HARD (1U)
#  endif

#  ifndef DCM_ENUM_KEYONOFF
#   define DCM_ENUM_KEYONOFF (2U)
#  endif

#  ifndef DCM_ENUM_SOFT
#   define DCM_ENUM_SOFT (3U)
#  endif

#  ifndef DCM_ENUM_JUMPTOBOOTLOADER
#   define DCM_ENUM_JUMPTOBOOTLOADER (4U)
#  endif

#  ifndef DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER
#   define DCM_ENUM_JUMPTOSYSSUPPLIERBOOTLOADER (5U)
#  endif

#  ifndef DCM_ENUM_EXECUTE
#   define DCM_ENUM_EXECUTE (6U)
#  endif

#  ifndef DCM_E_POSITIVERESPONSE
#   define DCM_E_POSITIVERESPONSE (0U)
#  endif

#  ifndef DCM_E_GENERALREJECT
#   define DCM_E_GENERALREJECT (16U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTED
#   define DCM_E_SERVICENOTSUPPORTED (17U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#   define DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
#  endif

#  ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#   define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
#  endif

#  ifndef DCM_E_RESPONSETOOLONG
#   define DCM_E_RESPONSETOOLONG (20U)
#  endif

#  ifndef DCM_E_BUSYREPEATREQUEST
#   define DCM_E_BUSYREPEATREQUEST (33U)
#  endif

#  ifndef DCM_E_CONDITIONSNOTCORRECT
#   define DCM_E_CONDITIONSNOTCORRECT (34U)
#  endif

#  ifndef DCM_E_REQUESTSEQUENCEERROR
#   define DCM_E_REQUESTSEQUENCEERROR (36U)
#  endif

#  ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#   define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
#  endif

#  ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#   define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
#  endif

#  ifndef DCM_E_REQUESTOUTOFRANGE
#   define DCM_E_REQUESTOUTOFRANGE (49U)
#  endif

#  ifndef DCM_E_SECURITYACCESSDENIED
#   define DCM_E_SECURITYACCESSDENIED (51U)
#  endif

#  ifndef DCM_E_INVALIDKEY
#   define DCM_E_INVALIDKEY (53U)
#  endif

#  ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#   define DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
#  endif

#  ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#   define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
#  endif

#  ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#   define DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
#  endif

#  ifndef DCM_E_TRANSFERDATASUSPENDED
#   define DCM_E_TRANSFERDATASUSPENDED (113U)
#  endif

#  ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#   define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
#  endif

#  ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#   define DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
#  endif

#  ifndef DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING
#   define DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
#  endif

#  ifndef DCM_E_RPMTOOHIGH
#   define DCM_E_RPMTOOHIGH (129U)
#  endif

#  ifndef DCM_E_RPMTOOLOW
#   define DCM_E_RPMTOOLOW (130U)
#  endif

#  ifndef DCM_E_ENGINEISRUNNING
#   define DCM_E_ENGINEISRUNNING (131U)
#  endif

#  ifndef DCM_E_ENGINEISNOTRUNNING
#   define DCM_E_ENGINEISNOTRUNNING (132U)
#  endif

#  ifndef DCM_E_ENGINERUNTIMETOOLOW
#   define DCM_E_ENGINERUNTIMETOOLOW (133U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOHIGH
#   define DCM_E_TEMPERATURETOOHIGH (134U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOLOW
#   define DCM_E_TEMPERATURETOOLOW (135U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOHIGH
#   define DCM_E_VEHICLESPEEDTOOHIGH (136U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOLOW
#   define DCM_E_VEHICLESPEEDTOOLOW (137U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#   define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOLOW
#   define DCM_E_THROTTLE_PEDALTOOLOW (139U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#   define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#   define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
#  endif

#  ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#   define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
#  endif

#  ifndef DCM_E_SHIFTERLEVERNOTINPARK
#   define DCM_E_SHIFTERLEVERNOTINPARK (144U)
#  endif

#  ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#   define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
#  endif

#  ifndef DCM_E_VOLTAGETOOHIGH
#   define DCM_E_VOLTAGETOOHIGH (146U)
#  endif

#  ifndef DCM_E_VOLTAGETOOLOW
#   define DCM_E_VOLTAGETOOLOW (147U)
#  endif

#  ifndef DCM_E_VMSCNC_0
#   define DCM_E_VMSCNC_0 (240U)
#  endif

#  ifndef DCM_E_VMSCNC_1
#   define DCM_E_VMSCNC_1 (241U)
#  endif

#  ifndef DCM_E_VMSCNC_2
#   define DCM_E_VMSCNC_2 (242U)
#  endif

#  ifndef DCM_E_VMSCNC_3
#   define DCM_E_VMSCNC_3 (243U)
#  endif

#  ifndef DCM_E_VMSCNC_4
#   define DCM_E_VMSCNC_4 (244U)
#  endif

#  ifndef DCM_E_VMSCNC_5
#   define DCM_E_VMSCNC_5 (245U)
#  endif

#  ifndef DCM_E_VMSCNC_6
#   define DCM_E_VMSCNC_6 (246U)
#  endif

#  ifndef DCM_E_VMSCNC_7
#   define DCM_E_VMSCNC_7 (247U)
#  endif

#  ifndef DCM_E_VMSCNC_8
#   define DCM_E_VMSCNC_8 (248U)
#  endif

#  ifndef DCM_E_VMSCNC_9
#   define DCM_E_VMSCNC_9 (249U)
#  endif

#  ifndef DCM_E_VMSCNC_A
#   define DCM_E_VMSCNC_A (250U)
#  endif

#  ifndef DCM_E_VMSCNC_B
#   define DCM_E_VMSCNC_B (251U)
#  endif

#  ifndef DCM_E_VMSCNC_C
#   define DCM_E_VMSCNC_C (252U)
#  endif

#  ifndef DCM_E_VMSCNC_D
#   define DCM_E_VMSCNC_D (253U)
#  endif

#  ifndef DCM_E_VMSCNC_E
#   define DCM_E_VMSCNC_E (254U)
#  endif

#  ifndef DCM_INITIAL
#   define DCM_INITIAL (0U)
#  endif

#  ifndef DCM_PENDING
#   define DCM_PENDING (1U)
#  endif

#  ifndef DCM_CANCEL
#   define DCM_CANCEL (2U)
#  endif

#  ifndef DCM_FORCE_RCRRP_OK
#   define DCM_FORCE_RCRRP_OK (3U)
#  endif

#  ifndef DCM_FORCE_RCRRP_NOT_OK
#   define DCM_FORCE_RCRRP_NOT_OK (64U)
#  endif

#  ifndef DCM_OBD_ON_CAN
#   define DCM_OBD_ON_CAN (0U)
#  endif

#  ifndef DCM_OBD_ON_FLEXRAY
#   define DCM_OBD_ON_FLEXRAY (1U)
#  endif

#  ifndef DCM_OBD_ON_IP
#   define DCM_OBD_ON_IP (2U)
#  endif

#  ifndef DCM_UDS_ON_CAN
#   define DCM_UDS_ON_CAN (3U)
#  endif

#  ifndef DCM_UDS_ON_FLEXRAY
#   define DCM_UDS_ON_FLEXRAY (4U)
#  endif

#  ifndef DCM_UDS_ON_IP
#   define DCM_UDS_ON_IP (5U)
#  endif

#  ifndef DCM_NO_ACTIVE_PROTOCOL
#   define DCM_NO_ACTIVE_PROTOCOL (12U)
#  endif

#  ifndef DCM_SUPPLIER_1
#   define DCM_SUPPLIER_1 (240U)
#  endif

#  ifndef DCM_SUPPLIER_2
#   define DCM_SUPPLIER_2 (241U)
#  endif

#  ifndef DCM_SUPPLIER_3
#   define DCM_SUPPLIER_3 (242U)
#  endif

#  ifndef DCM_SUPPLIER_4
#   define DCM_SUPPLIER_4 (243U)
#  endif

#  ifndef DCM_SUPPLIER_5
#   define DCM_SUPPLIER_5 (244U)
#  endif

#  ifndef DCM_SUPPLIER_6
#   define DCM_SUPPLIER_6 (245U)
#  endif

#  ifndef DCM_SUPPLIER_7
#   define DCM_SUPPLIER_7 (246U)
#  endif

#  ifndef DCM_SUPPLIER_8
#   define DCM_SUPPLIER_8 (247U)
#  endif

#  ifndef DCM_SUPPLIER_9
#   define DCM_SUPPLIER_9 (248U)
#  endif

#  ifndef DCM_SUPPLIER_10
#   define DCM_SUPPLIER_10 (249U)
#  endif

#  ifndef DCM_SUPPLIER_11
#   define DCM_SUPPLIER_11 (250U)
#  endif

#  ifndef DCM_SUPPLIER_12
#   define DCM_SUPPLIER_12 (251U)
#  endif

#  ifndef DCM_SUPPLIER_13
#   define DCM_SUPPLIER_13 (252U)
#  endif

#  ifndef DCM_SUPPLIER_14
#   define DCM_SUPPLIER_14 (253U)
#  endif

#  ifndef DCM_SUPPLIER_15
#   define DCM_SUPPLIER_15 (254U)
#  endif

#  ifndef DCM_REQ_KIND_NONE
#   define DCM_REQ_KIND_NONE (0U)
#  endif

#  ifndef DCM_REQ_KIND_EXTERNAL
#   define DCM_REQ_KIND_EXTERNAL (1U)
#  endif

#  ifndef DCM_REQ_KIND_ROE
#   define DCM_REQ_KIND_ROE (2U)
#  endif

#  ifndef DCM_ENUM_EVENT_STARTED
#   define DCM_ENUM_EVENT_STARTED (0U)
#  endif

#  ifndef DCM_ENUM_EVENT_STOPPED
#   define DCM_ENUM_EVENT_STOPPED (1U)
#  endif

#  ifndef DCM_ENUM_EVENT_CLEARED
#   define DCM_ENUM_EVENT_CLEARED (2U)
#  endif

#  ifndef DCM_SEC_LEV_LOCKED
#   define DCM_SEC_LEV_LOCKED (0U)
#  endif

#  ifndef DCM_SEC_LEV_L1
#   define DCM_SEC_LEV_L1 (1U)
#  endif

#  ifndef DCM_DEFAULT_SESSION
#   define DCM_DEFAULT_SESSION (1U)
#  endif

#  ifndef DCM_PROGRAMMING_SESSION
#   define DCM_PROGRAMMING_SESSION (2U)
#  endif

#  ifndef DCM_EXTENDED_DIAGNOSTIC_SESSION
#   define DCM_EXTENDED_DIAGNOSTIC_SESSION (3U)
#  endif

#  ifndef DCM_DcmDspSessionRow_CODING_SESSION
#   define DCM_DcmDspSessionRow_CODING_SESSION (65U)
#  endif

#endif /* DCM_TYPES_H */

