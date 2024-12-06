/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 * \addtogroup  Os_Hal_Coverage
 * \{
 *
 * \file
 * \brief  This file contains derivative specific coverage justifications.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

#if !defined (OS_HAL_COVERAGE_P1HCINT_H)                                                                              /* PRQA S 0883 */ /* MD_Os_0883 */
# define OS_HAL_COVERAGE_P1HCINT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */

/* Os module declarations */

/* Os kernel module dependencies */

/* Os hal dependencies */

/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/* START_COVERAGE_JUSTIFICATION

\ID COV_OS_HALTIMEROSTMUNSUPPORTED_XX
  \ACCEPT XX
  \REASON Timer OSTM is not available on this derivative but it is tested on reference derivative F1H.
  
\ID COV_OS_HALTIMERTAUJUNSUPPORTED_XX
  \ACCEPT XX
  \REASON Timer TAUJ is not available on this derivative but it is tested on reference derivative F1H.

Justifications for core:  

\ID COV_OS_HALPLATFORMPITUNSUPPORTED_XX
  \ACCEPT XX
  \REASON Timer type PIT is not available on this derivative but it is tested on reference derivative F1H.       

\ID COV_OS_HALPLATFORMPERIPHERALINTTRIGGERSUPPORTED
  \ACCEPT TX
  \REASON This platform always support peripheral interrupt software trigger.

END_COVERAGE_JUSTIFICATION */

#endif /* OS_HAL_COVERAGE_P1HCINT_H */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Coverage_P1HCInt.h
 **********************************************************************************************************************/
 
