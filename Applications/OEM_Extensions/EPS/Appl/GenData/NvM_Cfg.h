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
 *            Module: NvM
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: NvM_Cfg.h
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

/**********************************************************************************************************************
 * PROTECTION AGAINST MULTIPLE INCLUSION
 *********************************************************************************************************************/
/* public section - to be used by NvM itself and its users */
#if (!defined NVM_CFG_H_PUBLIC)
#define NVM_CFG_H_PUBLIC

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_CFG_MAJOR_VERSION    (5u)
#define NVM_CFG_MINOR_VERSION    (7u)
#define NVM_CFG_PATCH_VERSION    (0u)

/**********************************************************************************************************************
 * NVM API TYPE INCLUDES
 *********************************************************************************************************************/
#include "Rte_NvM_Type.h"

#include "NvM_Types.h"

/**********************************************************************************************************************
 * API CFG TYPE DEFINITIONS
 *********************************************************************************************************************/
/* Type for an the additional published parameter Compiled Configuration ID
 * (see CompiledConfigurationId in NvM.h)
 */
/* Compiled Config Id Type */
/* PRQA S 0750 2 */ /* MD_MSR_18.4 */
typedef union
{
    uint16 Word_u16;
    uint8  Bytes_au8[2u];
} NvM_CompiledConfigIdType;

/**********************************************************************************************************************
 * CFG COMMON PARAMETER
 *********************************************************************************************************************/
/* --------------------  DEVELOPMENT / PRODUCTION MODE -------------------- */
/* switch between Debug- or Production-Mode */
#define NVM_DEV_ERROR_DETECT                  (STD_ON)

/* Preprocessor switch that is used in NvM_ReadAll() */
#define NVM_DYNAMIC_CONFIGURATION             (STD_OFF)

#define NVM_API_CONFIG_CLASS_1                (1u)
#define NVM_API_CONFIG_CLASS_2                (3u)
#define NVM_API_CONFIG_CLASS_3                (7u)

#define NVM_API_CONFIG_CLASS                  (NVM_API_CONFIG_CLASS_3)

#define NVM_JOB_PRIORISATION                  STD_OFF

/* define compiled Block ID */
#define NVM_COMPILED_CONFIG_ID                (1U)

/* switch for enablinig fast mode during multi block requests */
#define NVM_DRV_MODE_SWITCH                   (STD_ON)

/* switch for enablinig polling mode and disabling notifications */
#define NVM_POLLING_MODE                      (STD_OFF)

/* switch for enabling the internal buffer for Crc handling */
#define NVM_CRC_INT_BUFFER                    (STD_ON)

/* number of defined NV blocks */
#define NVM_TOTAL_NUM_OF_NVRAM_BLOCKS         (28UL)

/* internal buffer size */
#define NVM_INTERNAL_BUFFER_LENGTH            97UL

/* version info api switch */
#define NVM_VERSION_INFO_API                  (STD_OFF)

/* switch to enable the ram block status api */
#define NVM_SET_RAM_BLOCK_STATUS_API          (STD_ON)

/* switch that gives the user (EcuM) the possibility to time-out WriteAll cancellation */
#define NVM_KILL_WRITEALL_API                 (STD_ON)

/* enabled or disable the whole repair redundant blocks feature */
#define NVM_REPAIR_REDUNDANT_BLOCKS_API       (STD_OFF)

/* NVM does not need this macro. It is intended for underlying modules,
 * relying on its existence
 */
#define NVM_DATASET_SELECTION_BITS            (4U)

/* block offset for DCM blocks */
#define NVM_DCM_BLOCK_OFFSET                  0x8000u

/* returns corresponding DCM BlockId of an original NVRAM Block */
/* PRQA S 3453 1 */ /* MD_MSR_19.7 */
#define NvM_GetDcmBlockId(MyApplBlockId)      ((MyApplBlockId) | NVM_DCM_BLOCK_OFFSET)

/* BlockId's:
 * Note: The numbers of the following list must meet the configured blocks in the NvM_BlockDescriptorTable_at
 *
 * Alignment of the handles of all blocks
 * Id 0 is reserved for multiblock calls
 * Id 1 is reserved for config ID
 */
#define NvMConf___MultiBlockRequest (0U) 
#define NvMConf_NvMBlockDescriptor_NvMConfigBlock (1UL) 
#define NvMConf_NvMBlockDescriptor_DemAdminDataBlock (2UL) 
#define NvMConf_NvMBlockDescriptor_DLOG_SVK_BACKUP_0 (3UL) 
#define NvMConf_NvMBlockDescriptor_DLOG_SVK_BACKUP_1 (4UL) 
#define NvMConf_NvMBlockDescriptor_DLOG_SVK_BACKUP_2 (5UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 (6UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 (7UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 (8UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 (9UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_BOOT_SVK_HISTORY (10UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_DARH_DiagnoseMasterEnable (11UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 (12UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_BOOT_PROG_DATA (13UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 (14UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 (15UL) 
#define NvMConf_NvMBlockDescriptor_DLOG_SVK_SYS_SUPP (16UL) 
#define NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 (17UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_DLOG_SVK_PLANT (18UL) 
#define NvMConf_NvMBlockDescriptor_DemStatusDataBlock (19UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock0 (20UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_DCM_ROE (21UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock1 (22UL) 
#define NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock2 (23UL) 
#define NvMConf_NvMBlockDescriptor_OmcDependencyNVMData (24UL) 
#define NvMConf_NvMBlockDescriptor_NvM_BLOCK_DARH (25UL) 
#define NvMConf_NvMBlockDescriptor_TestStampDefaults (26UL) 
#define NvMConf_NvMBlockDescriptor_NVM_BLOCK_DLOG_SvkEntry (27UL) 


/* CONST_DESCRIPTOR_TABLE contains all block relevant data, including the compiled config ID
 */
#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

/* Additional published parameter because e.g. in case of validate all RAM
 * Blocks it is nice to know the number of Blocks. But take care: this number
 * of Blocks includes Block 0 and Block 1, which are the MultiBlock and the
 * Configuration Block - user Blocks start wiht index 2!
 */
extern CONST(uint16, NVM_PUBLIC_CONST) NvM_NoOfBlockIds_t;

/* Additional published parameter because in case of a clear EEPROM, it is
 * necessary, to write the Configuration Block containing this Compiled
 * Configuration ID to EEPROM
 */
/* Compiled Configuration ID as defined in NvM_Cfg.c */
/* PRQA S 0759 1 */ /* MD_MSR_18.4 */
extern CONST(NvM_CompiledConfigIdType, NVM_PUBLIC_CONST) NvM_CompiledConfigId_t;

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

/* Component define block (available, if EcuC module is active, otherwise only NVM_DUMMY_STATEMENTs are defined*/
#ifndef NVM_USE_DUMMY_FUNCTIONS
#define NVM_USE_DUMMY_FUNCTIONS STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyFunction */
#endif
#ifndef NVM_USE_DUMMY_STATEMENT
#define NVM_USE_DUMMY_STATEMENT STD_OFF /* /MICROSAR/EcuC/EcucGeneral/DummyStatement */
#endif
#ifndef NVM_DUMMY_STATEMENT
#define NVM_DUMMY_STATEMENT(v) (v)=(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef NVM_DUMMY_STATEMENT_CONST
#define NVM_DUMMY_STATEMENT_CONST(v) (void)(v) /* PRQA S 3453 */ /* MD_MSR_19.7 */  /* /MICROSAR/EcuC/EcucGeneral/DummyStatementKind */
#endif
#ifndef NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD
#define NVM_ATOMIC_BIT_ACCESS_IN_BITFIELD STD_OFF /* /MICROSAR/EcuC/EcucGeneral/AtomicBitAccessInBitfield */
#endif
#ifndef NVM_ATOMIC_VARIABLE_ACCESS
#define NVM_ATOMIC_VARIABLE_ACCESS 32U /* /MICROSAR/EcuC/EcucGeneral/AtomicVariableAccess */
#endif
#ifndef NVM_PROCESSOR_RH850_1363
#define NVM_PROCESSOR_RH850_1363
#endif
#ifndef NVM_COMP_GREENHILLS
#define NVM_COMP_GREENHILLS
#endif
#ifndef NVM_GEN_GENERATOR_MSR
#define NVM_GEN_GENERATOR_MSR
#endif
#ifndef NVM_CPUTYPE_BITORDER_LSB2MSB
#define NVM_CPUTYPE_BITORDER_LSB2MSB /* /MICROSAR/EcuC/EcucGeneral/BitOrder */
#endif
#ifndef NVM_CONFIGURATION_VARIANT_PRECOMPILE
#define NVM_CONFIGURATION_VARIANT_PRECOMPILE 1
#endif
#ifndef NVM_CONFIGURATION_VARIANT_LINKTIME
#define NVM_CONFIGURATION_VARIANT_LINKTIME 2
#endif
#ifndef NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE
#define NVM_CONFIGURATION_VARIANT_POSTBUILD_LOADABLE 3
#endif
#ifndef NVM_CONFIGURATION_VARIANT
#define NVM_CONFIGURATION_VARIANT NVM_CONFIGURATION_VARIANT_PRECOMPILE
#endif
#ifndef NVM_POSTBUILD_VARIANT_SUPPORT
#define NVM_POSTBUILD_VARIANT_SUPPORT STD_OFF
#endif


/* ---- end public configuration section ---------------------------------- */
#endif /* NVM_CFG_H_PUBLIC */

/*---- End of File ---------------------------------------------------------*/

