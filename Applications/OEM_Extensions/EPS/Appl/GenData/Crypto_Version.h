/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       Crypto Version Information
*
*  This file is a generated version header file
*  for usage in the BMW system function.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2015 - 2017
*
*  \version     5.2.0
*
*  \remarks     ---
*
*/
/*----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:14:56.021712
*
------------------------------------------------------------------------------*/

#ifndef CRYPTO_VERSION_H
#define CRYPTO_VERSION_H

/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Crypto header major version
 */
#define Crypto_MAJOR_VERSION        (5u)

/**
 * \brief Crypto header minor version
 */
#define Crypto_MINOR_VERSION        (2u)

/**
 * \brief Crypto header patch version
 */
#define Crypto_PATCH_VERSION        (0u)


/* PRQA S 3453 2 */ /* Macro used for precompile version check */
#define Crypto_CHECK_VERSION(major,minor,patch) \
 (((major) == Crypto_MAJOR_VERSION) && ((minor) == Crypto_MINOR_VERSION) && ((patch) == Crypto_PATCH_VERSION))


#endif /* CRYPTO_VERSION_H */

/*--- End of file ------------------------------------------------------------*/
