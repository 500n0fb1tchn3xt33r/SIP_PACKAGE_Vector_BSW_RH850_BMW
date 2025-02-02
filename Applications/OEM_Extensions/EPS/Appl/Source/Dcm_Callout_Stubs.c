
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  Dcm_Callout_Stubs.c
      Project:  Vector Basic Runtime System for MICROSAR4
       Module:  BrsAsrMain

  \brief Description:  File for implementation of DCM callouts.
                       This file is a template only - please implement the callouts according to your needs.

  \attention Please note:
    The demo and example programs only show special aspects of the software. With regard to the fact
    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
 ----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
  ----------------------------  ------------  -------------------------------------------------------------------------
  Benjamin Walter               visbwa        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
 ----------------------------------------------------------------------------------------------------------------------
  01.00.00  2015-07-14  visbwa  Initial creation for usage with StartApplication
  01.00.01  2016-06-22  visbwa  Added sample code information block
  01.00.02  2016-08-29  visbwa  Added Dcm_DiagnosticService_0x38()
**********************************************************************************************************************/

/**********************************************************************************************************************
*  SAMPLE CODE ONLY
*  -------------------------------------------------------------------------------------------------------------------
*  This implementation is sample code and only intended to illustrate an example of a possible BSW implementation.
*  The implementation may not be complete and is not provided for use in production
*  without any modifications. If this sample code is used in any way, the customer shall test
*  this implementation as well as any of its modifications with diligent care.
*********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Dcm.h"
#include "Dlog_BootMode.h"

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/
# define DCM_START_SEC_CALLOUT_CODE
# include "MemMap.h"

/**********************************************************************************************************************
  PART 1 - STATIC PART
   These Callouts are announced within Dcm_Core.h.
   The existence is configuration specific
**********************************************************************************************************************/
FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(Dcm_IdContextType idContext
                                             ,PduIdType dcmRxPduId
                                             ,Dcm_ConfirmationStatusType status)
{
}

# if (DCM_DIAG_JUMPTOFBL_ENABLED   == STD_ON) || \
     (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_SetProgConditions(Dcm_ProgConditionsPtrType myProgConditions)
{
  Dlog_BootModeRequestBootloader(DLOG_BMUSER_PROG,TRUE);
  MyBootModeSet(myProgConditions);
  return E_OK;
}
# endif

# if (DCM_DIAG_JUMPFROMFBL_ENABLED == STD_ON)
FUNC(Dcm_EcuStartModeType, DCM_CALLOUT_CODE) Dcm_GetProgConditions(Dcm_ProgConditionsPtrType progConditions)
{
  return DCM_COLD_START;
}
# endif

# if (DCM_SVC_23_SUPPORT_ENABLED == STD_ON)
FUNC(Dcm_ReturnReadMemoryType, DCM_CALLOUT_CODE) Dcm_ReadMemory(Dcm_OpStatusType OpStatus
                                                               ,uint8  MemoryIdentifier
                                                               ,uint32 MemoryAddress
                                                               ,uint32 MemorySize
                                                               ,Dcm_MsgType MemoryData)
{
  return DCM_E_NOT_OK;
}
# endif

# if (DCM_SVC_3D_SUPPORT_ENABLED == STD_ON)
FUNC(Dcm_ReturnWriteMemoryType, DCM_CALLOUT_CODE) Dcm_WriteMemory(Dcm_OpStatusType OpStatus
                                                                 ,uint8  MemoryIdentifier
                                                                 ,uint32 MemoryAddress
                                                                 ,uint32 MemorySize
                                                                 ,Dcm_MsgType MemoryData)
{
  return DCM_E_NOT_OK;
}
# endif

/**********************************************************************************************************************
  PART 2 - DYNAMIC PART
   These Callouts are announced within Dcm_Lcfg.h.
   The existence is configuration specific
**********************************************************************************************************************/
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x34(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
  return E_NOT_OK;
}
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x35(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext, Dcm_NegativeResponseCodePtrType ErrorCode)
{
  return E_NOT_OK;
}
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x36(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
  return E_NOT_OK;
}
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x37(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
  return E_NOT_OK;
}
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x38(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
  return E_NOT_OK;
}

/**********************************************************************************************************************
  END of User implementation area
**********************************************************************************************************************/
# define DCM_STOP_SEC_CALLOUT_CODE
# include "MemMap.h"
