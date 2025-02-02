/**
*  \file
*
*  \brief       Stm Classic Adapter Version
*
*  Version Check for Stm module
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.2.0
*
*  \remarks     File is generated with PAGe
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-29 10:57:39.585723
*
------------------------------------------------------------------------------*/

#ifndef STMCLASSIC_VERSION_H
#define STMCLASSIC_VERSION_H

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/
/*
 * Violation of MISRA-C:2004 Rule 19.7:
 * Reason: this macro is only used in preprocessor directive,
 * no function possible. See PRQA 3453
 */

/*------------------------------------------------------------------------------
                      Includes
------------------------------------------------------------------------------*/
#include "Stm_Version.h"

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief ModuleName header major version
 */
#define StmClassic_MAJOR_VERSION        (5u)

/**
 * \brief ModuleName header minor version
 */
#define StmClassic_MINOR_VERSION        (2u)

/**
 * \brief ModuleName header patch version
 */
#define StmClassic_PATCH_VERSION        (0u)

/* PRQA S 3453 2 */
#define StmClassic_CHECK_VERSION(major,minor,patch) \
 (((major) == StmClassic_MAJOR_VERSION) && ((minor) ==StmClassic_MINOR_VERSION) && ((patch) == StmClassic_PATCH_VERSION))

/* Version check macro for generic part */
/* PRQA S 3453 2 */
#define StmGeneric_CHECK_VERSION(major,minor) \
 (((major) == Stm_MAJOR_VERSION) && ((minor) == Stm_MINOR_VERSION))

/* check version of generic part */
#if (!StmGeneric_CHECK_VERSION(5,2))
   #error "Version of Stm classic adapter is incompatible to the generic module version!"
#endif

#endif /* STMCLASSIC_VERSION_H */
