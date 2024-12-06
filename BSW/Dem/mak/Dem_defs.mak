###############################################################################
# File Name  : Dem_defs.mak                                                   #
# Description: Autosar makefile Template                                      #
#              This makefile is a template to implement the common            #
#              features of each project.                                      #
#              It is included by the Global.Makefile.target.make.$(Version)   #
#              and is supported from version 3.24 .                           #
#                                                                             #
# This Template is based on AUTOSAR_BSW_MakefileInterface.doc version 0.4     #
#                                                                             #
#-----------------------------------------------------------------------------#
#               C O P Y R I G H T                                             #
#-----------------------------------------------------------------------------#
# Copyright (c) 2007 by Vector Informatik GmbH.  All rights reserved.         #
#                                                                             #
#-----------------------------------------------------------------------------#
#               A U T H O R   I D E N T I T Y                                 #
#-----------------------------------------------------------------------------#
# Initials     Name                      Company                              #
# --------     ---------------------     -------------------------------------#
# ms           Gunnar Meiss              Vector Informatik GmbH               #
# mhe          Matthias Heil             Vector Informatik GmbH               #
#-----------------------------------------------------------------------------#
#               R E V I S I O N   H I S T O R Y                               #
#-----------------------------------------------------------------------------#
# Date         Version  Sign Description                                      #
# ----------   -------  ---- -------------------------------------------------#
# 2012/06/29   1.00.00  mhe  initial CFG5 version derived from                #
#                            Gw_AsrPduR_Cfg5                                  #
# 2013/10/04   2.00.00  mhe  Added reintroduced Dem_PBcfg.c                   #
#-----------------------------------------------------------------------------#
# TemplateVersion = 1.0                                                       #
# MAKEFILE        = 1.0                                                       #
###############################################################################

###############################################################
# INTERNAL REQUIRED CONFIGURATION (in can_cfg.mak)
#
# CAN_MODULES 	    (required)  (not necessary for Vector)
# CAN_DRIVER_MODE   (required)  (not necessary for Vector)
# CAN_PROJECT_PATH  (optional) 
# CAN_BUILD_LIBRARY (required)


###############################################################
# REQUIRED (defined in base_make)
# 
# PROJECT_ROOT
# SSC_ROOT
###############################################################


###############################################################
# SPECIFIC
# Specific variables which were defined here are only for local use in this Makefile
# if for example additional includes are necessary, these vars can be defined and used in the REGISTRY-Part.
# e.g.: $(CAN_CORE_PATH) = $(SSC_ROOT)\Can  could be used for CPP_INCLUDE_PATH    +=  $(CAN_CORE_PATH)\CPP_FILES\...
DEM_CORE_PATH        =
DEM_OUTPUT_PATH      = $(GENDATA_DIR)


###############################################################
# REGISTRY
# 
# $(SSC_PLUGINS) is a list of the components. Here can is added (not necessary for Vector, whole component-list also exists in Global.makefile.target.make...)
# e.g.: SSC_PLUGINS        += can
SSC_PLUGINS        += 
#e.g.: can_DEPENDENT_PLUGINS = 
DEM_DEPENDENT_PLUGINS = 

#-----------------------------------------------------------------------------------------
# MakeSupport usually includes all header-files which were in the same
# directory as the source-files automatically, but to ensure that the
# Asr-Makefiles will also work with other Basic-Make-Packages,
# it is necessary to define all include directories for this Module
# e.g.: CC_INCLUDE_PATH     += $(CAN_CORE_PATH)
#------------------------------------------------------------------------------------------
CC_INCLUDE_PATH     += Dem
CPP_INCLUDE_PATH    +=
ASM_INCLUDE_PATH    +=

#PREPROCESSOR_DEFINES+= drivermode

#drivermode_KEY       = CAN_MODE
#drivermode_VALUE    = $(CAN_DRIVER_MODE)


###############################################################
# PROVIDE
#
# A Public Makefile does not provide resources for other basic
# software bundles or the base_make package.
###############################################################