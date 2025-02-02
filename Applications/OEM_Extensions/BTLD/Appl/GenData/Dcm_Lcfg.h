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
 *            Module: Dcm
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dcm_Lcfg.h
 *   Generation Time: 2018-01-04 15:45:18
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



#if !defined(DCM_LCFG_H)
# define DCM_LCFG_H
/* ----------------------------------------------
 ~&&&   Includes
---------------------------------------------- */
# include "Dem.h"
# include "Dem_Dcm.h"
/* ----------------------------------------------
 ~&&&   Versions
---------------------------------------------- */

/*! Implementation version */
# define DCM_LCFG_MAJOR_VERSION                                                 8u
# define DCM_LCFG_MINOR_VERSION                                                 6u
# define DCM_LCFG_PATCH_VERSION                                                 1u
/* ----------------------------------------------
 ~&&&   Function-like macros
---------------------------------------------- */
# define Dcm_ModeOnComControlModeChange(channelId, mode)                       ((void)(Rte_Switch_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2_DcmCommunicationControl_ComMConf_ComMChannel_A_FlexRay_5b5a9ac2(mode))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
/* ----------------------------------------------
 ~&&&   Typedefs Exported Level 2
---------------------------------------------- */
# if (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_SUPPORT_ALWAYS TX */
/*! Mode-rule handler function prototype */
typedef P2FUNC(boolean, DCM_CODE, Dcm_ModeRuleFuncType) (Dcm_Ptr2LocalU8Type /* OUT: The result NRC */);
# endif /* (DCM_MODEMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef uint8       Dcm_ObdIdMgrHandleMemType;
typedef uint8_least Dcm_ObdIdMgrHandleOptType;
# endif /* (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Typedefs
---------------------------------------------- */

/*! Depends on the largest configured buffer size */
typedef uint16 Dcm_CfgNetBufferSizeMemType;
/*! Depends on the largest configured buffer size */
typedef uint16_least Dcm_CfgNetBufferSizeOptType;
/*! Function pointer prototype for a protocol activation notification */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_NetProtocolIndicationFuncType) (Dcm_ProtocolType /* IN: new ProtocolId */);

/*! Diagnostic protocol related notification functions */
struct DCM_CFGNETPROTOCOLNOTIFICATIONINFOTYPE_TAG
{
  Dcm_NetProtocolIndicationFuncType    StartFunc;  /*!< Pointer to a function of kind Xxx_StartProtocol() */
};
typedef struct DCM_CFGNETPROTOCOLNOTIFICATIONINFOTYPE_TAG Dcm_CfgNetProtocolNotificationInfoType;
/*! Zero based reference to a USDT buffer configuration entry (0..31) */
typedef uint8        Dcm_CfgNetBufferRefMemType;
typedef uint8_least  Dcm_CfgNetBufferRefOptType;

/*! Zero based reference to a ComM channel map entry (0..255) */
typedef uint8        Dcm_CfgNetNetIdRefMemType;
typedef uint8_least  Dcm_CfgNetNetIdRefOptType;

/*! Zero based reference to a USDT message transport object (0..31) */
typedef uint8        Dcm_CfgNetTObjHandleMemType;
typedef uint8_least  Dcm_CfgNetTObjHandleOptType;

/*! Zero based reference to a UUDT message transport object (0..255) */
typedef uint8        Dcm_CfgNetPTxObjHandleMemType;
typedef uint8_least  Dcm_CfgNetPTxObjHandleOptType;

/*! Diagnostic protocol priority (0..255) */
typedef uint8        Dcm_CfgNetProtPrioType;

/*! Diagnostic protocol maximum length (0..65535) */
typedef uint16       Dcm_CfgNetProtLengthType;

/*! Zero based reference to a UUDT message DcmTxPduId configuration entry (0..255) */
typedef uint8        Dcm_CfgNetPerTxPduIdRefMemType;
typedef uint8_least  Dcm_CfgNetPerTxPduIdRefOptType;

/*! Diagnostic client connection properties (Valid values: DCM_NET_CONN_PROP_*) */
typedef uint8        Dcm_CfgNetConnPropertiesType;

/*! Configuration of a USDT buffer */
struct DCM_CFGNETBUFFERINFOTYPE_TAG
{
  Dcm_PbConstMsgType            BufferPtr;  /*!< Pointer to a USDT buffer */
  Dcm_CfgNetBufferSizeMemType   Size;       /*!< Size of this specific USDT buffer */
};
typedef struct DCM_CFGNETBUFFERINFOTYPE_TAG Dcm_CfgNetBufferInfoType;

/*! Configuration of a DcmRxPduId */
struct DCM_CFGNETRXPDUINFOTYPE_TAG
{
  boolean                   IsFuncReq;  /*!< Functional request message: FALSE = physical, TRUE = functional */
  Dcm_NetConnRefMemType     ConnRef;    /*!< Reference to Dcm_CfgNetConnectionInfo[] entry */
};
typedef struct DCM_CFGNETRXPDUINFOTYPE_TAG Dcm_CfgNetRxPduInfoType;

/*! Configuration of a diagnostic client connection */
struct DCM_CFGNETCONNECTIONTYPE_TAG
{
  uint16                          ClientSrcAddr;          /*!< Diagnostic client's unique source address (identifier) */
#if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
  Dcm_TmrTimerCntrMemType         PeriodicTxConfTimeout;  /*!< Diagnostic client specific periodic message transmission confirmation timeout (0 - if no periodic message used) */
#endif
  PduIdType                       TxPduIdMain;            /*!< PduR's PduId of the main diagnostic response */
  Dcm_CfgNetNetIdRefMemType       NetworkIdRef;           /*!< Reference to Dcm_CfgNetConnComMChannelMap[] entry */
  Dcm_NetProtRefMemType           ProtRef;                /*!< Reference to Dcm_PbCfgNetProtocolInfo[] entry */

#if (DCM_NET_PERIODIC_TX_CONN_SPECIFIC_NUM_TX_OBJ_ENABLED  == STD_ON)                                                                                /* COV_DCM_UNSUPPORTED XF */
  Dcm_CfgNetPerTxPduIdRefMemType  PeriodicTxRef;          /*!< Reference to Dcm_PbCfgNetPerTxPduIdInfo[] entry */
  Dcm_CfgNetPTxObjHandleMemType   NumPeriodicTxPduIds;    /*!< Number of periodic messages of the diagnostic client (0 = none) */
#endif
#if (DCM_NET_CONN_ECU_ADDRESS_ENABLED == STD_ON)                                                                                                     /* COV_DCM_UNSUPPORTED XF */
  uint8                           EcuAddress;             /*!< ECU network address */
#endif
#if (DCM_NET_CONN_PROPERTIES_ENABLED == STD_ON)
  Dcm_CfgNetConnPropertiesType    Properties;             /*!< Diagnostic client specific properties (Any combination of DCM_NET_CONN_PROP_*) */
#endif
};
typedef struct DCM_CFGNETCONNECTIONTYPE_TAG Dcm_CfgNetConnectionInfoType;

/*! Configuration of a diagnostic client protocol */
struct DCM_CFGNETPROTOCOLTYPE_TAG
{
  Dcm_DiagP2TimingsType       SrvAdjTime;         /*!< The P2 times to be used for all diagnostic clients associated with this diagnostic protocol */
  Dcm_CfgNetProtLengthType    MaxLength;          /*!< Maximum allowed request/response length for all connections within this diagnostic protocol */
  Dcm_ProtocolType            Id;                 /*!< The diagnostic protocol name (e.g. UDS_ON_CAN) */
#if (DCM_NET_PROTOCOL_PRIORITISATION_ENABLED == STD_ON)
  Dcm_CfgNetProtPrioType      Priority;           /*!< The priority of all connections associated with this diagnostic protocol (0 - highest, 255 - lowest) */
#endif
  boolean                     HasRespPendOnBoot;  /*!< Specifies whether RCR-RP shall be sent prior jump to the boot-loader (TRUE - do send RCR-RP prior jump to FBL, FALSE - do not send) */
  Dcm_CfgNetBufferRefMemType  RxTxBufferRef;      /*!< Reference to Dcm_PbCfgNetBufferInfo[] entry */
#if (DCM_DEM_CLIENTID_ENABLED == STD_ON)
  uint8                       DemClientId;
#endif
};
typedef struct DCM_CFGNETPROTOCOLTYPE_TAG Dcm_CfgNetProtocolInfoType;
typedef uint8  Dcm_NetTransportObjectStateType;
typedef uint16 Dcm_NetTransportObjectFlagType;
typedef uint8  Dcm_NetResponseType;
typedef uint8  Dcm_NetComMStateType;

/*! Control data of the USDT message buffers (main and additional) */
struct DCM_NETBUFFERCONTEXTTYPE_TAG
{
  volatile uint8  IsInUseCnt; /*!< Usage counter (0 - not in use, >0 - buffer in use from at least one user) */
};
typedef struct DCM_NETBUFFERCONTEXTTYPE_TAG Dcm_NetBufferContextType;

/*! Transport object control data */
struct DCM_NETTRANSPORTOBJECTTYPE_TAG
{
  Dcm_MsgType                     RxData;                                  /*!< Pointer to the buffer to store the request data (can be the main buffer or an additional buffer) */
  Dcm_NetTransportObjectFlagType  Flags;                                   /*!< Control flags of a transport object (Multiple combination of DCM_NET_TOBJ_FLAG_*) */
  Dcm_CfgNetBufferSizeMemType     RxLength;                                /*!< The diagnostic request length */
  Dcm_CfgNetBufferSizeMemType     BuffPos;                                 /*!< Keeps track of where to copy the next received diagnostic message data portion */
  PduIdType                       RxPduId;                                 /*!< DcmRxPduId used to allocate the transport object */
  Dcm_NetResponseType             ResType;                                 /*!< The diagnostic response type (e.g. RCR-RP, final (not-)paged etc.) */
  Dcm_CfgNetTObjHandleMemType     Handle;                                  /*!< The transport object ID */
  Dcm_NetConnRefMemType           ConnId;                                  /*!< Reference to Dcm_PbCfgNetConnectionInfo[] entry */
  Dcm_CfgNetBufferRefMemType      BufferHdl;                               /*!< Reference to Dcm_PbRamNetBufferContext[] entry */
  volatile Dcm_NetTransportObjectStateType State;                          /*!< State of the transport object (Valid values: DCM_NET_TOBJ_STATE_*) */
  Dcm_MsgItemType                 AddBuffer[DCM_NET_TOBJ_ADDBUFFER_SIZE];  /*!< Temporary buffer for NRC 0x78 and 0x21 responses and 0x3E 0x80 functional requests */
  PduInfoType                     BuffInfo;                                /*!< PduR transmission data information exchange */
};
typedef struct DCM_NETTRANSPORTOBJECTTYPE_TAG Dcm_NetTransportObjectType;

/*! ComM channel related control information */
struct DCM_NETCOMMCONTEXT_TAG
{
  Dcm_NetComMStateType   ComState;            /*!< The current state of the ComM channel (FullCom/SilentCom/NoCom) */
  Dcm_NetConnRefMemType  RegisteredNetworks;  /*!< Number of active USDT diagnostic client connections on certain ComM channel */
};
typedef struct DCM_NETCOMMCONTEXT_TAG Dcm_NetComMContextType;

#if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                          /* COV_DCM_UNSUPPORTED XF */
typedef uint8       Dcm_NetPerTxObjStateMemType;
typedef uint8_least Dcm_NetPerTxObjStateOptType;

/*! Periodic message (UUDT) transport object control data */
struct DCM_NETPERIODICTXOBJECTTYPE_TAG
{
  PduInfoType                          TxPduInfo;                               /*!< PduR transmission data information exchange */
  volatile Dcm_TmrTimerCntrMemType     Timer;                                   /*!< Message transmission deadline monitor (can be changed within an ISR) */
  Dcm_MsgItemType                      TxBuffer[DCM_NET_PERIODIC_BUFFER_SIZE];  /*!< Periodic message data buffer */
  volatile Dcm_NetPerTxObjStateMemType State;                                   /*!< Periodic message state (Free, Reserved, Queued, Sent) */
  uint16                               Did;                                     /*!< The periodic Did assigned with the message */
};
typedef struct DCM_NETPERIODICTXOBJECTTYPE_TAG Dcm_NetPeriodicTxObjectType;
#endif
#if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
/*! Network sub-component post-build-variant (selectable/loadable) related configuration data */
struct DCM_NETVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgNetRxPduInfoType, AUTOMATIC, DCM_PBCFG)       RxPduIdTable;              /*!< Pointer to the DcmRxPdus' configuration */
  P2CONST(Dcm_CfgNetConnectionInfoType, AUTOMATIC, DCM_PBCFG)  ConnectionTable;           /*!< Pointer to the diagnostic clients' connections */
  P2CONST(Dcm_CfgNetProtocolInfoType, AUTOMATIC, DCM_PBCFG)    ProtocolTable;             /*!< Pointer to the diagnostic protocols' configuration */
  P2CONST(Dcm_CfgNetNetIdRefMemType, AUTOMATIC, DCM_PBCFG)     NetConnComMChannelMap;     /*!< Pointer to the diagnostic client related ComM channel map */
# if (DCM_BSW_ENV_ASR_VERSION_4_ANY_ENABLED == STD_ON)                                                                                               /* COV_DCM_SUPPORT_ALWAYS TX */
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             NetworkHandleLookUpTable;  /*!< Pointer to the ComM channel look-up table */
# endif
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             NetAllComMChannelMap;      /*!< Pointer to the map of all related to DCM ComM channels */
# if (DCM_NET_COMCTRL_ALLNET_SUPPORT_ENABLED == STD_ON)
  P2CONST(NetworkHandleType, AUTOMATIC, DCM_PBCFG)             ComCtrlChannelListAll;     /*!< Pointer to the list of all ComM channels to be used for SID 0x28 with SubNetType=AllChannels */
# endif

  P2CONST(Dcm_NetConnRefMemType, AUTOMATIC, DCM_PBCFG)         TxPduIdMap;                /*!< Pointer to the USDT DcmTxPduId to client connection map */
  P2CONST(Dcm_CfgNetPTxObjHandleMemType, AUTOMATIC, DCM_PBCFG) PerTxPduIdMap;             /*!< Pointer to the UUDT DcmTxPduId to periodic message transport object map */
  P2CONST(PduIdType, AUTOMATIC, DCM_PBCFG)                     PerTxPduIdTable;           /*!< Pointer to the list of all UUDT DcmTxPduIds */
# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON)
  P2CONST(PduIdType, AUTOMATIC, DCM_PBCFG)                     CanTp2DcmRxPduIdMap;       /*!< Pointer to the CanTpRxPduId to DcmRxPduId map */
# endif

  PduIdType                     NumRxPduIds;         /*!< Number of DcmRxPduIds */
  PduIdType                     NumTxPduIds;         /*!< Number of DcmTxPduIds */
# if (DCM_NET_MONITOR_FOREIGN_N_TA_ENABLED == STD_ON)
  PduIdType                     CanTpRxPduIdMin;     /*!< Lowest CanTpRxPduId */
  PduIdType                     CanTpRxPduIdMax;     /*!< Highest CanTpRxPduId */
  PduIdType                     NumCanTpRxPduIds;    /*!< Number of used CanTpRcPduIds (0 - none are used, >0 - at least one used) */
# endif
  NetworkHandleType             NumComMChannels;     /*!< Number of all ComM channels related to diagnostic clients */
  NetworkHandleType             NumAllComMChannels;  /*!< Number of all ComM channels managed by DCM */
  Dcm_CfgNetPTxObjHandleMemType NumPerTxObjects;     /*!< Maximum number of periodic message transport objects over all diagnostic client connections */
  Dcm_NetConnRefMemType         NumConnections;      /*!< Number of diagnostic client connections */
  Dcm_NetProtRefMemType         NumProtocols;        /*!< Number of diagnostic protocols */
  Dcm_CfgNetBufferRefMemType    NumBuffers;          /*!< Number of USDT buffers */
  Dcm_CfgNetTObjHandleMemType   NumTranspObjects;    /*!< Number of USDT transport objects */
};
typedef struct DCM_NETVARIANTINFOTYPE_TAG Dcm_CfgNetVariantInfoType;
#endif

#if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
/*! Network sub-component post-build-loadable reallocatable shared RAM data */
struct DCM_NETRAMVARIANTINFOTYPE_TAG
{
# if (DCM_NET_PERIODIC_TX_ENABLED == STD_ON)                                                                                                         /* COV_DCM_UNSUPPORTED XF */
  P2VAR(Dcm_NetPeriodicTxObjectType, AUTOMATIC, DCM_RAM_PBCFG) PeriodicTxObjects;  /*!< Pointer to the pool of periodic (UUDT) message transport objects */
# endif
  P2VAR(Dcm_NetComMContextType, AUTOMATIC, DCM_RAM_PBCFG)      ComMContexts;       /*!< Pointer to the pool of ComM channels' control states */
  P2VAR(Dcm_CfgNetTObjHandleMemType, AUTOMATIC, DCM_RAM_PBCFG) ConnId2TObjIdMap;   /*!< Pointer to the USDT diagnostic client connection to USDT message transport object allocation map */
  P2VAR(Dcm_NetTransportObjectType, AUTOMATIC, DCM_RAM_PBCFG)  TranspObjects;      /*!< Pointer to the pool of USDT message transport objects */
  P2VAR(Dcm_NetBufferContextType, AUTOMATIC, DCM_RAM_PBCFG)    BufferContexts;     /*!< Pointer to the pool of USDT message buffers' control states */
# if (DCM_MODE_COMMCTRL_ENABLED == STD_ON)
  P2VAR(Dcm_CommunicationModeType, AUTOMATIC, DCM_RAM_PBCFG)   ComCtrlChannels;    /*!< Pointer to the pool of ComM channels' communication state */
# endif
};
typedef struct DCM_NETRAMVARIANTINFOTYPE_TAG Dcm_CfgNetRamVariantInfoType;

/*! Network sub-component post-build-loadable reallocatable shared configuration data */
struct DCM_NETROMVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgNetBufferInfoType, AUTOMATIC, DCM_PBCFG)  BufferInfo;  /*!< Pointer to the USDT buffer configuration */
};
typedef struct DCM_NETROMVARIANTINFOTYPE_TAG Dcm_CfgNetRomVariantInfoType;
#endif
/*! Depends on the mode rule table size */
typedef uint8 Dcm_CfgModeMgrRuleRefMemType;
/*! Depends on the mode rule table size */
typedef uint8_least Dcm_CfgModeMgrRuleRefOptType;
/*! Depends on the state group with largest number of states */
typedef uint8 Dcm_CfgStateGroupMemType;
/*! Depends on the state group with largest number of states */
typedef uint8_least Dcm_CfgStateGroupOptType;
/*! Depends on the total number of diagnostic service state/mode filters */
typedef uint8 Dcm_CfgStateRefMemType;
/*! Depends on the total number of diagnostic service state/mode filters */
typedef uint8_least Dcm_CfgStateRefOptType;
/*! Depends on the total number of security fixed byte values in non-default security levels */
typedef uint8 Dcm_CfgStateSecurityFixedByteRefMemType;
/*! Depends on the total number of security fixed byte values in non-default security levels */
typedef uint8_least Dcm_CfgStateSecurityFixedByteRefOptType;                                                                                         /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
/*! Depends on the how many Fixed byte sets are configured per a security level */
typedef uint8 Dcm_CfgStateVsgSecurityFixedByteInfoRefMemType;
/*! Depends on the how many Fixed byte sets are configured per a security level */
typedef uint8_least Dcm_CfgStateVsgSecurityFixedByteInfoRefOptType;                                                                                  /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
/*! A diagnostic entity diagnostic state related execution pre-conditions package */
struct DCM_CFGSTATEPRECONDITIONTYPE_TAG
{
  Dcm_CfgStateGroupMemType Session;   /*!< Diagnostic session pre-condition(s) (Bitmap) */
#if (DCM_STATE_SECURITY_ENABLED == STD_ON)
  Dcm_CfgStateGroupMemType Security;  /*!< Security access pre-condition(s) (Bitmap) */
#endif
};
typedef struct DCM_CFGSTATEPRECONDITIONTYPE_TAG Dcm_CfgStateDiagStateInfoType;

/*! A diagnostic entity complete execution pre-conditions package */
struct DCM_CFGSTATEPRECONDITIONINFOTYPE_TAG
{
#if(DCM_MODEMGR_CHECK_SUPPORT_ENABLED == STD_ON)
  Dcm_CfgModeMgrRuleRefMemType         ModeRuleRef;   /*!< Reference to Dcm_CfgModeMgrRules[] entry */
#endif
  Dcm_CfgStateDiagStateInfoType        States;        /*!< A diagnostic state related pre-condition package */
};
typedef struct DCM_CFGSTATEPRECONDITIONINFOTYPE_TAG Dcm_CfgStatePreconditionInfoType;

/*! Diagnostic session configuration package */
struct DCM_CFGSTATESESSIONINFOTYPE_TAG
{
  Dcm_DiagP2TimingsType                     P2ServerTime;   /*!< Diagnostic session specific P2 timings */
  Rte_ModeType_DcmDiagnosticSessionControl  Mode;           /*!< The diagnostic session state related mode of the mode declaration group DcmDiagnosticSession */
  uint8                                     Value;          /*!< The diagnostic session state ID (i.e. the sub-function of SID 0x10) */
};
typedef struct DCM_CFGSTATESESSIONINFOTYPE_TAG Dcm_CfgStateSessionInfoType;

/*! Security access level configuration package */
struct DCM_CFGSTATESECURITYINFOTYPE_TAG
{
#if (DCM_STATE_SEC_RETRY_ENABLED == STD_ON)
  Dcm_TmrTimerCntrMemType          DelayTimeInvKey;    /*!< The delay time in case of received invalid key (always >0: specific time) */
# if (DCM_STATE_SEC_DELAY_ON_BOOT_ENABLED == STD_ON)
  Dcm_TmrTimerCntrMemType          DelayTimeOnBoot;    /*!< The delay time each time the ECU (re-)starts (i.e. after reset or power down) */
# endif
# if(DCM_STATE_SEC_DELAY_TIME_ON_FAILED_GET_ATT_CNTR_ENABLED == STD_ON)
  Dcm_TmrTimerCntrMemType          ReloadTime;         /*!< The delay time to be used when a Xxx_GetAttemptCounter API fails to report the stored attempt counter value (0: infinity/no delay (see ReloadOnZeroDelay), >0: specific time) */
  boolean                          ReloadOnZeroDelay;  /*!< Determines the meaning of the "ReloadTime == 0": TRUE - the delay time is infinity, FALSE - no delay time required */
# endif
  uint8                            NumAttempts;        /*!< The maximum number of attempts to send a valid key */
#endif
  uint8                            Value;              /*!< The security access level state ID (i.e. equals to "(seed/key sub-function ID + 1) / 2" */
#if (DCM_MODE_SECURITY_ACCESS_ENABLED == STD_ON)
  Rte_ModeType_DcmSecurityAccess   Mode;               /*!< The security access level state related mode of the mode declaration group DcmSecurityAccess */
#endif
};
typedef struct DCM_CFGSTATESECURITYINFOTYPE_TAG Dcm_CfgStateSecurityInfoType;

/*! Function pointer prototype for a diagnostic state transition notification */
typedef P2FUNC(void, DCM_CALLOUT_CODE, Dcm_StateChangeIndicationFuncType)(uint8 /* IN: former state ID */
                                                                         ,uint8 /* IN: new state ID */);

/*! Diagnostic state transition notification item configuration package */
struct DCM_CFGSTATENOTIFICATIONINFOTYPE_TAG
{
  Dcm_StateChangeIndicationFuncType      OnChgFunc; /*!< Pointer to a function of kind <UserDefined function per ECUC>() */
};
typedef struct DCM_CFGSTATENOTIFICATIONINFOTYPE_TAG Dcm_CfgStateNotificationInfoType;
typedef P2CONST(Dcm_CfgStateNotificationInfoType, TYPEDEF, DCM_CONST) Dcm_CfgStateNotificationInfoPtrType;
typedef uint8 Dcm_CfgDidMgrOpHandleMemType;
typedef uint8_least Dcm_CfgDidMgrOpHandleOptType;
typedef uint8 Dcm_CfgDidMgrDidOpClassHandleMemType;
typedef uint8_least Dcm_CfgDidMgrDidOpClassHandleOptType;
typedef uint8 Dcm_CfgDidMgrDidInfoRefType;
typedef uint8 Dcm_CfgDidMgrAbstractOpRefType;
typedef uint8 Dcm_CfgDidMgrCombinedOpRefType;
typedef uint8 Dcm_CfgDidMgrDynDidHandleMemType;
typedef uint8_least Dcm_CfgDidMgrDynDidHandleOptType;
typedef uint8 Dcm_CfgDidMgrDynDidSrcItemIdxMemType;
typedef uint8_least Dcm_CfgDidMgrDynDidSrcItemIdxOptType;
typedef uint8 Dcm_CfgDidMgrIoDidHandleMemType;
typedef uint8_least Dcm_CfgDidMgrIoDidHandleOptType;
typedef uint8 Dcm_CfgDidMgrSignalRefMemType;
typedef uint8_least Dcm_CfgDidMgrSignalRefOptType;
typedef uint8 Dcm_CfgDidMgrSignalOpClassRefMemType;
typedef uint8_least Dcm_CfgDidMgrSignalOpClassRefOptType;
typedef uint8 Dcm_CfgDidMgrSignalIterMemType;
typedef uint8_least Dcm_CfgDidMgrSignalIterOptType;
typedef uint8 Dcm_CfgDidMgrScalingRefMemType;
typedef uint8_least Dcm_CfgDidMgrScalingRefOptType;
typedef uint8 Dcm_CfgDidMgrIoDidCemrLengthMemType;
typedef uint8_least Dcm_CfgDidMgrIoDidCemrLengthOptType;
typedef uint8 Dcm_CfgDidMgrSupportedDIDRefType;
typedef uint16 Dcm_DidMgrDidLengthType;
typedef Dcm_CfgNetBufferSizeMemType Dcm_CfgDidMgrOptimizedDidLengthType;
/*! depends on the number of IO DIDs with S/R Interface */
typedef uint8 Dcm_CfgDidMgrIoCtrlSRHandlersRefMemType;
/*! depends on the number of IO DIDs with S/R Interface */
typedef uint8_least Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType;                                                                                         /* PRQA S 0779 */ /* MD_Dcm_Understand_0779 */
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef Dcm_DidOpType      Dcm_DidMgrOpMemType;
typedef Dcm_DidOpOptType   Dcm_DidMgrOpOptType;
typedef uint8         Dcm_DidMgrOpCallMemType;
typedef uint8_least   Dcm_DidMgrOpCallOptType;
typedef uint8   Dcm_DidMgrOpClassType;
typedef P2VAR(Dcm_DidMgrDidLengthType,TYPEDEF,DCM_VAR_NOINIT) Dcm_DidMgrDidLengthPtrType;

typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_DidMgrOpFuncType) (void);

#if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON)
struct DCM_CFGDIDMGRSIGNALINFOTYPE_TAG
{
  Dcm_CfgDidMgrOptimizedDidLengthType Offset;
  Dcm_CfgNetBufferSizeMemType         Length;
};
typedef struct DCM_CFGDIDMGRSIGNALINFOTYPE_TAG Dcm_CfgDidMgrSignalInfoType;
#endif

struct DCM_DIDMGRDIDINFOTYPE_TAG
{
#if (DCM_DIDMGR_DYNLEN_DID_SUPPORT_ENABLED == STD_ON)
  Dcm_CfgDidMgrOptimizedDidLengthType  MinLength;/* contains the minimum length (on DIDs with dynamic length) or the complete (max) length on static DIDs */
#endif
  Dcm_CfgDidMgrOptimizedDidLengthType  Length; /* contains the maximum (on DIDs with dynamic length) or the complete length on static DIDs */
  Dcm_CfgDidMgrOpHandleMemType         OpBaseIdx;
#if (DCM_DIDMGR_OP_INFO_ANY_ENABLED == STD_ON)
  Dcm_CfgDidMgrAbstractOpRefType       OpRef;
#endif
  Dcm_DidMgrOpMemType                  Operations;
#if (DCM_DIDMGR_MULTISIGNAL_ENABLED == STD_ON)
  Dcm_CfgDidMgrSignalRefMemType        SignalRef;
#endif
};
typedef struct DCM_DIDMGRDIDINFOTYPE_TAG Dcm_CfgDidMgrDidInfoType;

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
# if (DCM_DIDMGR_SR_IO_SHORT_TERM_ADJUSTMENT_ENABLED == STD_ON)
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqCtrlStateWriteFuncType)(Dcm_ReadOnlyMsgType);
# endif
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqUnderCtrlReadFuncType)(P2VAR(uint32, AUTOMATIC, DCM_VAR_NOINIT));
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqUnderCtrlWriteFuncType)(uint32);
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlReqIoOpReqWriteFuncType)(uint8
                                                                                 ,uint32);
typedef P2FUNC(boolean, DCM_CODE, Dcm_DidMgrIoCtrlResIsUpdatedFuncType)(void);
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DidMgrIoCtrlResReadFuncType)(P2VAR(Dcm_IOOperationResponseType, AUTOMATIC, DCM_VAR_NOINIT));

struct DCM_DIDMGRIOCTRLSRHANDLERSTYPE
{
# if (DCM_DIDMGR_SR_IO_SHORT_TERM_ADJUSTMENT_ENABLED == STD_ON)
  Dcm_DidMgrIoCtrlReqCtrlStateWriteFuncType  IoCtrlReqCtrlStateWrite;
# endif
  Dcm_DidMgrIoCtrlReqUnderCtrlReadFuncType   IoCtrlReqUnderControlRead;
  Dcm_DidMgrIoCtrlReqUnderCtrlWriteFuncType  IoCtrlReqUnderControlWrite;
  Dcm_DidMgrIoCtrlReqIoOpReqWriteFuncType    IoCtrlReqIoOpReqWrite;
  Dcm_DidMgrIoCtrlResIsUpdatedFuncType       IoCtrlResIsUpdated;
  Dcm_DidMgrIoCtrlResReadFuncType            IoCtrlResRead;
};
typedef struct DCM_DIDMGRIOCTRLSRHANDLERSTYPE Dcm_DidMgrIoCtrlSRHandlersType;
typedef CONSTP2CONST(Dcm_DidMgrIoCtrlSRHandlersType, TYPEDEF, DCM_CONST) Dcm_DidMgrIoCtrlSRHandlersConstPtrType;
#endif

struct DCM_DIDMGROPINFOTYPE_TAG
{
  Dcm_CfgStateRefMemType                 ExecCondRef;
  Dcm_CfgDidMgrDidOpClassHandleMemType   OpTypeBaseIdx;
  Dcm_DidMgrOpCallMemType                CallTypes;
};
typedef struct DCM_DIDMGROPINFOTYPE_TAG Dcm_CfgDidMgrOpInfoType;

struct DCM_CFGDIDMGRDIDOPCLASSINFOTYPE_TAG
{
  Dcm_CfgDidMgrSignalOpClassRefMemType  OpClassRef;
};
typedef struct DCM_CFGDIDMGRDIDOPCLASSINFOTYPE_TAG Dcm_CfgDidMgrDidOpClassInfoType;

struct DCM_CFGDIDMGRSIGNALOPCLASSINFOTYPE_TAG
{
  Dcm_DidMgrOpFuncType      OpFunc;   /* generic function pointer that will be casted to the concrete operation later at run-time */
  Dcm_DidMgrOpClassType     FuncClass;
};
typedef struct DCM_CFGDIDMGRSIGNALOPCLASSINFOTYPE_TAG Dcm_CfgDidMgrSignalOpClassInfoType;

#if (DCM_DIDMGR_OP_INFO_SCALING_ENABLED == STD_ON)
struct DCM_CFGDIDMGROPINFOSCALINGTYPE_TAG
{
  Dcm_CfgDidMgrScalingRefMemType ScalingInfoRef;
};
typedef struct DCM_CFGDIDMGROPINFOSCALINGTYPE_TAG Dcm_CfgDidMgrOpInfoScalingType;
#endif

#if (DCM_DIDMGR_OP_INFO_IOCONTROL_ENABLED == STD_ON)
struct DCM_CFGDIDMGRIOCONTROLINFOTYPE_TAG
{
# if (DCM_DIDMGR_OPTYPE_IO_RETCTRL2ECU_ENABLED == STD_ON)
  Dcm_CfgDidMgrDidOpClassHandleMemType  RetCtrlToEcuOpRef;
# endif
# if (DCM_DIDMGR_IODID_EXEC_PRECOND_LIMIT_ENABLED == STD_ON)
  Dcm_CfgStateRefMemType                CtrlExecCondRef;
# endif
# if (DCM_DIDMGR_IO_MASKRECORD_ENABLED == STD_ON)
  Dcm_CfgDidMgrIoDidCemrLengthMemType   CtrlEnblMaskLength;
# endif
};
typedef struct DCM_CFGDIDMGRIOCONTROLINFOTYPE_TAG Dcm_CfgDidMgrOpInfoIoControlType;
#endif

#if (DCM_DIDMGR_OP_INFO_DEFINE_ENABLED == STD_ON)
struct DCM_CFGDIDMGRDYNDEFINEINFOTYPE_TAG
{
# if (DCM_DIDMGR_PERIODICDYNDID_ENABLED == STD_ON)
  uint16                                  Did;
# endif
# if (DCM_DIDMGR_DYNDID_CLR_ON_STATE_CHG_ENABLED == STD_ON)
  Dcm_CfgStateRefMemType                  ReadExecCondRef;
# endif
# if (DCM_DIDMGR_DYNDID_VAR_NUM_ITEMS_ENABLED == STD_ON)
  Dcm_CfgDidMgrDynDidSrcItemIdxMemType    SrcItemRef;
  uint8                                   NumItems;
# endif
};
typedef struct DCM_CFGDIDMGRDYNDEFINEINFOTYPE_TAG Dcm_CfgDidMgrOpInfoDefineType;
#endif

#if (DCM_DIDMGR_OP_INFO_COMBINED_ENABLED == STD_ON)
struct DCM_CFGDIDMGROPINFOCOMBINEDTYPE_TAG
{
  Dcm_CfgDidMgrCombinedOpRefType OpRefIoControl;
  Dcm_CfgDidMgrCombinedOpRefType OpRefScaling;
};
typedef struct DCM_CFGDIDMGROPINFOCOMBINEDTYPE_TAG Dcm_CfgDidMgrOpInfoCombinedType;
#endif

#if (DCM_DIDMGR_RANGE_SUPPORT_ENABLED == STD_ON)
typedef Dcm_UtiU16RangeType Dcm_CfgDidMgrDidRangeType;
#endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_CfgRidMgrOpHandleMemType;
typedef uint8_least Dcm_CfgRidMgrOpHandleOptType;
typedef uint8 Dcm_CfgRidMgrSupportedRIDRefType;
typedef uint8 Dcm_CfgRidMgrRoutineInfoByteMemType;
typedef uint8 Dcm_CfgRidMgrInfoHandleMemType;
typedef uint8_least Dcm_CfgRidMgrInfoHandleOptType;
# if (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON)
typedef uint8   Dcm_RidMgrOpType;
typedef uint8   Dcm_RidMgrOpCallType;
/*! Dedicated RID data length data type: all service ports do use 16bit length parameter */
typedef uint16  Dcm_RidMgrRidLengthType;
typedef P2VAR(Dcm_RidMgrRidLengthType, TYPEDEF, DCM_VAR_NOINIT) Dcm_RidMgrRidLengthPtrType;

/*!
 * Generic routine operation function prototype
 * \return DCM_E_OK             - Operation finished with success. Do not call again
 * \return DCM_E_NOT_OK         - Operation failed. Take the NRC from ErrorCode. Do not call again
 * \return DCM_E_PENDING        - Requested job not yet finished, call again.
 * \return DCM_E_FORCE_RCRRP    - Send immediately a RCR-RP response. Call again once transmission confirmed (with or without success)
 */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_RidMgrOpFuncType)(void);

/*! Routine identifier related configuration package */
struct DCM_RIDMGRRIDINFOTYPE_TAG
{
  Dcm_CfgRidMgrOpHandleMemType         OpBaseIdx;          /*!< Reference to Dcm_CfgRidMgrOpInfo[] entry */
  Dcm_CfgStateRefMemType               ExecCondRef;        /*!< Execution pre-condition reference */
  Dcm_RidMgrOpType                     Operations;         /*!< Supported RID operations (Valid values: any combination of DCM_RIDMGR_OP_) */
  Dcm_CfgRidMgrRoutineInfoByteMemType  RoutineInfoByte;    /*!< The routine info byte if supported */
};
typedef struct DCM_RIDMGRRIDINFOTYPE_TAG Dcm_CfgRidMgrRidInfoType;

/*! Routine identifier operation related configuration package */
struct DCM_RIDMGROPINFOTYPE_TAG
{
  Dcm_RidMgrOpFuncType         OpFunc;          /*!< Pointer to the function implementation */
  Dcm_RidMgrRidLengthType      ReqMinLength;    /*!< Minimum request length without the only possible last dynamic length signal (does not include RID + SF) */
  Dcm_RidMgrRidLengthType      ReqMaxLength;    /*!< Maximum request length with the only possible last dynamic length signal (does not include RID + SF) */
  Dcm_RidMgrRidLengthType      ResMinLength;    /*!< Minimum response length without the only possible last dynamic length signal (does not include RID + SF) */
  Dcm_RidMgrRidLengthType      ResMaxLength;    /*!< Maximum response length with the only possible last dynamic length signal (does not include RID + SF) */
  Dcm_RidMgrOpCallType         OpType;          /*!< Function prototype descriptor (Valid values: one of DCM_RIDMGR_OPTYPE_ but not DCM_RIDMGR_OPTYPE_NONE) */
};
typedef struct DCM_RIDMGROPINFOTYPE_TAG Dcm_CfgRidMgrOpInfoType;
typedef P2CONST(Dcm_CfgRidMgrOpInfoType, TYPEDEF, DCM_CONST)   Dcm_RidMgrOpInfoPtrType;
# endif /* (DCM_RIDMGR_SUPPORT_ENABLED == STD_ON) */
typedef uint32 Dcm_CfgMemMgrMemAddrType;
typedef uint32 Dcm_CfgMemMgrReqAddrType;
typedef uint32 Dcm_CfgMemMgrReqSizeType;
typedef uint8 Dcm_CfgMemMgrStateRefType;
typedef uint8 Dcm_CfgMemMgrMemMapIdxMemType;
typedef uint8_least Dcm_CfgMemMgrMemMapIdxOptType;
# if (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGMEMMGRMEMMAPINFOTYPE_TAG
{
  Dcm_CfgMemMgrMemAddrType     StartAddr;
  Dcm_CfgMemMgrMemAddrType     EndAddr;
  Dcm_CfgMemMgrStateRefType    ExecCondRefs[DCM_MEMMGR_NUM_MEMORY_OPERATIONS_CONST];
};
typedef struct DCM_CFGMEMMGRMEMMAPINFOTYPE_TAG Dcm_CfgMemMgrMemMapInfoType;
typedef P2CONST(Dcm_CfgMemMgrMemMapInfoType, TYPEDEF, DCM_CONST) Dcm_CfgMemMgrMemMapInfoPtrType;

struct DCM_CFGMEMMGRMEMIDINFOTYPE_TAG
{
  Dcm_CfgMemMgrMemMapInfoPtrType MemMapTable;
  Dcm_CfgMemMgrMemMapIdxMemType  Size;
};
typedef struct DCM_CFGMEMMGRMEMIDINFOTYPE_TAG Dcm_CfgMemMgrMemIdInfoType;
typedef P2VAR(Dcm_CfgMemMgrMemIdInfoType, TYPEDEF, AUTOMATIC)   Dcm_CfgMemMgrMemIdInfoPtrType;
typedef P2CONST(Dcm_CfgMemMgrMemIdInfoType, TYPEDEF, AUTOMATIC) Dcm_CfgMemMgrMemIdInfoConstPtrType;
# endif /* (DCM_MEMMGR_SUPPORT_ENABLED == STD_ON) */
/*! Diagnostic request indication notification function handler pointer type (for all Xxx_Indication()) */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DiagIndicationFuncType) (Dcm_MsgItemType     /* IN: SID */
                                                                     ,Dcm_ReadOnlyMsgType /* IN: Request data (behind SID byte) */
                                                                     ,uint16 /* IN: Request data length  */
                                                                     ,uint8  /* IN: Request type (0 - physical, 1- functional) */
                                                                     ,uint16 /* IN: Tester SourceAddress */
                                                                     ,Dcm_NegativeResponseCodePtrType /* OUT: ErrorCode */);

/*! Diagnostic response confirmation notification function handler pointer type (for all Xxx_Confirmation()) */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_DiagConfirmationFuncType) (Dcm_MsgItemType /* IN: SID */
                                                                       ,uint8  /* IN: Request type (0 - physical, 1- functional) */
                                                                       ,uint16 /* IN: Tester SourceAddress */
                                                                       ,Dcm_ConfirmationStatusType /* IN: Confirmation status */);

/*
 * Diagnostic service handler "class" members:
 */

/*! Constructor (initialization) function prototype */
typedef P2FUNC(void, DCM_CODE, Dcm_DiagSvcInitFuncType) (void);
/*!
 * Processor function prototype
 * \return DCM_E_OK             - Operation finished with success. Do not call again
 * \return DCM_E_NOT_OK         - Operation failed. Take the NRC from ErrorCode. Do not call again
 * \return DCM_E_PENDING        - Requested job not yet finished, call again.
 * \return DCM_E_FORCE_RCRRP    - Send immediately a RCR-RP response. Call again once transmission confirmed (with or without success)
 * \return DCM_E_STOP_REPEATER  - Do not call again.
 * \return DCM_E_PROCESSINGDONE - Depricated return value, equivalent to DCM_E_OK. Shall not be used by any application service processor!
 */
typedef P2FUNC(Std_ReturnType, DCM_CALLOUT_CODE, Dcm_DiagSvcProcessorFuncType) (Dcm_OpStatusType        /* IN: OpStatus */
                                                                               ,Dcm_MsgContextPtrType   /* IN,OUT: pMsgContext */
                                                                               ,Dcm_NegativeResponseCodePtrType /* OUT: ErrorCode */);
/*! Post-Processor (fast and normal types) function prototype */
typedef P2FUNC(void, DCM_CALLOUT_CODE, Dcm_DiagSvcConfirmationFuncType) (Dcm_ConfirmationStatusType /* IN: Confirmation status */);

/*!
 * Paged-data provider function prototype
 * \return DCM_E_OK                 - Operation finished with success. Do not call again
 * \return DCM_E_NOT_OK             - Operation failed. Take the NRC from ErrorCode. Do not call again
 * \return DCM_E_PENDING            - Some data written/commited. Call again to fill in more data
 * \return DCM_E_BUFFERTOOLOW       - Maximum available space used but was not enough. Call again when some additional free space available
 * \return DCM_E_DATA_READY_PADDING - No more data to be provided. Do not call again. If needed, switch to padding-byte data provider
 */
typedef P2FUNC(Std_ReturnType, DCM_CALLOUT_CODE, Dcm_DiagSvcUpdateFuncType) (Dcm_DiagDataContextPtrType /* IN,OUT: paged-data descriptor */
                                                                            ,Dcm_NegativeResponseCodePtrType /* OUT: ErrorCode */);
/*! Paged-data job cancelation notification function prototype */
typedef P2FUNC(void, DCM_CALLOUT_CODE, Dcm_DiagSvcCancelFuncType) (void);

/*! Diagnostic service properties container in bitmap form (Valid values: DCM_DIAG_SVC_CFG_PROP_*) */
typedef uint8 DcmCfg_DiagServicePropertiesType;

/*! Configuration of a diagnostic service handler */
struct DCM_CFGDIAGSERVICEINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      ProcFunc;         /*!< Pointer to the processor function (e.g. Dcm_Service10Processor() or any application specific function name) */
  DcmCfg_DiagServicePropertiesType  Props;            /*!< Diagnostic service properties (Any combination of DCM_DIAG_SVC_CFG_PROP_*) */
  uint8                             MinLength;        /*!< Minimum request length (excluding the SID byte) to be verified prior calling the service processor (0 - no restrictions, >0 - particular minimum length) */
  uint8                             ConfFuncRef;      /*!< Reference to the Dcm_CfgDiagSvcPostProcessors[] entry */
#if (DCM_DIAG_FAST_POST_PROCESSING_ENABLED == STD_ON)                                                                                                /* COV_DCM_SUPPORT_ALWAYS TX */
  uint8                             FastConfFuncRef;  /*!< Reference to the Dcm_CfgDiagSvcPostProcessors[] entry (if exist, fast post-processors are located right behind the normal post-processor) */
#endif
#if (DCM_PAGED_BUFFER_ENABLED == STD_ON)
  uint8                             UpdateFuncRef;    /*!< Reference to the Dcm_CfgDiagSvcUpdaters[] entry */
  uint8                             CancelFuncRef;    /*!< Reference to the Dcm_CfgDiagSvcCancellers[] entry */
#endif
};
typedef struct DCM_CFGDIAGSERVICEINFOTYPE_TAG Dcm_CfgDiagServiceInfoType;

/*! Configuration of diagnostic request notification handlers */
struct DCM_CFGDIAGSERVICENOFICATIONINFOTYPE_TAG
{
  Dcm_DiagIndicationFuncType      IndFunc;  /*!< Points to a Xxx_Indication() callout (NULL_PTR - means last pair element in a list) */
  Dcm_DiagConfirmationFuncType    ConfFunc; /*!< Points to a Xxx_Confirmation) callout (NULL_PTR - means last pair element in a list) */
};
typedef struct DCM_CFGDIAGSERVICENOFICATIONINFOTYPE_TAG Dcm_CfgDiagNotificationInfoType;
typedef P2CONST(Dcm_CfgDiagNotificationInfoType, TYPEDEF, DCM_CONST) Dcm_CfgDiagNotificationInfoPtrType;
/*! Depends on the total number of configuration variants */
typedef uint8 Dcm_CfgVarMgrDiagVariantIdMemType;
/*! Depends on the total number of configuration variants */
typedef uint8_least Dcm_CfgVarMgrDiagVariantIdOptType;
/*! Depends on the total number of diagnostic variants */
typedef uint8 Dcm_CfgVarMgrBitSetBaseType;
/*! A set of variants */
typedef Dcm_CfgVarMgrBitSetBaseType Dcm_CfgVarMgrBitSetType[1];
#if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
/* Pointer to a particular network configuration variant */
typedef P2CONST(Dcm_CfgNetVariantInfoType, TYPEDEF, DCM_CONST_PBCFG)  Dcm_CfgVarMgrComVariantType;
#endif

#if (DCM_DIAG_MULTI_SVC_TABLE_ENABLED == STD_ON)
/*! Configuration of the common variant data between network and diagnostic services variant information */
struct DCM_CFGVARMGRBRIDGEVARIANTTYPE_TAG
{
  P2CONST(Dcm_CfgDiagSvc2ProtMapMemType, AUTOMATIC, DCM_CONST_PBCFG) Svc2ProtocolMap; /*!< Points to the "diagnostic service to protocol map" for a particual DCM variant (criterion): Dcm_CfgDiagSvcId2ProtMap[] */
};
typedef struct DCM_CFGVARMGRBRIDGEVARIANTTYPE_TAG Dcm_CfgVarMgrBridgeVariantType;
#endif

#if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
/*! Configuration of the common for all PBL variants RAM area */
struct DCM_CFGVARMGRRAMVARIANTTYPE_TAG
{
  Dcm_CfgNetRamVariantInfoType  NetworkRam; /*!< Relocatable RAM for the network sub-component */
};
typedef struct DCM_CFGVARMGRRAMVARIANTTYPE_TAG Dcm_CfgVarMgrRamVariantType;
typedef P2CONST(Dcm_CfgVarMgrRamVariantType, TYPEDEF, DCM_CONST_PBCFG) Dcm_CfgVarMgrRamVariantPtrType;
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
struct DCM_DIAGROMVARIANTINFOTYPE_TAG
{
  P2CONST(Dcm_CfgVarMgrBitSetType, AUTOMATIC, DCM_CONST_PBCFG) VariantFilter;
};
typedef struct DCM_DIAGROMVARIANTINFOTYPE_TAG Dcm_CfgDiagRomVariantInfoType;
# endif

/*! Configuration of the common for all PBL variants ROM (CONST) area */
struct DCM_CFGVARMGRROMVARIANTTYPE_TAG
{
  Dcm_CfgNetRomVariantInfoType  NetworkRom; /*!< Relocatable ROM for the network sub-component */
# if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
  Dcm_CfgDiagRomVariantInfoType DiagRom;
# endif
};
typedef struct DCM_CFGVARMGRROMVARIANTTYPE_TAG Dcm_CfgVarMgrRomVariantType;
typedef P2CONST(Dcm_CfgVarMgrRomVariantType, TYPEDEF, DCM_CONST_PBCFG) Dcm_CfgVarMgrRomVariantPtrType;
#endif
/*! Container for all PBS/PBL (PBX) variant configuration parameters (a single criterion package): (network-, diagnostic- and common-(bridge)-variant data) */
struct DCM_CONFIGTYPE_TAG
{
#if (DCM_VARMGR_SUPPORT_ENABLED == STD_ON)
# if (DCM_VARMGR_MULTI_COM_ENABLED == STD_ON)
  Dcm_CfgVarMgrComVariantType       ComVariant;     /*!< Contains all network sub-component related variant information (called COM-criteria) */
# endif
# if (DCM_DIAG_MULTI_SVC_TABLE_ENABLED == STD_ON)
  Dcm_CfgVarMgrBridgeVariantType    BridgeVariant;  /*!< Contains all common/shared data (bridge) between COM and CFG variants */
# endif
# if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
  Dcm_CfgVarMgrDiagVariantIdMemType DiagVariantId;
# endif
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
  Dcm_CfgVarMgrRamVariantPtrType    RamVariant; /*!< Relocatable PB RAM */
  Dcm_CfgVarMgrRomVariantPtrType    RomVariant; /*!< Relocatable PB ROM */
# endif
  /* Generally required elements */
# if (DCM_VARMGR_MODE_POSTBUILD_LOAD_ENABLED == STD_ON)
  uint16                            GenOutputType;      /*!< Generator Output Compatibility Version */
  uint16                            FinalMagicNumber;   /*!< Configuration structure magic number   */
# endif
#else
  uint8 NoConfig; /*!< In case of PBS with single variant (DCm optimizes the code for pre-compile variant), still a configuration struct is expected by the software environment */
#endif
};
typedef struct DCM_CONFIGTYPE_TAG Dcm_ConfigType;

typedef P2CONST(Dcm_ConfigType, TYPEDEF, DCM_CONST_PBCFG) Dcm_ConfigPtrType;
# if (DCM_SVC_01_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_CODE, Dcm_Svc01OpFuncType)(Dcm_MsgType);
struct DCM_CFGSVC01DATAINFOTYPE_TAG
{
  Dcm_Svc01OpFuncType   OpFunc;
  uint16                Length; /* PID + data = 1 + data */
};
typedef struct DCM_CFGSVC01DATAINFOTYPE_TAG Dcm_CfgSvc01ServiceInfoType;
# endif /* (DCM_SVC_01_SUPPORT_ENABLED == STD_ON) */
typedef uint8 Dcm_CfgSvc06Mid2TidRefMemType;
typedef uint8_least Dcm_CfgSvc06Mid2TidRefOptType;
# if (DCM_SVC_06_SUPPORT_ENABLED == STD_ON) && (DCM_OBDIDMGR_OBDMID_SUPPORT_BY_DCM_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF xf xf */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc06MidTidOpFuncType) (Dcm_OpStatusType         /* opStatus */
                                                                         ,Dcm_Uint16VarDataPtrType /* testValue */
                                                                         ,Dcm_Uint16VarDataPtrType /* minValue */
                                                                         ,Dcm_Uint16VarDataPtrType /* maxValue */
                                                                         ,Dcm_Uint8VarDataPtrType  /* status */);

struct DCM_CFGSVC06SERVICEINFOTYPE_TAG
{
  Dcm_Svc06MidTidOpFuncType  OpFunc;
  uint8                      Uasid;
  uint8                      Tid;
};
typedef struct DCM_CFGSVC06SERVICEINFOTYPE_TAG Dcm_CfgSvc06MidTidInfoType;
# endif /* (DCM_SVC_06_SUPPORT_ENABLED == STD_ON) && (DCM_OBDIDMGR_OBDMID_SUPPORT_BY_DCM_ENABLED == STD_ON) */
# if (DCM_SVC_08_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc08OpFuncType) (Dcm_MsgType, Dcm_ReadOnlyMsgType);

struct DCM_CFGSVC08SERVICEINFOTYPE_TAG
{
  Dcm_Svc08OpFuncType OpFunc;
  uint16              ReqDataLen; /* TID + data = 1 + data */
  uint16              ResDataLen; /* TID + data = 1 + data */
};
typedef struct DCM_CFGSVC08SERVICEINFOTYPE_TAG Dcm_CfgSvc08ServiceInfoType;
# endif /* (DCM_SVC_08_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_09_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc09OpFuncType) (Dcm_OpStatusType
                                                                   ,Dcm_MsgType
#if (DCM_DCM_AR_VERSION >= DCM_DCM_AR_VERSION_422)
                                                                   ,Dcm_Uint8VarDataPtrType
#endif
                                                                   );

struct DCM_CFGSVC09SERVICEINFOTYPE_TAG
{
  Dcm_Svc09OpFuncType OpFunc;
  uint8               Length; /* Data Size */
};
typedef struct DCM_CFGSVC09SERVICEINFOTYPE_TAG Dcm_CfgSvc09ServiceInfoType;
# endif /* (DCM_SVC_09_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) /* COV_DCM_SUPPORT_ALWAYS TX */
/*! Diagnostic service 0x10 sub-function (diagnostic session) configuration data */
struct DCM_CFGSVC10SUBFUNCINFOTYPE_TAG
{
  Dcm_Svc10P2TimingsType   ResponseTime;    /*!< P2 timings to be reported in the positive response */
#if (DCM_SVC_10_JMP2BOOT_ENABLED == STD_ON)
  Dcm_Svc10SessionBootType BootType;        /*!< Bootloader interaction type (Valid values: DCM_SVC10_BOOT_TYPE_*) */
#endif
};
typedef struct DCM_CFGSVC10SUBFUNCINFOTYPE_TAG Dcm_CfgSvc10SubFuncInfoType;
# endif /* (DCM_SVC_10_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_11_SUPPORT_ENABLED == STD_ON)
struct DCM_CFGSVC11SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
};
typedef struct DCM_CFGSVC11SUBFUNCINFOTYPE_TAG Dcm_CfgSvc11SubFuncInfoType;
# endif /* (DCM_SVC_11_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_27_SUPPORT_ENABLED == STD_ON)
typedef uint8 Dcm_Svc27OpClassType;

/*! Generic function pointer prototype for a Get-Seed handler */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27GetSeedFuncType)(void);

/*! Function pointer prototype for a Compare-Key handler */
#if (DCM_DCM_AR_VERSION == DCM_DCM_AR_VERSION_403)
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27CompareKeyFuncType)(Dcm_ReadOnlyMsgType
                                                                          ,Dcm_OpStatusType);
#else
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27CompareKeyFuncType)(Dcm_ReadOnlyMsgType
                                                                          ,Dcm_OpStatusType
                                                                          ,Dcm_NegativeResponseCodePtrType);
#endif

#if (DCM_STATE_SEC_ATT_CNTR_EXT_STORAGE_ENABLED == STD_ON)
/*! Function pointer prototype for a Get-Security-Attempt-Counter handler */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27GetAttemptCntrFuncType)(Dcm_OpStatusType
                                                                              ,P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT));

/*! Function pointer prototype for a Set-Security-Attempt-Counter handler */
typedef P2FUNC(Std_ReturnType, DCM_APPL_CODE, Dcm_Svc27SetAttemptCntrFuncType)(Dcm_OpStatusType
                                                                              ,uint8);
#endif

/*! Diagnostic service 0x27 sub-function configuration data */
struct DCM_CFGSVC27SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;  /*!< Pointer to the sub-function handler */
  Dcm_CfgNetBufferSizeMemType       ReqLength;   /*!< Request length (for seed: SF + ADR_size, for key: SF + key_size) */
};
typedef struct DCM_CFGSVC27SUBFUNCINFOTYPE_TAG Dcm_CfgSvc27SubFuncInfoType;

/*! Security level specific configuration data */
struct DCM_CFGSVC27SECLEVELINFOTYPE_TAG
{
  Dcm_Svc27GetSeedFuncType         GetSeedFunc;         /*!< Pointer to the Get-Seed handler */
  Dcm_Svc27CompareKeyFuncType      CompareKeyFunc;      /*!< Pointer to the Compare-Key handler */
#if (DCM_STATE_SEC_ATT_CNTR_EXT_STORAGE_ENABLED == STD_ON)
  Dcm_Svc27GetAttemptCntrFuncType  GetAttemptCntrFunc;  /*!< Pointer to the Get-Security-Attempt-Counter handler */
  Dcm_Svc27SetAttemptCntrFuncType  SetAttemptCntrFunc;  /*!< Pointer to the Set-Security-Attempt-Counter handler */
#endif
  Dcm_CfgNetBufferSizeMemType      SeedResLength;       /*!< Seed response length */
  Dcm_Svc27OpClassType             GetSeedFuncClass;    /*!< Get-Seed function prototyp descriptor */
};
typedef struct DCM_CFGSVC27SECLEVELINFOTYPE_TAG Dcm_CfgSvc27SecLevelInfoType;
# endif /* (DCM_SVC_27_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_28_SUPPORT_ENABLED == STD_ON)
/* Diagnostic service 0x28 sub-function configuration data */
struct DCM_CFGSVC28SUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc; /*!< Pointer to the sub-function handler */
  uint8                             ReqLength;  /*!< Diagnostic service request length (sub-function and data): 0 - dynamic length, !=0 - concrete length (no ISO 14229-1 SF is longer than 255 bytes) */
};
typedef struct DCM_CFGSVC28SUBFUNCINFOTYPE_TAG Dcm_CfgSvc28SubFuncInfoType;
# endif /* (DCM_SVC_28_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
struct DCM_CFGSVC2CSUBFUNCINFOTYPE_TAG
{
  Dcm_DiagSvcProcessorFuncType      SubSvcFunc;
  Dcm_CfgNetBufferSizeMemType       MinReqLength;
};
typedef struct DCM_CFGSVC2CSUBFUNCINFOTYPE_TAG Dcm_CfgSvc2CSubFuncInfoType;
# endif /* (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) */
# if (DCM_SVC_85_SUPPORT_ENABLED == STD_ON)
#if (DCM_DEM_API_430_ENABLED == STD_ON)
typedef P2FUNC(Std_ReturnType, DEM_CODE, Dcm_DemControlDtcSettingFuncType) (uint8 ClientId);
#else
typedef P2FUNC(Dem_ReturnControlDTCSettingType, DEM_CODE, Dcm_DemControlDtcSettingFuncType) (Dem_DTCGroupType, Dem_DTCKindType);
#endif

/* Diagnostic service 0x85 sub-function configuration data */
struct DCM_CFGSVC85SUBFUNCINFOTYPE_TAG
{
  Dcm_DemControlDtcSettingFuncType  DemFunc;  /*!< Pointer to the corresponding DTCsetting state Dem API (e.g. Dem_DcmDisableDTCSetting) */
  Rte_ModeType_DcmControlDtcSetting Mode;     /*!< The corresponding mode of the DTCsetting state (Valid values: RTE_MODE_DcmControlDtcSetting_*) */
};
typedef struct DCM_CFGSVC85SUBFUNCINFOTYPE_TAG Dcm_CfgSvc85SubFuncInfoType;
# endif /* (DCM_SVC_85_SUPPORT_ENABLED == STD_ON) */
/* ----------------------------------------------
 ~&&&   Module internal API function declarations
---------------------------------------------- */
# define DCM_START_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
# if (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
#if (DCM_DIDMGR_NVM_READ_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_DidMgrReadNvMSignal()
 *********************************************************************************************************************/
/*! \brief          Handler to read out a NvRam Block.
 *  \details        -
 *  \param[in]      opStatus    The operation status
 *  \param[out]     data        Response data buffer
 *  \param[in]      blockId     Id of the NvRam block
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrNvMReadSignal(Dcm_OpStatusType opStatus
                                                      ,Dcm_MsgType data
                                                      ,uint16 blockId);
#endif

#if (DCM_DIDMGR_NVM_WRITE_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_DidMgrNvMWriteSignal()
 *********************************************************************************************************************/
/*! \brief          Handler to write a NvRam block.
 *  \details        -
 *  \param[in]      data         Request data buffer
 *  \param[in]      opStatus     The operation status
 *  \param[out]     errorCode    The NRC
 *  \param[in]      blockId      Id of the NvRam block
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrNvMWriteSignal(Dcm_ReadOnlyMsgType data
                                                       ,Dcm_OpStatusType opStatus
                                                       ,Dcm_NegativeResponseCodePtrType errorCode
                                                       ,uint16 blockId);
#endif

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
/**********************************************************************************************************************
*  Dcm_DidMgrIoCtrlSRHandler_Control()
*********************************************************************************************************************/
/*! \brief          Handler for IO Dids with S/R Interface.
 *  \details        Handler for IO Dids with S/R Interface and operation type resetToDefault (0x01), freezeCurrentState(0x02)
 *                  or shortTermAdjustment (0x03)
 *  \param[in]      srEntryIndex    Index to table with corresponding RTE S/R callouts
 *  \param[in]      ioOperation     IO Operation type (InputOutputControlParameter of Service 0x02F)
 *  \param[in]      reqData         Request data containing the controlState in case of IO Operation shortTermAdjustment (0x03)
 *  \param[in]      opStatus        The operation status
 *  \param[in]      cemr            Control Enable Mask Record
 *  \param[out]     errorCode       The NRC
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
*********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrIoCtrlSRHandler_Control(Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType srEntryIndex
                                                                ,uint8 ioOperation
                                                                ,Dcm_ReadOnlyMsgType reqData
                                                                ,Dcm_OpStatusType opStatus
                                                                ,uint32 cemr
                                                                ,Dcm_NegativeResponseCodePtrType  errorCode);
#endif

#if (DCM_DIDMGR_SR_IO_CONTROL_ENABLED == STD_ON)
/**********************************************************************************************************************
*  Dcm_DidMgrIoCtrlSRHandler_Reset()
*********************************************************************************************************************/
/*! \brief          Handler for IO Dids with S/R Interface.
 *  \details        Handler for IO Dids with S/R Interface and operation type retrunControlToEcu (0x00)
 *  \param[in]      srEntryIndex    Index to table with corresponding RTE S/R callouts
 *  \param[in]      cemr            Control Enable Mask Record
 *  \param[out]     errorCode       The NRC
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
*********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_DidMgrIoCtrlSRHandler_Reset(Dcm_CfgDidMgrIoCtrlSRHandlersRefOptType srEntryIndex
                                                              ,uint32 cemr
                                                              ,Dcm_NegativeResponseCodePtrType errorCode);
#endif
# endif /* (DCM_DIDMGR_SUPPORT_ENABLED == STD_ON) */
# if (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrReadSupportedId()
 *********************************************************************************************************************/
/*! \brief          OBD Service "supported ID" reader.
 *  \details        -
 *  \param[in]      maskValue    The mask value
 *  \param[in]      resData      The response data
 *  \return         E_OK         This value is always returned
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ObdIdMgrReadSupportedId(Dcm_ObdIdMgrMaskValueTableType maskValue
                                                          ,Dcm_MsgType resData);

#if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrGetDidAvailabilityMask()
 *********************************************************************************************************************/
/*! \brief          OBD availability DID (AID) mask value provider.
 *  \details        Calculates the 32bit mask value for PBS/PBL/CALIBRATABLE_OBD and pre-compile
 *  \param[in]      DidLookUpRefStart    The index of the first element in the DID look-up table the AID shall report.
 *  \param[in]      DidLookUpRefEnd      The index of the last element in the DID look-up table the AID shall report.
 *  \param[in]      maskValue            The offline generated/calibratable mask value
 *  \return         The 32 bit bitmap value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(uint32, DCM_CODE) Dcm_ObdIdMgrGetDidAvailabilityMask(uint16 DidLookUpRefStart
                                                         ,uint16 DidLookUpRefEnd
                                                         ,Dcm_ObdIdMgrMaskValueTableType maskValue);
#else
/* Just return the offline calculated/calibrated mask */
# define Dcm_ObdIdMgrGetDidAvailabilityMask(DidLookUpRefStart, DidLookUpRefEnd, maskValue) (maskValue)                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#if (DCM_VARMGR_MULTI_SVC_ANY_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrGetRidAvailabilityMask()
 *********************************************************************************************************************/
/*! \brief          OBD availability RID (AID) mask value provider.
 *  \details        Calculates the 32bit mask value for PBS/PBL/CALIBRATABLE_OBD and pre-compile
 *  \param[in]      RidLookUpRefStart    The index of the first element in the RID look-up table the AID shall report.
 *  \param[in]      RidLookUpRefEnd      The index of the last element in the RID look-up table the AID shall report.
 *  \param[in]      maskValue            The offline generated/calibratable mask value
 *  \return         The 32 bit bitmap value
 *  \context        ISR1|ISR2|TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(uint32, DCM_CODE) Dcm_ObdIdMgrGetRidAvailabilityMask(uint16 RidLookUpRefStart
                                                         ,uint16 RidLookUpRefEnd
                                                         ,Dcm_ObdIdMgrMaskValueTableType maskValue);
#else
/* Just return the offline calculated/calibrated mask */
# define Dcm_ObdIdMgrGetRidAvailabilityMask(RidLookUpRefStart, RidLookUpRefEnd, maskValue) (maskValue)                                               /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#if (DCM_OBDUDSIDMGR_UDSMID_SUPPORT_BY_DCM_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_ObdIdMgrReadUdsMid()
 *********************************************************************************************************************/
/*! \brief          OBD Service "supported ID" reader.
 *  \details        -
 *  \param[in]      handle      The handle
 *  \param[in]      opStatus    The operation status
 *  \param[in]      resData     The response data
 *  \return         Operation result
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_ObdIdMgrReadUdsMid(Dcm_ObdIdMgrHandleMemType handle
                                                     ,Dcm_OpStatusType opStatus
                                                     ,Dcm_MsgType resData);
#endif
# endif /* (DCM_OBDUDSIDMGR_SUPPORT_ENABLED == STD_ON) */
FUNC(void, DCM_CODE) Dcm_Service27Init(void);
# if (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) /* COV_DCM_UNSUPPORTED XF */
#if (DCM_DIDMGR_DYNDID_SRCITEM_CHECK_COND_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrConditionCheckRead()
 *********************************************************************************************************************/
/*! \brief          Common DynDID check read condition operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[in]      opStatus        Current operation status
 *  \param[out]     errorCode       Returns an error if any
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrConditionCheckRead(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                                ,Dcm_OpStatusType opStatus
                                                                ,Dcm_NegativeResponseCodePtrType errorCode);
#endif
/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrRead()
 *********************************************************************************************************************/
/*! \brief          Common DynDID reader operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[in]      opStatus        Current operation status
 *  \param[out]     data            Pointer to data to be filled in
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrRead(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                  ,Dcm_OpStatusType opStatus
                                                  ,Dcm_MsgType data);

/**********************************************************************************************************************
 *  Dcm_Svc2CDefMgrReadDataLength()
 *********************************************************************************************************************/
/*! \brief          Common DynDID reader operation.
 *  \details        -
 *  \param[in]      dynDidHandle    DynDID reference to be read
 *  \param[out]     dataLength      Returns the current DynDID length
 *  \return         Next action to perform
 *  \context        TASK
 *  \reentrant      FALSE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CODE) Dcm_Svc2CDefMgrReadDataLength(Dcm_CfgDidMgrDynDidHandleMemType dynDidHandle
                                                            ,Dcm_DidMgrDidLengthPtrType dataLength);
# endif /* (DCM_SVC_2C_SUPPORT_ENABLED == STD_ON) */
# define DCM_STOP_SEC_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   Call-back function declarations
---------------------------------------------- */
# define DCM_START_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
#if (DCM_PAGED_BUFFER_ENABLED == STD_ON)
/**********************************************************************************************************************
 *  Dcm_PagedBufferDataPadding()
 *********************************************************************************************************************/
/*! \brief          A sub-function utility of readDtcInfo.
 *  \details        This function is used for data padding.
 *  \param[in,out]  pDataContext          Pointer to the data context
 *  \param[out]     ErrorCode             The NRC
 *  \return         DCM_E_BUFFERTOOLOW    Enforce transmission of the current part
 *  \context        TASK
 *  \reentrant      TRUE
 *  \pre            -
 *********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_PagedBufferDataPadding(Dcm_DiagDataContextPtrType pDataContext
                                                                 ,Dcm_NegativeResponseCodePtrType ErrorCode);
#endif
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_ReadDataByIdentifierEnergyState(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_ReadDataByIdentifierEnergyStateExtension(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);                  /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierMemorySegmentationTable(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataLengthMemorySegmentationTable(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, DCM_VAR_NOINIT) DataLength);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ConditionCheckMemorySegmentationTable(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierFlashTimingParameter(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_ReadDataByIdentifierReadMemoryAddress(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_ReadDataByIdentifierReadActiveSessionState(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);            /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataLengthSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, DCM_VAR_NOINIT) DataLength);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ConditionCheckSvkCurrent(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_WriteDataByIdentifierWriteFingerprint(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_ReadDataByIdentifierReadActiveDiagnosticSession(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);       /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierManufacturingDate(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierEcuSerialNumber(P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ReadDataByIdentifierVin(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_ConditionCheckVin(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_WriteDataByIdentifierVin(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Prog_UDS_RoutineControlCheckMemory_Start()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     DcmDspStartRoutineInSignal_DataIn   Variable-length input data provided in the routine control
 *                                                     request
 *  \param[in]     OpStatus                            The operation status
 *  \param[out]    DcmDspStartRoutineOutSignal_Result  Fixed-length output data to provide in the routine control
 *                                                     response
 *  \param[in]     DataLength                          Concrete length of the dynamic request signal
 *  \return        E_OK                                The operation is finished
 *  \return        DCM_E_PENDING                       The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP                   Forces a RCR-RP response
 *                                                     The call out will called again once the response is sent. The
 *                                                     OpStatus parameter will contain the transmission result
 *  \return        E_NOT_OK                            The operation has failed. A concrete NRC shall be set, otherwise
 *                                                     the DCM sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_RoutineControlCheckMemory_Start(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineOutSignal_Result, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Dlog_RoutineControlStartReadDevelopmentInfoField()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     DcmDspStartRoutineInSignal   Variable-length input data provided in the routine control request
 *  \param[in]     OpStatus                     The operation status
 *  \param[out]    DcmDspStartRoutineOutSignal  Variable-length output data to provide in the routine control response
 *  \param[in,out] DataLength                   IN: Concrete length of the dynamic request signal
 *                                              OUT: Concrete length of the dynamic response Signal
 *  \return        E_OK                         The operation is finished
 *  \return        DCM_E_PENDING                The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP            Forces a RCR-RP response
 *                                              The call out will called again once the response is sent. The OpStatus
 *                                              parameter will contain the transmission result
 *  \return        E_NOT_OK                     The operation has failed. A concrete NRC shall be set, otherwise the DCM
 *                                              sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dlog_RoutineControlStartReadDevelopmentInfoField(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineInSignal, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineOutSignal, P2VAR(uint16, AUTOMATIC, DCM_VAR_NOINIT) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Prog_RoutineControlSetEnergyState()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     DcmDspStartRoutineInSignal  Fixed-length input data provided in the routine control request
 *  \param[in]     OpStatus                    The operation status
 *  \return        E_OK                        The operation is finished
 *  \return        DCM_E_PENDING               The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP           Forces a RCR-RP response
 *                                             The call out will called again once the response is sent. The OpStatus
 *                                             parameter will contain the transmission result
 *  \return        E_NOT_OK                    The operation has failed. A concrete NRC shall be set, otherwise the DCM
 *                                             sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_RoutineControlSetEnergyState(uint8 DcmDspStartRoutineInSignal, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Prog_RoutineControlSetEnergyStateExtension()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     DcmDspStartRoutineInSignal  Fixed-length input data provided in the routine control request
 *  \param[in]     OpStatus                    The operation status
 *  \return        E_OK                        The operation is finished
 *  \return        DCM_E_PENDING               The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP           Forces a RCR-RP response
 *                                             The call out will called again once the response is sent. The OpStatus
 *                                             parameter will contain the transmission result
 *  \return        E_NOT_OK                    The operation has failed. A concrete NRC shall be set, otherwise the DCM
 *                                             sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_RoutineControlSetEnergyStateExtension(uint8 DcmDspStartRoutineInSignal, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode); /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
/***********************************************************************************************************************
 *  Prog_UDS_RoutineControlEraseMemory_Start()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     DcmDspStartRoutineInSignal_DataIn   Variable-length input data provided in the routine control
 *                                                     request
 *  \param[in]     OpStatus                            The operation status
 *  \param[out]    DcmDspStartRoutineOutSignal_Result  Fixed-length output data to provide in the routine control
 *                                                     response
 *  \param[in]     DataLength                          Concrete length of the dynamic request signal
 *  \return        E_OK                                The operation is finished
 *  \return        DCM_E_PENDING                       The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP                   Forces a RCR-RP response
 *                                                     The call out will called again once the response is sent. The
 *                                                     OpStatus parameter will contain the transmission result
 *  \return        E_NOT_OK                            The operation has failed. A concrete NRC shall be set, otherwise
 *                                                     the DCM sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_RoutineControlEraseMemory_Start(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineInSignal_DataIn, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineOutSignal_Result, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Prog_UDS_RoutineControlCheckProgDependency_Start()
***********************************************************************************************************************/
/*! \brief         Starts a routine execution.
 *  \details       This function is a request from DCM to the application to start a routine execution.
 *  \param[in]     OpStatus                     The operation status
 *  \param[out]    DcmDspStartRoutineOutSignal  Fixed-length output data to provide in the routine control response
 *  \return        E_OK                         The operation is finished
 *  \return        DCM_E_PENDING                The operation is not yet finished
 *  \return        DCM_E_FORCE_RCRRP            Forces a RCR-RP response
 *                                              The call out will called again once the response is sent. The OpStatus
 *                                              parameter will contain the transmission result
 *  \return        E_NOT_OK                     The operation has failed. A concrete NRC shall be set, otherwise the DCM
 *                                              sends NRC 0x22
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_RoutineControlCheckProgDependency_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) DcmDspStartRoutineOutSignal, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service10Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service10Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service11Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service11Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service22Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service22Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service27Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service28Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service28Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service2EProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service2EProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service31Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service31Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  DcmFbl_Service34_Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service34_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  DcmFbl_Service36_Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service36_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  DcmFbl_Service37_Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) DcmFbl_Service37_Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service3DProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service3DProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service3EProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service3EProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service85Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic service, configured to be handled
 *                 by a CDD, is received. All of the relevant diagnostic request parameter information is forwarded by
 *                 DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSidTabFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol identifier.
 *                                    The pointers in pMsgContext points behind the SID.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Job processing is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Job processing finished, send positive response
 *  \return        DCM_E_NOT_OK       Job processing finished, send NRC from the ErrorCode
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service85Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service10PostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Triggers a mode switch, performs a state transition or executes other actions depending on the
 *                 concrete diagnostic service.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service10PostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service10FastPostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Processes time critical diagnostic service specific operations immediately after confirmation of
 *                 service processing.
 *  \param[in]     status  The post-processing status
 *  \context       ISR1|ISR2
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service10FastPostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service11PostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Triggers a mode switch, performs a state transition or executes other actions depending on the
 *                 concrete diagnostic service.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service11PostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service11FastPostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Processes time critical diagnostic service specific operations immediately after confirmation of
 *                 service processing.
 *  \param[in]     status  The post-processing status
 *  \context       ISR1|ISR2
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service11FastPostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service27PostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Triggers a mode switch, performs a state transition or executes other actions depending on the
 *                 concrete diagnostic service.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service27PostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service28PostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Triggers a mode switch, performs a state transition or executes other actions depending on the
 *                 concrete diagnostic service.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service28PostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_Service85PostProcessor()
***********************************************************************************************************************/
/*! \brief         Finalizes the service processing.
 *  \details       Triggers a mode switch, performs a state transition or executes other actions depending on the
 *                 concrete diagnostic service.
 *  \param[in]     status  The post-processing status
 *  \context       TASK
 *  \reentrant     FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Service85PostProcessor(Dcm_ConfirmationStatusType status);
/***********************************************************************************************************************
 *  Dcm_RepeaterDeadEnd()
***********************************************************************************************************************/
/*! \brief         Dummy repeater proxy.
 *  \details       -
 *  \param[in]     opStatus             The operation status
 *  \param[in,out] pMsgContext          Message-related information for one diagnostic protocol identifier.
 *  \param[out]    ErrorCode            Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_STOP_REPEATER  Stops the repeater proxy
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_RepeaterDeadEnd(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service11_01Processor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service11_01Processor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service27SeedProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27SeedProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service27KeyProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service27KeyProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_SecurityAccess_GetSeed(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, DCM_VAR_NOINIT) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Prog_UDS_SecurityAccess_CompareKey(P2CONST(uint8, AUTOMATIC, DCM_VAR_NOINIT) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, DCM_VAR_NOINIT) ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service28_XXProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service28_XXProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode);
/***********************************************************************************************************************
 *  Dcm_Service28_XXProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service28_XXProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode); /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
/***********************************************************************************************************************
 *  Dcm_Service28_XXProcessor()
***********************************************************************************************************************/
/*! \brief         Processes a received diagnostic sub-service request.
 *  \details       DCM calls a function of this kind as soon as a supported diagnostic sub-service, configured to be
 *                 handled by a CDD, is received. All of the relevant diagnostic request parameter information is
 *                 forwarded by DCM through the pMsgContext function parameter.
 *                 The concrete name of the callout is defined by the configuration
 *                 parameter/Dcm/DcmConfigSet/DcmDsd/DcmDsdServiceTable/DcmDsdService/DcmDsdSubService/DcmDsdSubServiceFnc.
 *  \param[in]     opStatus           The operation status
 *  \param[in,out] pMsgContext        Message-related information for one diagnostic protocol sub-function identifier.
 *                                    The pointer in pMsgContext points behind the sub-function.
 *  \param[out]    ErrorCode          Negative response code in case return value is DCM_E_NOT_OK
 *  \return        DCM_E_PENDING      Request is not yet finished
 *  \return        DCM_E_FORCE_RCRRP  (Vendor extension) Forces a RCR-RP response.
 *                                    The call out will called again once the response is sent. The OpStatus parameter
 *                                    will contain the transmission result
 *  \return        DCM_E_OK           Request was successful
 *  \context       TASK
 *  \reentrant     FALSE
 *  \synchronous   FALSE
 *  \pre           -
***********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_Service28_XXProcessor(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode); /* PRQA S 0777 */ /* MD_Dcm_CfgDepend_0777 */
# define DCM_STOP_SEC_CALLOUT_CODE
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 8-Bit
---------------------------------------------- */
# define DCM_START_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! TxPduId to DCM connection map */
extern CONST(Dcm_NetConnRefMemType, DCM_CONST) Dcm_CfgNetTxPduInfo[14];
/*! Map of DCM relevant network handles */
extern CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetConnComMChannelMap[1];
/*! Service 0x28 list of channels for the all-comm-channel parameter */
extern CONST(Dcm_CfgNetNetIdRefMemType, DCM_CONST) Dcm_CfgNetComCtrlChannelListAll[2];
/*! Look up table of DCM service identifiers */
extern CONST(uint8, DCM_CONST) Dcm_CfgDiagSvcIdLookUpTable[14];
/*! Service 0x10 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc10SubFuncLookUpTable[4];
/*! Service 0x11 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc11SubFuncLookUpTable[2];
/*! Service 0x27 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc27SubFuncLookUpTable[3];
/*! Service 0x28 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubFuncLookUpTable[4];
/*! Service 0x28 look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc28MessageTypeLookUpTable[4];
/*! Service 0x28 network ID lookup */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc28SubNetIdLookUp[2];
/*! Service 0x3E look up table  */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc3ESubFuncLookUpTable[2];
/*! Look up table of service 0x85 */
extern CONST(uint8, DCM_CONST) Dcm_CfgSvc85SubFuncLookUpTable[2];
# define DCM_STOP_SEC_CONST_8
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM 16-Bit
---------------------------------------------- */
# define DCM_START_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DID look up table  */
extern CONST(uint16, DCM_CONST) Dcm_CfgDidMgrDidLookUpTable[13];
/*! RID look up table  */
extern CONST(uint16, DCM_CONST) Dcm_CfgRidMgrRidLookUpTable[7];
# define DCM_STOP_SEC_CONST_16
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/* ----------------------------------------------
 ~&&&   ROM of unspecified size
---------------------------------------------- */
# define DCM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
/*! DCM buffer descriptor */
extern CONST(Dcm_CfgNetBufferInfoType, DCM_CONST) Dcm_CfgNetBufferInfo[1];
/*! RxPduId map */
extern CONST(Dcm_CfgNetRxPduInfoType, DCM_CONST) Dcm_CfgNetRxPduInfo[28];
/*! DCM connection descriptor */
extern CONST(Dcm_CfgNetConnectionInfoType, DCM_CONST) Dcm_CfgNetConnectionInfo[14];
/*! DCM protocol descriptor */
extern CONST(Dcm_CfgNetProtocolInfoType, DCM_CONST) Dcm_CfgNetProtocolInfo[1];
/*! Map of all relevant for DCM network handles */
extern CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetAllComMChannelMap[1];
/*! Look up table of DCM relevant network handles */
extern CONST(NetworkHandleType, DCM_CONST) Dcm_CfgNetNetworkHandleLookUpTable[2];
/*! Diagnostic service execution conditions */
extern CONST(Dcm_CfgStatePreconditionInfoType, DCM_CONST) Dcm_CfgStatePreconditions[6];
/*! Session state properties */
extern CONST(Dcm_CfgStateSessionInfoType, DCM_CONST) Dcm_CfgStateSessionInfo[3];
/*! Security Access state properties */
extern CONST(Dcm_CfgStateSecurityInfoType, DCM_CONST) Dcm_CfgStateSecurityInfo[1];
/*! DID properties */
extern CONST(Dcm_CfgDidMgrDidInfoType, DCM_CONST) Dcm_CfgDidMgrDidInfo[12];
/*! DID operation properties */
extern CONST(Dcm_CfgDidMgrOpInfoType, DCM_CONST) Dcm_CfgDidMgrOpInfo[13];
/*! DID signal operation classes */
extern CONST(Dcm_CfgDidMgrSignalOpClassInfoType, DCM_CONST) Dcm_CfgDidMgrSignalOpClassInfo[18];
/*! RID properties */
extern CONST(Dcm_CfgRidMgrRidInfoType, DCM_CONST) Dcm_CfgRidMgrRidInfo[6];
/*! RID operation properties */
extern CONST(Dcm_CfgRidMgrOpInfoType, DCM_CONST) Dcm_CfgRidMgrOpInfo[6];
/*! Properties of the memory map of a specific MID */
extern CONST(Dcm_CfgMemMgrMemMapInfoType, DCM_CONST) Dcm_CfgMemMgrMemMap[1];
/*! DCM service initializers */
extern CONST(Dcm_DiagSvcInitFuncType, DCM_CONST) Dcm_CfgDiagSvcInitializers[2];
/*! DCM service properties */
extern CONST(Dcm_CfgDiagServiceInfoType, DCM_CONST) Dcm_CfgDiagServiceInfo[14];
/*! Indirection from diag service info to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgDiagSvcIdExecPrecondTable[13];
/*! DCM service post processors */
extern CONST(Dcm_DiagSvcConfirmationFuncType, DCM_CONST) Dcm_CfgDiagSvcPostProcessors[8];
/*! Service 0x10 sub-service properties table  */
extern CONST(Dcm_CfgSvc10SubFuncInfoType, DCM_CONST) Dcm_CfgSvc10SubFuncInfo[3];
/*! Indirection from service 0x10 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc10SubFuncExecPrecondTable[3];
/*! Service 0x11 sub-service properties table  */
extern CONST(Dcm_CfgSvc11SubFuncInfoType, DCM_CONST) Dcm_CfgSvc11SubFuncInfo[1];
/*! Indirection from service 0x11 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc11SubFuncExecPrecondTable[1];
/*! Service 0x27 sub-service properties table  */
extern CONST(Dcm_CfgSvc27SubFuncInfoType, DCM_CONST) Dcm_CfgSvc27SubFuncInfo[2];
/*! Service 0x27 security level properties table  */
extern CONST(Dcm_CfgSvc27SecLevelInfoType, DCM_CONST) Dcm_CfgSvc27SecLevelInfo[1];
/*! Indirection from service 0x27 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc27SubFuncExecPrecondTable[2];
/*! Service 0x28 sub-service properties table  */
extern CONST(Dcm_CfgSvc28SubFuncInfoType, DCM_CONST) Dcm_CfgSvc28SubFuncInfo[3];
/*! Indirection from service 0x28 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc28SubFuncExecPrecondTable[3];
/*! Service 0x28 network ID to ComM channel map */
extern CONST(NetworkHandleType, DCM_CONST) Dcm_CfgSvc28SubNetIdMap[1];
/*! Indirection from service 0x3E sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc3ESubFuncExecPrecondTable[1];
/*! Indirection from service 0x85 sub functions to execution pre conditions */
extern CONST(Dcm_CfgStateRefMemType, DCM_CONST) Dcm_CfgSvc85SubFuncExecPrecondTable[1];
/*! DCM service 0x85 properties */
extern CONST(Dcm_CfgSvc85SubFuncInfoType, DCM_CONST) Dcm_CfgSvc85SubFuncInfo[1];
# define DCM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
# include "MemMap.h"                                                                                                                                 /* PRQA S 5087 */ /* MD_MSR_19.1 */
/*lint -restore */
#endif /* !defined(DCM_LCFG_H) */
/* ********************************************************************************************************************
 * END OF FILE: Dcm_Lcfg.h
 * ******************************************************************************************************************** */

