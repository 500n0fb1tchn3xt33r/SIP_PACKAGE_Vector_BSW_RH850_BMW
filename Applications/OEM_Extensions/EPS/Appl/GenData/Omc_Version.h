/*----------------------------------------------------------------------------*/
/**
*  \file        Omc_Version.h
*
*  \brief       Omc Version
*
*  Version Check for Omc module
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user: no
*
*  \copyright   BMW AG 2015 - 2016
*
*  \version     5.1.0
*
*  \remarks     File is generated with PAGe
*
*/
/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:56.206730
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/
/*
 * Violation of MISRA-C:2004 Rule 19.7:
 * Reason: this macro is only used in preprocessor directive,
 * no function possible. See PRQA 3453
 */


#ifndef OMC_VERSION_H
#define OMC_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif
/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief ModuleName header major version
 */
#define Omc_MAJOR_VERSION        (5u)

/**
 * \brief ModuleName header minor version
 */
#define Omc_MINOR_VERSION        (1u)

/**
 * \brief ModuleName header patch version
 */
#define Omc_PATCH_VERSION        (0u)

/* PRQA S 3453 2 */
#define Omc_CHECK_VERSION(major,minor,patch) \
 (((major) == Omc_MAJOR_VERSION) && ((minor) == Omc_MINOR_VERSION) && ((patch) == Omc_PATCH_VERSION))

#ifdef __cplusplus
}
#endif

#endif /* OMC_VERSION_H */

/*--- End of file ------------------------------------------------------------*/
