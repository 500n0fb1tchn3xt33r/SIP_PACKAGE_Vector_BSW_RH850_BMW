/*
*  \brief       Generated crypto keys
*
*  These crypto keys are generated by BMW backend system ASBC/SWL-SEC.
*  New format for SP2021 keys (supported by BAC 4, Release 3 and aBAC, Release 1).
*
*  \project     BMW Platform Software
*
*  \copyright   BMW Group 2017
*
*  \version     V02.00
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY! Otherwise no authentication and swe
*  signature check will be possible with PSdZ.
*
*  GENERATOR       :    ASBC / SWL-SEC
*
*  GENERATION TIME :    22.11.2017 08:18:43
*
*  REQUESTER       :    Q389936
*
*  SGBM-Nr         :    01020318
*
------------------------------------------------------------------------------*/

#ifndef CRYPTO_KEYS_H
#define CRYPTO_KEYS_H

#define CRYPTO_SGBM_ID_BTLD 0x01020318

/*------------------------------------------------------------------------------
 Authentication keys for level 3 (test key!)
------------------------------------------------------------------------------*/

/* With digest SHA-384 */
#define CRYPTO_AUTH_KEY_LEVEL_3_DIGEST_SHA_384

/* Key length in bits: 2048 */
#define CRYPTO_AUTH_KEY_LEVEL_3_SIZE 2048U

/* Modulus */
#define CRYPTO_AUTH_KEY_LEVEL_3_M                      \
   {                                                   \
      (uint32)0x00000040UL,                            \
      (uint32)0x35D821D7UL, (uint32)0x348B5739UL,      \
      (uint32)0xBD419E28UL, (uint32)0x8522F21BUL,      \
      (uint32)0xAF8A58BBUL, (uint32)0x20BDAA10UL,      \
      (uint32)0xDC586101UL, (uint32)0x8EF4100DUL,      \
      (uint32)0xE6BBC280UL, (uint32)0x378FC32DUL,      \
      (uint32)0xFFB781C2UL, (uint32)0x2B2B752CUL,      \
      (uint32)0xCAB7CABCUL, (uint32)0x4051D92AUL,      \
      (uint32)0x74641D62UL, (uint32)0xD1BA8A55UL,      \
      (uint32)0xFC48F0DFUL, (uint32)0x691FCBD3UL,      \
      (uint32)0x16C52BDAUL, (uint32)0x34C3FDEFUL,      \
      (uint32)0x96546F55UL, (uint32)0xB4006BA9UL,      \
      (uint32)0xB43C7747UL, (uint32)0x211C3E55UL,      \
      (uint32)0x512E533EUL, (uint32)0x28D0BE31UL,      \
      (uint32)0x1B3E321BUL, (uint32)0x6F796374UL,      \
      (uint32)0xB744B3B8UL, (uint32)0xFE7BBB0CUL,      \
      (uint32)0xDA31750CUL, (uint32)0x8BB3E8FEUL,      \
      (uint32)0xB6CB8C2DUL, (uint32)0x83B171A1UL,      \
      (uint32)0x6DC2EE08UL, (uint32)0xCAB3C6CDUL,      \
      (uint32)0x5B899AC8UL, (uint32)0x99892006UL,      \
      (uint32)0x9352E7C5UL, (uint32)0x9EE3E88DUL,      \
      (uint32)0x21A547E1UL, (uint32)0x863A4760UL,      \
      (uint32)0x79A91DA7UL, (uint32)0xEF7C4B44UL,      \
      (uint32)0x5EDF1C59UL, (uint32)0x57C65241UL,      \
      (uint32)0x65978F21UL, (uint32)0x9453628BUL,      \
      (uint32)0x44BF63C4UL, (uint32)0x3A3DA8DCUL,      \
      (uint32)0xB971AA82UL, (uint32)0xF22F3C87UL,      \
      (uint32)0x84739E47UL, (uint32)0x0A6BB37CUL,      \
      (uint32)0x34F2DB72UL, (uint32)0x14235E0EUL,      \
      (uint32)0xB21EE193UL, (uint32)0x8BD85834UL,      \
      (uint32)0x25965BE2UL, (uint32)0x2C28AE7EUL,      \
      (uint32)0xD5CFE12CUL, (uint32)0xA0547BD6UL,      \
      (uint32)0x6AAC24D2UL, (uint32)0xAA0543EFUL       \
   }

/* Barret value */
#define CRYPTO_AUTH_KEY_LEVEL_3_BV                     \
   {                                                   \
      (uint32)0x00000041UL,                            \
      (uint32)0x218B3874UL, (uint32)0xF3D41B52UL,      \
      (uint32)0xDFFACF84UL, (uint32)0x57FBA0ECUL,      \
      (uint32)0xD8173FBDUL, (uint32)0x3B3E7B70UL,      \
      (uint32)0xD41F64FCUL, (uint32)0x16428A5DUL,      \
      (uint32)0x378BD7DDUL, (uint32)0x1A603ED4UL,      \
      (uint32)0xE06CB871UL, (uint32)0xC0063E9EUL,      \
      (uint32)0x4FA411C0UL, (uint32)0xCA92FB11UL,      \
      (uint32)0xA3D7DEA3UL, (uint32)0x40964ACDUL,      \
      (uint32)0xDAA936A7UL, (uint32)0x900020B4UL,      \
      (uint32)0xCD633D8CUL, (uint32)0x0632AAAFUL,      \
      (uint32)0x0164BD6CUL, (uint32)0x436F2E0BUL,      \
      (uint32)0xE3306C77UL, (uint32)0x4A8F05B3UL,      \
      (uint32)0x86DE9E23UL, (uint32)0x5CDD5EC5UL,      \
      (uint32)0x942611C1UL, (uint32)0xB69FAC7DUL,      \
      (uint32)0xC7EBCA3EUL, (uint32)0x9C6167AEUL,      \
      (uint32)0x62272F94UL, (uint32)0xD8C6E8BAUL,      \
      (uint32)0x7C9E0AC0UL, (uint32)0xF2C98F91UL,      \
      (uint32)0x4EB3FC3AUL, (uint32)0x7BE370BBUL,      \
      (uint32)0x33B73F0DUL, (uint32)0xAFEC9FF3UL,      \
      (uint32)0xDD85EF28UL, (uint32)0x7E5CC6FBUL,      \
      (uint32)0x88A8F571UL, (uint32)0xF336A51DUL,      \
      (uint32)0xF2F1C019UL, (uint32)0xD5637EDBUL,      \
      (uint32)0x4F2200A2UL, (uint32)0x53F6DC48UL,      \
      (uint32)0x669866FAUL, (uint32)0xA59E766FUL,      \
      (uint32)0xF7C9FA98UL, (uint32)0x820FACB1UL,      \
      (uint32)0x9FB2F559UL, (uint32)0x2D23916EUL,      \
      (uint32)0x0A7E34A0UL, (uint32)0xA6C692BDUL,      \
      (uint32)0xC75BE4ECUL, (uint32)0x77F85D19UL,      \
      (uint32)0x31143FF1UL, (uint32)0x28A38F93UL,      \
      (uint32)0x9D4E41D0UL, (uint32)0xBD0D6993UL,      \
      (uint32)0xB51B7C51UL, (uint32)0xCAFD68E0UL,      \
      (uint32)0x0B933D45UL, (uint32)0x81759130UL,      \
      (uint32)0x00000001UL                             \
   }

/* Public exponent */
#define CRYPTO_AUTH_KEY_LEVEL_3_PE                     \
   {                                                   \
      (uint32)0x00000001UL,                            \
      (uint32)0x00010001UL                             \
   }

/*------------------------------------------------------------------------------
 Authentication keys for level 5 (test key!)
------------------------------------------------------------------------------*/

/* With digest SHA-384 */
#define CRYPTO_AUTH_KEY_LEVEL_5_DIGEST_SHA_384

/* Key length in bits: 2048 */
#define CRYPTO_AUTH_KEY_LEVEL_5_SIZE 2048U

/* Modulus */
#define CRYPTO_AUTH_KEY_LEVEL_5_M                      \
   {                                                   \
      (uint32)0x00000040UL,                            \
      (uint32)0x458B0817UL, (uint32)0xFE106EFEUL,      \
      (uint32)0x0BD04DDBUL, (uint32)0x3BE0824FUL,      \
      (uint32)0x40C77BBBUL, (uint32)0xE17311AAUL,      \
      (uint32)0xC38483E1UL, (uint32)0xCEA63244UL,      \
      (uint32)0xB25F8031UL, (uint32)0xFE01B58EUL,      \
      (uint32)0x96205C7EUL, (uint32)0x7A3AAAAEUL,      \
      (uint32)0xE741F0F5UL, (uint32)0x4A27B3EDUL,      \
      (uint32)0x6AD90C93UL, (uint32)0x8ACE97D7UL,      \
      (uint32)0xB916F7FAUL, (uint32)0x228974E9UL,      \
      (uint32)0x2DA7CCF4UL, (uint32)0x0DE8A12EUL,      \
      (uint32)0x4D6167D0UL, (uint32)0x6B4EA82BUL,      \
      (uint32)0x368A936FUL, (uint32)0x4C07C62FUL,      \
      (uint32)0xDA618F9FUL, (uint32)0x957CE327UL,      \
      (uint32)0xB2E88FA5UL, (uint32)0x19E2D5F1UL,      \
      (uint32)0xFFD29210UL, (uint32)0x2F7E4753UL,      \
      (uint32)0x6E947B41UL, (uint32)0xE50D284AUL,      \
      (uint32)0xC28F7D93UL, (uint32)0xBC96E7FEUL,      \
      (uint32)0x38E4F0A2UL, (uint32)0x7F33BBE2UL,      \
      (uint32)0x46696A3FUL, (uint32)0x7F059AE0UL,      \
      (uint32)0xC8BDB4EBUL, (uint32)0x5D515A10UL,      \
      (uint32)0x41F150BEUL, (uint32)0x4EE7189DUL,      \
      (uint32)0x3A50DE53UL, (uint32)0xC9967A0BUL,      \
      (uint32)0xD7F5BCF3UL, (uint32)0x84264312UL,      \
      (uint32)0x9D9D3FA5UL, (uint32)0x508475DDUL,      \
      (uint32)0x5F051B2EUL, (uint32)0x838A883DUL,      \
      (uint32)0x0FF2D799UL, (uint32)0x5335B1EDUL,      \
      (uint32)0x999D5E5EUL, (uint32)0xE7A60AFDUL,      \
      (uint32)0x506E1D09UL, (uint32)0xA2F806A9UL,      \
      (uint32)0xE30A2815UL, (uint32)0xCEBA53C8UL,      \
      (uint32)0x34A6865EUL, (uint32)0xB05ED6BBUL,      \
      (uint32)0x8D5DD6CAUL, (uint32)0x079B9251UL,      \
      (uint32)0xE92893D8UL, (uint32)0xE0893BA7UL       \
   }

/* Barret value */
#define CRYPTO_AUTH_KEY_LEVEL_5_BV                     \
   {                                                   \
      (uint32)0x00000041UL,                            \
      (uint32)0x9B6DB49FUL, (uint32)0xE046EE9CUL,      \
      (uint32)0x788001C7UL, (uint32)0x399E4755UL,      \
      (uint32)0xB2F53689UL, (uint32)0x9B5FDBABUL,      \
      (uint32)0xE27CDCFEUL, (uint32)0xB473FEE2UL,      \
      (uint32)0x76F3E6C8UL, (uint32)0xF16B237DUL,      \
      (uint32)0x7D6923E0UL, (uint32)0x69094319UL,      \
      (uint32)0x28C97235UL, (uint32)0x8186703EUL,      \
      (uint32)0x33BB0C2BUL, (uint32)0xF86CB53CUL,      \
      (uint32)0xAF0DBE16UL, (uint32)0xC2B1B3EDUL,      \
      (uint32)0x885622F8UL, (uint32)0x639614B5UL,      \
      (uint32)0xF22EAEE3UL, (uint32)0xE1501BF8UL,      \
      (uint32)0xCF182529UL, (uint32)0xD052B539UL,      \
      (uint32)0x39DD49AEUL, (uint32)0x99283C1AUL,      \
      (uint32)0x0A488A5CUL, (uint32)0x83329C49UL,      \
      (uint32)0x85591B55UL, (uint32)0x43154E94UL,      \
      (uint32)0xF41A58B8UL, (uint32)0x8F6FBF8BUL,      \
      (uint32)0x030D596BUL, (uint32)0x22B93506UL,      \
      (uint32)0x378573C5UL, (uint32)0x32D09C59UL,      \
      (uint32)0xF73A5713UL, (uint32)0x299AA835UL,      \
      (uint32)0xA74A7241UL, (uint32)0x50417843UL,      \
      (uint32)0x00734923UL, (uint32)0x39968A8CUL,      \
      (uint32)0x2B3FF59DUL, (uint32)0x8754D0AAUL,      \
      (uint32)0xC82346F1UL, (uint32)0x54581C23UL,      \
      (uint32)0x5B5B3A6DUL, (uint32)0x06EB5074UL,      \
      (uint32)0x0A1C77EFUL, (uint32)0xFCC0220BUL,      \
      (uint32)0x9D6E4BFBUL, (uint32)0x0A295F20UL,      \
      (uint32)0x1220E2B7UL, (uint32)0x9E53DDE1UL,      \
      (uint32)0x6EF5B6D8UL, (uint32)0xF5AF04F5UL,      \
      (uint32)0x05C95A86UL, (uint32)0x83ABE95CUL,      \
      (uint32)0x1A911E66UL, (uint32)0x65A49810UL,      \
      (uint32)0x254C9237UL, (uint32)0xF4D27A08UL,      \
      (uint32)0xF81E464BUL, (uint32)0x23DF7872UL,      \
      (uint32)0x00000001UL                             \
   }

/* Public exponent */
#define CRYPTO_AUTH_KEY_LEVEL_5_PE                     \
   {                                                   \
      (uint32)0x00000001UL,                            \
      (uint32)0x00010001UL                             \
   }

/*------------------------------------------------------------------------------
 SWE signature key (test key!)
------------------------------------------------------------------------------*/

/* With digest SHA-512 */
#define CRYPTO_SIG_KEY_DIGEST_SHA_512

/* Key length in bits: 4096 */
#define CRYPTO_SIG_KEY_SIZE 4096U

/* Modulus */
#define CRYPTO_SIG_KEY_M                               \
   {                                                   \
      (uint32)0x00000080UL,                            \
      (uint32)0x07A53C71UL, (uint32)0x779D726AUL,      \
      (uint32)0xBAD2191EUL, (uint32)0x01034476UL,      \
      (uint32)0x10626371UL, (uint32)0x63218F1DUL,      \
      (uint32)0x25923F68UL, (uint32)0x122BE401UL,      \
      (uint32)0xB9964EFBUL, (uint32)0xA009E523UL,      \
      (uint32)0xCDB76E2CUL, (uint32)0x9082FDA7UL,      \
      (uint32)0x61A3940DUL, (uint32)0xB68BA8F1UL,      \
      (uint32)0xA8639269UL, (uint32)0x61A6A601UL,      \
      (uint32)0x79F2A9B2UL, (uint32)0x5ACB6BB7UL,      \
      (uint32)0xF0F2F424UL, (uint32)0x832C7C8EUL,      \
      (uint32)0x2C32C2AAUL, (uint32)0x1C6DD6BFUL,      \
      (uint32)0x3205F99DUL, (uint32)0x7EE9C0AFUL,      \
      (uint32)0x0C723452UL, (uint32)0xA96907B9UL,      \
      (uint32)0x6E0A70C1UL, (uint32)0x6B00E44EUL,      \
      (uint32)0x1E12A1DEUL, (uint32)0x320B9226UL,      \
      (uint32)0xD6D69C13UL, (uint32)0x92BF691EUL,      \
      (uint32)0xD57AE89BUL, (uint32)0x58137DC4UL,      \
      (uint32)0x32173029UL, (uint32)0x380E9020UL,      \
      (uint32)0xC55058FBUL, (uint32)0xB872EAEAUL,      \
      (uint32)0xC568364BUL, (uint32)0x79B31D6CUL,      \
      (uint32)0x63922787UL, (uint32)0x44CD9620UL,      \
      (uint32)0x826ECC6CUL, (uint32)0xB8F36E3CUL,      \
      (uint32)0xA7A83268UL, (uint32)0x1E18A00EUL,      \
      (uint32)0xD7437298UL, (uint32)0x4657F52FUL,      \
      (uint32)0x3B0FA634UL, (uint32)0x9112C0E7UL,      \
      (uint32)0x332B82F4UL, (uint32)0xFE904F99UL,      \
      (uint32)0x547E87D3UL, (uint32)0xA0E10595UL,      \
      (uint32)0x24B6DCC4UL, (uint32)0x957F24FCUL,      \
      (uint32)0xC24FD293UL, (uint32)0xEC647622UL,      \
      (uint32)0x597A6FE1UL, (uint32)0xECF9EEA9UL,      \
      (uint32)0x96B44E8AUL, (uint32)0x63613E54UL,      \
      (uint32)0x03108206UL, (uint32)0x7E5BBAD0UL,      \
      (uint32)0x42746154UL, (uint32)0x40454045UL,      \
      (uint32)0xDB549120UL, (uint32)0xBEA56025UL,      \
      (uint32)0xEF54718CUL, (uint32)0x78D576FAUL,      \
      (uint32)0x4C64CCBBUL, (uint32)0x2A509C39UL,      \
      (uint32)0x7748311AUL, (uint32)0x1ECC7F35UL,      \
      (uint32)0x2DE1F83BUL, (uint32)0xEDAAA194UL,      \
      (uint32)0xE63C02EBUL, (uint32)0x2664E76FUL,      \
      (uint32)0xCECC29D2UL, (uint32)0xBC72B8C2UL,      \
      (uint32)0x3D11D959UL, (uint32)0x91B97665UL,      \
      (uint32)0x35E87DA7UL, (uint32)0xAEEC0B33UL,      \
      (uint32)0x1925171AUL, (uint32)0x478EE325UL,      \
      (uint32)0xD851910CUL, (uint32)0x4E31F415UL,      \
      (uint32)0xF45BB43FUL, (uint32)0x3B012C4BUL,      \
      (uint32)0x361BB20DUL, (uint32)0xED4F0BDCUL,      \
      (uint32)0x1B1B24D4UL, (uint32)0x1FBF707DUL,      \
      (uint32)0x7D9A788BUL, (uint32)0x50688444UL,      \
      (uint32)0x259E8D40UL, (uint32)0xECE21C6BUL,      \
      (uint32)0x0BF27CF6UL, (uint32)0x2FB6FF0FUL,      \
      (uint32)0xDDF9FA88UL, (uint32)0x207082F0UL,      \
      (uint32)0x0BEB4E7DUL, (uint32)0x6C8DBFAEUL,      \
      (uint32)0xEF8FFE70UL, (uint32)0x743E6044UL,      \
      (uint32)0x3B24F64FUL, (uint32)0x27B56CFFUL,      \
      (uint32)0x54563DCAUL, (uint32)0x91094DD2UL,      \
      (uint32)0x291EA583UL, (uint32)0x7EE8015FUL,      \
      (uint32)0x04C0DA5FUL, (uint32)0xC4120F54UL,      \
      (uint32)0xD1C2FB6FUL, (uint32)0x1667FE5CUL,      \
      (uint32)0x9D802600UL, (uint32)0xA349B61DUL,      \
      (uint32)0xF5265047UL, (uint32)0x7F7C281DUL,      \
      (uint32)0xB2C51F80UL, (uint32)0xF7AC112EUL,      \
      (uint32)0x01748C39UL, (uint32)0x2CBB6BF5UL,      \
      (uint32)0x24493C0AUL, (uint32)0x8D2FBEAFUL,      \
      (uint32)0x015250B0UL, (uint32)0x9585BD9FUL       \
   }

/* Barret value */
#define CRYPTO_SIG_KEY_BV                              \
   {                                                   \
      (uint32)0x00000081UL,                            \
      (uint32)0x897FF92EUL, (uint32)0xFC766ED8UL,      \
      (uint32)0x5A3D81AFUL, (uint32)0xAB593D22UL,      \
      (uint32)0xD920F711UL, (uint32)0xC76D93B9UL,      \
      (uint32)0x56B2CEBCUL, (uint32)0x506DDFC3UL,      \
      (uint32)0x1930E26FUL, (uint32)0x384A8436UL,      \
      (uint32)0x7017298BUL, (uint32)0x9A95EEBCUL,      \
      (uint32)0x27E7975FUL, (uint32)0xE8019979UL,      \
      (uint32)0x1F8F92BCUL, (uint32)0xA4A9768BUL,      \
      (uint32)0x63AEC833UL, (uint32)0x119D65A0UL,      \
      (uint32)0x81CA6A14UL, (uint32)0x100D0796UL,      \
      (uint32)0x2A1C39CEUL, (uint32)0x60EE7A63UL,      \
      (uint32)0x873D6E26UL, (uint32)0xB4BBB232UL,      \
      (uint32)0x963E5F90UL, (uint32)0xB32F0F85UL,      \
      (uint32)0x2345FCBCUL, (uint32)0xC3C7001EUL,      \
      (uint32)0x86065CFCUL, (uint32)0x0DA62278UL,      \
      (uint32)0x41E1B291UL, (uint32)0xD56E8FBFUL,      \
      (uint32)0xCABFEBCCUL, (uint32)0x9ECAC0F8UL,      \
      (uint32)0xF7A7CBB3UL, (uint32)0xCD3B08DEUL,      \
      (uint32)0xEBB6C0FCUL, (uint32)0x791EC3FCUL,      \
      (uint32)0xC8164EE0UL, (uint32)0xE9220893UL,      \
      (uint32)0xBA6C1C1FUL, (uint32)0x982A2552UL,      \
      (uint32)0x37805337UL, (uint32)0x7C4B18B5UL,      \
      (uint32)0x7DC9632AUL, (uint32)0x70FE7F8AUL,      \
      (uint32)0xEB163CA9UL, (uint32)0x70812029UL,      \
      (uint32)0x2D314B72UL, (uint32)0xA4833753UL,      \
      (uint32)0xD0884D07UL, (uint32)0x2D0FC12DUL,      \
      (uint32)0x09C0F053UL, (uint32)0x2477DE3CUL,      \
      (uint32)0x82CDCF07UL, (uint32)0xA49BABBDUL,      \
      (uint32)0xCFA62338UL, (uint32)0xAB4C1599UL,      \
      (uint32)0x6BF049A4UL, (uint32)0xD314CFECUL,      \
      (uint32)0x4917D4B9UL, (uint32)0x62380E51UL,      \
      (uint32)0x1FCBF6A7UL, (uint32)0x0004E412UL,      \
      (uint32)0xBBA522F2UL, (uint32)0x1ED42B06UL,      \
      (uint32)0x7EAF74F5UL, (uint32)0xA9A48C04UL,      \
      (uint32)0x4099D89FUL, (uint32)0x721AB717UL,      \
      (uint32)0x17963E1FUL, (uint32)0x81D451B7UL,      \
      (uint32)0x984F86D2UL, (uint32)0x765CC56FUL,      \
      (uint32)0x4487B97FUL, (uint32)0xFB3BA0AAUL,      \
      (uint32)0x162C842EUL, (uint32)0x5A261E21UL,      \
      (uint32)0xFA009F87UL, (uint32)0x3A3F31B2UL,      \
      (uint32)0x6CB588D8UL, (uint32)0x4A01B5D5UL,      \
      (uint32)0xE5A418B4UL, (uint32)0x1EA565A8UL,      \
      (uint32)0xF776C607UL, (uint32)0x3F4DD48AUL,      \
      (uint32)0x72D9034DUL, (uint32)0x3CFAE921UL,      \
      (uint32)0x66135F8CUL, (uint32)0x3AF9A15EUL,      \
      (uint32)0xB7FC2D4BUL, (uint32)0x14B08357UL,      \
      (uint32)0xCDC6EACFUL, (uint32)0xFB5750D2UL,      \
      (uint32)0xBE88E9D4UL, (uint32)0xE872E47CUL,      \
      (uint32)0xDDD95810UL, (uint32)0x5F230354UL,      \
      (uint32)0x078AC624UL, (uint32)0x34BB9BD4UL,      \
      (uint32)0x75AF2A7CUL, (uint32)0xF5512456UL,      \
      (uint32)0x3CF2DC43UL, (uint32)0x80C3A99CUL,      \
      (uint32)0xC51CC42BUL, (uint32)0x8E231285UL,      \
      (uint32)0xC6B47AA8UL, (uint32)0x7953236BUL,      \
      (uint32)0x837AB6A2UL, (uint32)0x00EE3FC0UL,      \
      (uint32)0xEDDF76F3UL, (uint32)0x5444D8B9UL,      \
      (uint32)0x4ED95D81UL, (uint32)0x407D6247UL,      \
      (uint32)0x43E9F59FUL, (uint32)0x2F652E32UL,      \
      (uint32)0x7CDD03A9UL, (uint32)0x3C58CCE2UL,      \
      (uint32)0x3B6421FCUL, (uint32)0x74AA58D5UL,      \
      (uint32)0x14E4C71EUL, (uint32)0x3BF02A30UL,      \
      (uint32)0x61BC57C4UL, (uint32)0x03DC63C4UL,      \
      (uint32)0x417B07EEUL, (uint32)0x831E4408UL,      \
      (uint32)0x3CB08950UL, (uint32)0xB64D599EUL,      \
      (uint32)0x00000001UL                             \
   }

/* Public exponent */
#define CRYPTO_SIG_KEY_PE                              \
   {                                                   \
      (uint32)0x00000001UL,                            \
      (uint32)0x00010001UL                             \
   }

/*------------------------------------------------------------------------------
 NCD signature key (test key!)
------------------------------------------------------------------------------*/

/* With digest SHA-512 */
#define CRYPTO_NCD_KEY_DIGEST_SHA_512

/* Key length in bits: 3072 */
#define CRYPTO_NCD_KEY_SIZE 3072U

/* Modulus */
#define CRYPTO_NCD_KEY_M                               \
   {                                                   \
      (uint32)0x00000060UL,                            \
      (uint32)0x6EFAA811UL, (uint32)0x8E65897DUL,      \
      (uint32)0x58889F24UL, (uint32)0x49F63D66UL,      \
      (uint32)0x53FAAB25UL, (uint32)0x6030968CUL,      \
      (uint32)0x0A54B7ABUL, (uint32)0x1795EBF6UL,      \
      (uint32)0xF7AEE8DBUL, (uint32)0x9CDF62E8UL,      \
      (uint32)0xCF930C62UL, (uint32)0x6FEC64C9UL,      \
      (uint32)0xE91B9EDBUL, (uint32)0x9E4745FDUL,      \
      (uint32)0xC45D5A3DUL, (uint32)0xE16D3E92UL,      \
      (uint32)0x8C113590UL, (uint32)0x5717B9EBUL,      \
      (uint32)0xDE2FBCCDUL, (uint32)0x822348C6UL,      \
      (uint32)0x87290CFDUL, (uint32)0x58F80817UL,      \
      (uint32)0x4C5C7FEDUL, (uint32)0xBB042F0DUL,      \
      (uint32)0x39024AF9UL, (uint32)0xF8E3F766UL,      \
      (uint32)0xB9B796E1UL, (uint32)0x7B5C6ACCUL,      \
      (uint32)0x7EADC84FUL, (uint32)0xC0FD5E4DUL,      \
      (uint32)0x182F64D5UL, (uint32)0x2ACB7F6EUL,      \
      (uint32)0x86EA37FFUL, (uint32)0x76FDFE73UL,      \
      (uint32)0x68BDDC38UL, (uint32)0xD6529710UL,      \
      (uint32)0x17272435UL, (uint32)0x0AB30A1CUL,      \
      (uint32)0x2361C657UL, (uint32)0x6E16679CUL,      \
      (uint32)0xD8288154UL, (uint32)0xCB97ACB0UL,      \
      (uint32)0x5FAA88B9UL, (uint32)0x1F83F404UL,      \
      (uint32)0x0908190DUL, (uint32)0x2DFBE125UL,      \
      (uint32)0xEF811114UL, (uint32)0x342F96E7UL,      \
      (uint32)0x17B0C49FUL, (uint32)0x4ADD4A9DUL,      \
      (uint32)0x37E2B2D5UL, (uint32)0xF7146DC5UL,      \
      (uint32)0x7BE2370FUL, (uint32)0x1B0AFC21UL,      \
      (uint32)0x34BA3C3EUL, (uint32)0x6B36F95FUL,      \
      (uint32)0x75B88D7CUL, (uint32)0xE121A9B7UL,      \
      (uint32)0x363DA37CUL, (uint32)0x34EF2E48UL,      \
      (uint32)0x664A528CUL, (uint32)0x8E5D0209UL,      \
      (uint32)0xADCCDC66UL, (uint32)0xABC75E80UL,      \
      (uint32)0x885D49A8UL, (uint32)0x64313EACUL,      \
      (uint32)0x08A74F1FUL, (uint32)0x53A6C7DDUL,      \
      (uint32)0x5955D7DCUL, (uint32)0x61168F77UL,      \
      (uint32)0xFB68F446UL, (uint32)0x5261C93FUL,      \
      (uint32)0x613CB94AUL, (uint32)0x1497FA67UL,      \
      (uint32)0x425C48E2UL, (uint32)0xEF3D650FUL,      \
      (uint32)0xF46A2048UL, (uint32)0x18C4E89DUL,      \
      (uint32)0x23FA011DUL, (uint32)0xAF91DDC1UL,      \
      (uint32)0x80BF32BFUL, (uint32)0x9FE02B1DUL,      \
      (uint32)0xC054145EUL, (uint32)0x56D38A77UL,      \
      (uint32)0x14B1AC2BUL, (uint32)0x2C2F3082UL,      \
      (uint32)0x4FD0BC46UL, (uint32)0x492B41B2UL,      \
      (uint32)0x308F2BA1UL, (uint32)0xAD5C765BUL,      \
      (uint32)0xDF997C9FUL, (uint32)0x3F3EBFC7UL,      \
      (uint32)0x8A71DC0AUL, (uint32)0x85CF2BCAUL,      \
      (uint32)0xCABD4BD7UL, (uint32)0x991A4321UL       \
   }

/* Barret value */
#define CRYPTO_NCD_KEY_BV                              \
   {                                                   \
      (uint32)0x00000061UL,                            \
      (uint32)0x62D05F96UL, (uint32)0xDF8635C4UL,      \
      (uint32)0xFEB280C8UL, (uint32)0xBC0EC237UL,      \
      (uint32)0xF8D9842DUL, (uint32)0x3B07EE06UL,      \
      (uint32)0x52DB1AFAUL, (uint32)0x41E3F920UL,      \
      (uint32)0x56E7E5FCUL, (uint32)0x1D79AC25UL,      \
      (uint32)0x23C9F19AUL, (uint32)0x06B95461UL,      \
      (uint32)0x57011F33UL, (uint32)0xE8C8717DUL,      \
      (uint32)0x09FF6E9AUL, (uint32)0xDB592F7EUL,      \
      (uint32)0x87431497UL, (uint32)0x412FFA85UL,      \
      (uint32)0x3157935FUL, (uint32)0xB8738D57UL,      \
      (uint32)0xC02E0220UL, (uint32)0xF2E809A0UL,      \
      (uint32)0x6EFD93EDUL, (uint32)0x3F6CCDA9UL,      \
      (uint32)0xDD2A120CUL, (uint32)0xC2903483UL,      \
      (uint32)0x90586497UL, (uint32)0x17456BD2UL,      \
      (uint32)0x7014DD78UL, (uint32)0x7B0B4184UL,      \
      (uint32)0xCB54D7E2UL, (uint32)0x44FC9C32UL,      \
      (uint32)0xC3F7A47BUL, (uint32)0xA2B16BE5UL,      \
      (uint32)0x560876FAUL, (uint32)0x29B33281UL,      \
      (uint32)0x7AE3AE69UL, (uint32)0xD6DCF422UL,      \
      (uint32)0x0DC94F4BUL, (uint32)0xA58EB07FUL,      \
      (uint32)0x89F60675UL, (uint32)0xD5452B90UL,      \
      (uint32)0xFA66DE1EUL, (uint32)0x75115082UL,      \
      (uint32)0x15FB9B06UL, (uint32)0x817B0FC7UL,      \
      (uint32)0x08365DF4UL, (uint32)0x96D0EB23UL,      \
      (uint32)0xB112E211UL, (uint32)0x15FC9788UL,      \
      (uint32)0xDFFBFF72UL, (uint32)0xD202D692UL,      \
      (uint32)0x26FDC592UL, (uint32)0x6EBD2455UL,      \
      (uint32)0x23114DDEUL, (uint32)0x0FF25581UL,      \
      (uint32)0xD451790EUL, (uint32)0x1FF33B9BUL,      \
      (uint32)0x4604557DUL, (uint32)0x0E7F7445UL,      \
      (uint32)0x05AF67B1UL, (uint32)0x44F58896UL,      \
      (uint32)0xF90EC913UL, (uint32)0x188641E8UL,      \
      (uint32)0x6CBEC4EEUL, (uint32)0x4FBDAAB9UL,      \
      (uint32)0x3B5E56F7UL, (uint32)0xEB68D75AUL,      \
      (uint32)0x9A6B7B38UL, (uint32)0xB87FF954UL,      \
      (uint32)0xAF900498UL, (uint32)0x18A6D002UL,      \
      (uint32)0x47E344E6UL, (uint32)0x898B1563UL,      \
      (uint32)0x04292A06UL, (uint32)0xEB7FFADFUL,      \
      (uint32)0xCB6CFD39UL, (uint32)0xD5E04A1AUL,      \
      (uint32)0x1B05B5BEUL, (uint32)0x5727D920UL,      \
      (uint32)0x5AE10B71UL, (uint32)0x6B4802FBUL,      \
      (uint32)0x7D492CB9UL, (uint32)0x46DD8B6EUL,      \
      (uint32)0x8F9DAF0DUL, (uint32)0x60CA8A28UL,      \
      (uint32)0xDAD99A49UL, (uint32)0xD026355AUL,      \
      (uint32)0xD89E5DBCUL, (uint32)0x8720D37AUL,      \
      (uint32)0x6C8BB50DUL, (uint32)0xF4AE19D7UL,      \
      (uint32)0x878A1E88UL, (uint32)0xEE037C4DUL,      \
      (uint32)0x5E9360C4UL, (uint32)0xAC0D8828UL,      \
      (uint32)0x00000001UL                             \
   }

/* Public exponent */
#define CRYPTO_NCD_KEY_PE                              \
   {                                                   \
      (uint32)0x00000001UL,                            \
      (uint32)0x00010001UL                             \
   }


#endif /* CRYPTO_KEY_H */

/*--- End of file ------------------------------------------------------------*/
