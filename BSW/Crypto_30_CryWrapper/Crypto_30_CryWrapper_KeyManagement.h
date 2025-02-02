/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                                All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*      \file  Crypto_30_CryWrapper_KeyManagement.h
 *      \brief  MICROSAR Crypto Driver (Crypto)
 *
 *      \details  Internal header file for service key management function prototypes
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *********************************************************************************************************************/

#ifndef _CRYPTO_30_CRYWRAPPER_KEYMANAGEMENT_H_
# define _CRYPTO_30_CRYWRAPPER_KEYMANAGEMENT_H_
# include "Csm_Types.h"
# include "Crypto_30_CryWrapper_Cfg.h"

/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRYPTO_30_CRYWRAPPER_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Local_KeyElementSearch()
 *********************************************************************************************************************/
/*! \brief         Searches the key elementIndex of the given keyElementId in the given cryptoKeyId.
 *  \details       -
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be set.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be set.
 *  \param[out]    elementIndex            Holds the pointer to the found key element index. If the request failed
 *                                         the return value is Crypto_30_CryWrapper_GetSizeOfKeyElements().
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementSearch(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(Crypto_30_CryWrapper_KeyElementsIterType, AUTOMATIC, AUTOMATIC) elementIndex);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyCopy()
 *********************************************************************************************************************/
/*! \brief         Copy the key.
 *  \details       Copies a key with all its elements to another key in the same crypto driver.
 *  \param[in]     cryptoKeyId                  Holds the identifier of the key whose key element shall be the source
 *                                              element.
 *  \param[in]     targetCryptoKeyId            Holds the identifier of the key whose key element shall be the destination
 *                                              element.
 *  \return        E_OK                         Request successful.
 *                 E_NOT_OK                     Request failed.
 *                 CRYPTO_E_BUSY                Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_READ_FAIL       Request failed, read access was denied.
 *                 CRYPTO_E_KEY_WRITE_FAIL      Request failed, write access was denied.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE   Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH   Request failed, the key element sizes are not compatible.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131140
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyCopy(
  uint32 cryptoKeyId,
  uint32 targetCryptoKeyId);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyElementCopy()
 *********************************************************************************************************************/
/*! \brief         Copy key element.
 *  \details       Copies a key element to another key element in the same crypto driver.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be the source
 *                                         element.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be the source for the
 *                                         copy operation.
 *  \param[in]     targetCryptoKeyId       Holds the identifier of the key whose key element shall be the destination
 *                                         element.
 *  \param[in]     targetKeyElementId      Holds the identifier of the key element which shall be the destination for
 *                                         the copy operation.
 *  \return        E_OK                         Request successful.
 *                 E_NOT_OK                     Request failed.
 *                 CRYPTO_E_BUSY                Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_READ_FAIL       Request failed, read access was denied.
 *                 CRYPTO_E_KEY_WRITE_FAIL      Request failed, write access was denied.
 *                 CRYPTO_E_KEY_EXTRACT_DENIED  Request failed, not allowed to extract key material.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE   Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH   Request failed, the key element sizes are not compatible.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131141
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementCopy(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  uint32 targetCryptoKeyId,
  uint32 targetKeyElementId);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyElementIdsGet()
 *********************************************************************************************************************/
/*! \brief         Used to retrieve information which key elements are available in a given key.
 *  \details       -
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose available element ids shall be exported.
 *  \param[in]     keyElementIdsLengthPtr  Holds a pointer to the memory location in which the number of key element
 *                                         in the given key is stored. On calling this function, this parameter
 *                                         shall contain the size of the buffer provided by keyElementIdsPtr. When the
 *                                         request has finished, the actual number of key elements is stored.
 *  \param[out]    keyElementIdsPtr        Contains the pointer to the array where the ids of the key
 *                                         elements shall be stored.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_SMALL_BUFFER   Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131139
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementIdsGet(
  uint32 cryptoKeyId,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyElementIdsPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyElementIdsLengthPtr);

/* [SWS_Crypto_91004] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyElementSet()
 *********************************************************************************************************************/
/*! \brief         Sets a key element.
 *  \details       Sets the given key element bytes to the key identified by cryptoKeyId.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be set.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be set.
 *  \param[in]     keyPtr                  Holds the pointer to the key data which shall be set as key element.
 *  \param[in]     keyLength               Contains the length of the key element in bytes.
 *  \return        E_OK                        Request successful.
 *                 E_NOT_OK                    Request failed.
 *                 CRYPTO_E_BUSY               Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_WRITE_FAIL     Request failed, write access was denied.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE  Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH  Request failed, the key element size does not match size of provided
 *                                             data.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131144
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementSet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Local_KeyElementSet()
 *********************************************************************************************************************/
/*! \brief         Sets a key element. This Api is only for internal usage.
 *  \details       Sets the given key element bytes to the key identified by cryptoKeyId.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be set.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be set.
 *  \param[in]     keyPtr                  Holds the pointer to the key data which shall be set as key element.
 *  \param[in]     keyLength               Contains the length of the key element in bytes.
 *  \return        E_OK                        Request successful.
 *                 E_NOT_OK                    Request failed.
 *                 CRYPTO_E_BUSY               Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_WRITE_FAIL     Request failed, write access was denied.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE  Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH  Request failed, the key element size does not match size of provided
 *                                             data.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementSet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength);

/* [SWS_Crypto_91005] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyValidSet()
 *********************************************************************************************************************/
/*! \brief         Sets the key to valid.
 *  \details       Sets the key state of the key identified by cryptoKeyId to valid.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key elements shall be set to valid.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131143
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyValidSet(
  uint32 cryptoKeyId);

/* [SWS_Crypto_91006] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyElementGet()
 *********************************************************************************************************************/
/*! \brief         This interface shall be used to get a key element of the key identified by the cryptoKeyId and store
 *                 the key element in the memory location pointed by the result pointer.
 *  \details       -
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be set.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be set.
 *  \param[in]     resultPtr               Holds the pointer to the key data which shall be set as key element.
 *  \param[in]     resultLengthPtr         Contains the length of the key element in bytes.
 *  \return        E_OK                        Request successful.
 *                 E_NOT_OK                    Request failed.
 *                 CRYPTO_E_BUSY               Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_READ_FAIL      Request failed, read access was denied.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE  Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH  Request failed, the provided buffer is too small to store the result.
 *                 CRYPTO_E_SMALL_BUFFER       Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131142
 *********************************************************************************************************************/
FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementGet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_Local_KeyElementGet()
*********************************************************************************************************************/
/*! \brief         This interface shall be used internal to get a key element of the key identified by the cryptoKeyId and store
 *                 the key element in the memory location pointed by the result pointer.
 *  \details       -
 *  \param[in]     cryptoKeyId             Holds the identifier of the key whose key element shall be set.
 *  \param[in]     keyElementId            Holds the identifier of the key element which shall be set.
 *  \param[in]     resultPtr               Holds the pointer to the key data which shall be set as key element.
 *  \param[in]     resultLengthPtr         Contains the length of the key element in bytes.
 *  \return        E_OK                        Request successful.
 *                 E_NOT_OK                    Request failed.
 *                 CRYPTO_E_BUSY               Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_KEY_READ_FAIL      Request failed, read access was denied.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE  Request failed, the key is not available.
 *                 CRYPTO_E_KEY_SIZE_MISMATCH  Request failed, the provided buffer is too small to store the result.
 *                 CRYPTO_E_KEY_NOT_AVAILABLE  Request failed, the key is not available.
 *                 CRYPTO_E_SMALL_BUFFER       Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_Local_KeyElementGet(
  uint32 cryptoKeyId,
  uint32 keyElementId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultPtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) resultLengthPtr);

/* [SWS_Crypto_91013] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_RandomSeed()
 *********************************************************************************************************************/
/*! \brief         Initializes the seed.
 *  \details       This function generates the internal seed state using the provided entropy source.
 *                 Furthermore, this function can be used to update the seed state with new entropy
 *  \param[in]     cryptoKeyId             Holds the identifier of the key for which a new seed shall be generated.
 *  \param[in]     entropyPtr              Holds a pointer to the memory location which contains the
 *                                         data to feed the entropy.
 *  \param[in]     entropyLength           Contains the length of the entropy in bytes.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_SMALL_BUFFER   Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131137
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_RandomSeed(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) entropyPtr,
  uint32 entropyLength);

/* [SWS_Crypto_91007] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyGenerate()
 *********************************************************************************************************************/
/*! \brief         Generates a key.
 *  \details       This function shall dispatch the key generate function to the configured crypto driver object.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key which is to be updated with the generated
 *                                         value.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-131138
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyGenerate(
  uint32 cryptoKeyId);

/* [SWS_Crypto_91008] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyDerive()
 *********************************************************************************************************************/
/*! \brief         Derives a key.
 *  \details       Derives a new key by using the key elements in the given key identified by the cryptoKeyId.
 *                 The given key must contain the key elements for the password (CRYPTO_KE_KEYDERIVATION_PASSWORD),
 *                 salt (CRYPTO_KE_KEYDERIVATION_SALT), algorithm (CRYPTO_KE_KEYDERIVATION_ALGORITHM) and the custom
 *                 element label(CRYPTO_KE_CUSTOM_KEYDERIVATION_LABEL). The number of iterations is automatically
 *                 determined by the needed key length. The derived key is stored in the key element with id 1 of the 
 *                 given key identified by targetCryptoKeyId.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key which is used for key derivation.
 *  \param[in]     targetCryptoKeyId       Holds the identifier of the key which is used to store the derived key.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-132407
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyDerive(
  uint32 cryptoKeyId,
  uint32 targetCryptoKeyId);

/* [SWS_Crypto_91009] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyExchangeCalcPubVal()
 *********************************************************************************************************************/
/*! \brief         Calculates the public value.
 *  \details       Calculates the public value for the key exchange and stores the public key in the
 *                 memory location pointed by the public value pointer.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key which shall be used for the key exchange
 *                                         protocol.
 *  \param[out]    publicValuePtr          Contains the pointer to the data where the public value shall be stored.
 *  \param[in,out] publicValueLengthPtr    Holds a pointer to the memory location in which the public value length
 *                                         information is stored. On calling this function, this parameter shall
 *                                         contain the size of the buffer provided by publicValuePtr. When the request
 *                                         has finished, the actual length of the returned value shall be stored.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_SMALL_BUFFER   Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-132409
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyExchangeCalcPubVal(
  uint32 cryptoKeyId,
  P2VAR(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValuePtr,
  P2VAR(uint32, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) publicValueLengthPtr);

/* [SWS_Crypto_91010] */
/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyExchangeCalcSecret()
 *********************************************************************************************************************/
/*! \brief         Calculates the secret.
 *  \details       Calculates the shared secret key for the key exchange with the key material of the key identified
 *                 by the cryptoKeyId and the partner public key. The shared secret key is stored
 *                 as a key element in the same key.
 *  \param[in]     cryptoKeyId              Holds the identifier of the key which shall be used for the key exchange
 *                                          protocol.
 *  \param[in]     partnerPublicValuePtr    Holds the pointer to the memory location which contains the partners
 *                                          public value.
 *  \param[in]     partnerPublicValueLength Contains the length of the partners public value in bytes.
 *  \return        E_OK                     Request successful.
 *                 E_NOT_OK                 Request failed.
 *                 CRYPTO_E_BUSY            Request failed, Crypto Driver Object is busy.
 *                 CRYPTO_E_SMALL_BUFFER    Request failed, the provided buffer is too small to store the result.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-132408
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyExchangeCalcSecret(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) partnerPublicValuePtr,
  uint32 partnerPublicValueLength);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_CertificateParse()
 *********************************************************************************************************************/
/*! \brief         Parses stored certificate.
 *  \details       Parses the certificate data stored in the key element CRYPTO_KE_CERT_DATA and fills the key elements
 *                 CRYPTO_KE_CERT_SIGNEDDATA, CRYPTO_KE_CERT_PARSEDPUBLICKEY and CRYPTO_KE_CERT_SIGNATURE
 *  \param[in]     cryptoKeyId             Holds the identifier of the key slot in which the certificate has been
 *                                         stored.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-132410
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CertificateParse(
  uint32 cryptoKeyId);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_CertificateVerify()
 *********************************************************************************************************************/
/*! \brief         Verifies the certificate.
 *  \details       Verifies the certificate stored in the key referenced by verifyCryptoKeyId with the
 *                 certificate stored in the key referenced by cryptoKeyId.
 *  \param[in]     cryptoKeyId             Holds the identifier of the key which shall be used to validate the
 *                                         certificate.
 *  \param[in]     verifyCryptoKeyId       Holds the identifier of the key containing the certificate, which shall be
 *                                         verified.
 *  \param[out]    verifyPtr               Holds a pointer to the memory location which will contain the result of the
 *                                         certificate verification.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed.
 *                 CRYPTO_E_BUSY           Request failed, Crypto Driver Object is busy.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \trace         CREQ-132411
 *********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_CertificateVerify(
  uint32 cryptoKeyId,
  uint32 verifyCryptoKeyId,
  P2VAR(Crypto_VerifyResultType, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) verifyPtr);


/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_KeyElementSetInternal()
 *********************************************************************************************************************/
/*! \brief         Copies data to key storage.
 *  \details       Copies data of the keyPtr to the internal key storage identified by the elementIndex.
 *  \param[in]     elementIndex            Holds the identifier of the keyElement in the keyStorage.
 *  \param[in]     keyPtr                  Holds the data which shall be copied to the key storage
 *  \param[in]     keyLength               Specifies the number of bytes which shall be copied.
 *  \pre           elementIndex has to be a valid identifier to an keyElement in the keyStorage since it is not checked
 *                 here.
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
*********************************************************************************************************************/
extern FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_KeyElementSetInternal(
  uint32 elementIndex,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) keyPtr,
  uint32 keyLength);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_StoreProof()
 *********************************************************************************************************************/
/*! \brief         Stores the proof of the SHE key update to the corresponding elements if they are available.
 *  \details       There is no error returned if no proof element is available.
 *  \param[in]     cryptoKeyId             Id of the key which will hold the proof if a matching key element is available.
 *  \param[in]     proofPtr                Pointer to a memory location containing the proof.
 *  \param[in]     proofLength             Length of the proof which shall be stored.
 *  \return        E_OK                    Request successful.
 *                 E_NOT_OK                Request failed. There was an error other than CRYPTO_E_KEY_NOT_AVAILABLE
 *                                         during setting the proof key element.
 *  \pre           -
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *  \note          Due to the fact that there are two different ids for the proof element of cipher and mac,
 *                 the function will try to store the proof to both of them.
*********************************************************************************************************************/
extern FUNC(Std_ReturnType, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_StoreProof(
  uint32 cryptoKeyId,
  P2CONST(uint8, AUTOMATIC, CRYPTO_30_CRYWRAPPER_APPL_VAR) proofPtr,
  uint32 proofLength);

/**********************************************************************************************************************
 *  Crypto_30_CryWrapper_SetKeyElementWrittenLength()
 *********************************************************************************************************************/
/*! \brief         Sets the written length of a key element.
 *  \details       -
 *  \param[in]     keyElementId            Holds the identifier of the key element whose written length shall be set.
 *  \param[in]     keyElementLength        Written length of the key element
 *  \pre           keyElementId has to hold a valid identifier of the key element
 *  \context       TASK
 *  \reentrant     TRUE
 *  \synchronous   TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRYPTO_30_CRYWRAPPER_CODE) Crypto_30_CryWrapper_SetKeyElementWrittenLength(
  uint32 keyElementIndex,
  uint32 keyElementLength);

# define CRYPTO_30_CRYWRAPPER_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


#endif /* #ifndef _CRYPTO_30_CRYWRAPPER_KEYMANAGEMENT_H_ */
