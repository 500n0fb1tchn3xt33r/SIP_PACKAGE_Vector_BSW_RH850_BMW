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
 *          File:  Rte_MemMap.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EcuInstance
 *
 *     Generator:  MICROSAR RTE Generator Version 4.10.0
 *                 RTE Core Version 1.10.0
 *       License:  License CBD1600224 for HELLA KGaA Hueck & Co. valid until 2017-09-30
 *
 *   Description:  RTE Memory Mapping header file
 *********************************************************************************************************************/

/* PRQA S 0883 EOF */ /* MD_Rte_0883 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_CODE
# undef RTE_START_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_ZERO_INIT_8BIT
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_ZERO_INIT_8BIT
# undef RTE_START_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_8BIT
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_CONST_UNSPECIFIED
# undef RTE_START_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CONST_UNSPECIFIED
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_APPL_CODE
# undef RTE_START_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CODE
# undef RTE_STOP_SEC_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
# undef RTE_STOP_SEC_VAR_ZERO_INIT_8BIT /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_8BIT
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CONST_UNSPECIFIED
# undef RTE_STOP_SEC_CONST_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_APPL_CODE
# undef RTE_STOP_SEC_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_BSWM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_BSWM_APPL_CODE
# undef RTE_START_SEC_BSWM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_COMM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_COMM_APPL_CODE
# undef RTE_START_SEC_COMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_DCMGLUE_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_DCMGLUE_APPL_CODE
# undef RTE_START_SEC_DCMGLUE_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_DCM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_DCM_APPL_CODE
# undef RTE_START_SEC_DCM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_DET_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_DET_APPL_CODE
# undef RTE_START_SEC_DET_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_ECUM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_ECUM_APPL_CODE
# undef RTE_START_SEC_ECUM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_BSWM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_BSWM_APPL_CODE
# undef RTE_STOP_SEC_BSWM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_COMM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_COMM_APPL_CODE
# undef RTE_STOP_SEC_COMM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_DCMGLUE_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_DCMGLUE_APPL_CODE
# undef RTE_STOP_SEC_DCMGLUE_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_DCM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_DCM_APPL_CODE
# undef RTE_STOP_SEC_DCM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_DET_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_DET_APPL_CODE
# undef RTE_STOP_SEC_DET_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_ECUM_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_ECUM_APPL_CODE
# undef RTE_STOP_SEC_ECUM_APPL_CODE /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * OS Application specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_Trusted_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_Trusted_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_Trusted_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_Trusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!        << Start of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_OS_MEMMAP_INCLUDE
 *********************************************************************************************************************/

//#include "Os_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/



#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_STOP_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED)  */

#ifdef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_START_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED)  */

#ifdef RTE_START_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_START_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED)  */

#ifdef RTE_START_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_STOP_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED)  */

#ifdef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_NOINIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_NOINIT_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_STOP_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED)  */

#ifdef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_OsApplication_NONTrusted_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_STOP_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

#if 0
/***  Start of saved code (symbol: memory mapping implementation:RTE_START_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED)  */

#ifdef RTE_START_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED
# undef RTE_START_SEC_VAR_OsApplication_NONTrusted_ZERO_INIT_UNSPECIFIED /* PRQA S 0841 */ /* MD_MSR_19.6 */
# define OsApplication_NONTrusted_START_SEC_VAR_UNSPECIFIED
# undef MEMMAP_ERROR /* PRQA S 0841 */ /* MD_MSR_19.6 */
#endif

/***  End of saved code  ************************************************************************************/
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0883:  MISRA rule: 19.15
     Reason:     AUTOSAR SWS Memory Mapping requires inclusion of MemMap.h multiple times in a file in order to
                 select appropriate #pragma directives.
     Risk:       MemMap.h is provided by the integrator, hence many risks may occur, caused by wrong implementation of this file.
     Prevention: The integrator strictly has to adhere to the definitions of the AUTOSAR SWS Memory Mapping. Extensions to
                 the file not described in the SWS may not be put into MemMap.h. This has to be verified by code inspection.

*/
