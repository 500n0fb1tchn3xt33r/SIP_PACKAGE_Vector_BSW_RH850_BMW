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
 *            Module: Com
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Cbk.h
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


#if !defined (COM_CBK_H)
# define COM_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0777 EOF */ /* MD_Com_0777_IPduCallouts */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Cot.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/



/**
 * \defgroup ComHandleIdsComRxPdu Handle IDs of handle space ComRxPdu.
 * \brief Rx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ACLNY_MASSCNTR_23008def                       0
#define ComConf_ComIPdu_ANFRAGE_434514f6_In                           1
#define ComConf_ComIPdu_AVL_RPM_WHL_23008def                          2
#define ComConf_ComIPdu_A_TEMP_23008def                               3
#define ComConf_ComIPdu_CON_VEH_23008def                              4
#define ComConf_ComIPdu_CTR_DIAG_OBD_DRDY_23008def                    5
#define ComConf_ComIPdu_CTR_VIB_STW_DISP_EXMI_SP2015_23008def         6
#define ComConf_ComIPdu_DIAG_OBD_ENG_23008def                         7
#define ComConf_ComIPdu_ENERG_DGR_DRDY_23008def                       8
#define ComConf_ComIPdu_ENSU_SFY_23008def                             9
#define ComConf_ComIPdu_ERRM_BN_U_23008def                            10
#define ComConf_ComIPdu_FAHRGESTELLNUMMER_23008def                    11
#define ComConf_ComIPdu_FZZSTD_23008def                               12
#define ComConf_ComIPdu_KILOMETERSTAND_23008def                       13
#define ComConf_ComIPdu_OFFS_QUAD_EPS_23008def                        14
#define ComConf_ComIPdu_RELATIVZEIT_23008def                          15
#define ComConf_ComIPdu_SECU_FAHRGESTELLNUMMER_23008def               16
#define ComConf_ComIPdu_SECU_RESP_23008def                            17
#define ComConf_ComIPdu_STEA_OFFS_23008def                            18
#define ComConf_ComIPdu_ST_CENG_23008def                              19
#define ComConf_ComIPdu_ST_ENERG_GEN_23008def                         20
#define ComConf_ComIPdu_ST_STAB_DSC_23008def                          21
#define ComConf_ComIPdu_SU_CLE_DRDY_DXP_23008def                      22
#define ComConf_ComIPdu_TAR_ESTP_VIRT_FTAX_23008def                   23
#define ComConf_ComIPdu_TAR_QTA_STRMOM_DV_23008def                    24
#define ComConf_ComIPdu_TAR_STMOM_DV_ACT_23008def                     25
#define ComConf_ComIPdu_VYAW_VEH_23008def                             26
#define ComConf_ComIPdu_V_VEH_23008def                                27
/**\} */

/**
 * \defgroup ComHandleIdsComTxPdu Handle IDs of handle space ComTxPdu.
 * \brief Tx Pdus
 * \{
 */

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
/*      Symbolic Name                                                 Value   Active in predefined variant(s) */
#define ComConf_ComIPdu_ANFRAGE_434514f6_Out                          0
#define ComConf_ComIPdu_AVL_FORC_GRD_23008def                         1
#define ComConf_ComIPdu_AVL_PO_EPS_23008def                           2
#define ComConf_ComIPdu_AVL_STMOM_DV_ACT_23008def                     3
#define ComConf_ComIPdu_DBG_EPS_BS_MOD_58_BYTE_23008def               4
#define ComConf_ComIPdu_DBG_EPS_MOD_EXT_120_BYTE_23008def             5
#define ComConf_ComIPdu_DISP_CC_EPS_23008def                          6
#define ComConf_ComIPdu_DT_EST_23008def                               7
#define ComConf_ComIPdu_ENGTORQ_EPS_23008def                          8
#define ComConf_ComIPdu_RQ_STG_EFAN_23008def                          9
#define ComConf_ComIPdu_SECU_CHAL_23008def                            10
#define ComConf_ComIPdu_ST_DIAG_OBD_3_DRDY_23008def                   11
#define ComConf_ComIPdu_ST_EST_23008def                               12
#define ComConf_ComIPdu_SU_EPS_23008def                               13
/**\} */

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
  Com_RxIndication
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after an I-PDU has been received.
    \param    RxPduId      ID of AUTOSAR COM I-PDU that has been received. Identifies the data that has been received.
                              Range: 0..(maximum number of I-PDU IDs received by AUTOSAR COM) - 1
    \param    PduInfoPtr      Payload information of the received I-PDU (pointer to data and data length).
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737026
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_RxIndication(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, COM_APPL_DATA) PduInfoPtr);

/**********************************************************************************************************************
  Com_TxConfirmation
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer after the PDU has been transmitted on the network.
              A confirmation that is received for an I-PDU that does not require a confirmation is silently discarded.
    \param    TxPduId    ID of AUTOSAR COM I-PDU that has been transmitted.
                            Range: 0..(maximum number of I-PDU IDs transmitted by AUTOSAR COM) - 1
    \return   none
    \context  The function can be called on interrupt and task level. It is not allowed to use CAT1 interrupts with Rte (BSW00326]). Due to this, the interrupt context shall be configured to a CAT2 interrupt if an Rte is used. 
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737028
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(void, COM_CODE) Com_TxConfirmation(PduIdType TxPduId);

/**********************************************************************************************************************
  Com_TriggerTransmit
**********************************************************************************************************************/
/** \brief    This function is called by the lower layer when an AUTOSAR COM I-PDU shall be transmitted.
              Within this function, AUTOSAR COM shall copy the contents of its I-PDU transmit buffer
              to the L-PDU buffer given by SduPtr.
              Use case:
              This function is used e.g. by the LIN Master for sending out a LIN frame. In this case, the trigger transmit
              can be initiated by the Master schedule table itself or a received LIN header.
              This function is also used by the FlexRay Interface for requesting PDUs to be sent in static part
              (synchronous to the FlexRay global time). Once the I-PDU has been successfully sent by the lower layer
              (PDU-Router), the lower layer must call Com_TxConfirmation().
    \param          TxPduId       ID of AUTOSAR COM I-PDU that is requested to be transmitted by AUTOSAR COM.
    \param[in,out]  PduInfoPtr    Contains a pointer to a buffer (SduDataPtr) where the SDU
                                  data shall be copied to, and the available buffer size in SduLengh.
                                  On return, the service will indicate the length of the copied SDU
                                  data in SduLength.
    \return         E_OK          SDU has been copied and SduLength indicates the number of copied bytes.
    \return         E_NOT_OK      No data has been copied, because
                                  Com is not initialized
                                  or TxPduId is not valid
                                  or PduInfoPtr is NULL_PTR
                                  or SduDataPtr is NULL_PTR
                                  or SduLength is too small.
    \context  TASK|ISR2
    \synchronous TRUE
    \reentrant   TRUE, for different Handles
    \trace    SPEC-2737022, SPEC-2737023, SPEC-2737024
    \note     The function is called by the lower layer.
**********************************************************************************************************************/
FUNC(Std_ReturnType, COM_CODE) Com_TriggerTransmit(PduIdType TxPduId, P2VAR(PduInfoType, AUTOMATIC, COM_APPL_VAR) PduInfoPtr);


#define COM_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 1 */ /* MD_MSR_19.1 */

#endif  /* COM_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Com_Cbk.h
**********************************************************************************************************************/

