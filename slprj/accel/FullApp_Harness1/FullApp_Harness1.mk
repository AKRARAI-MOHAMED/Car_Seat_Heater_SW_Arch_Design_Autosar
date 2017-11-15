# Copyright 1994-2013 The MathWorks, Inc.
#
# File    : accel_lcc64.tmf   
#
# Abstract:
#	Accelerator template makefile for building a PC-based,
#       generated mex-file of Simulink model using generated C code. 
#	     LCC compiler version 2.4.
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
# 	Note that this template is automatically customized by the Real-Time
#	Workshop build procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#
#         MEX_OPTS       - User specific mex options.
#	  OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g. 
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#			   (For Lcc, have a '/'as file seperator before the 
#			   file name instead of a '\' . 
#			   i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see accel.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = accel.tlc
COMPILER_TOOL_CHAIN = lcc

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to where MATLAB is installed.
#  MATLAB_BIN      - Path to MATLAB executable.
#  S_FUNCTIONS     - List of S-functions.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link.
#  SOLVER          - Solver source file name
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  BUILDARGS       - Options passed in at the command line.
#  MEXEXT          - extension that a mex file has. See the MATLAB mexext 
#                    command

MODEL              = FullApp_Harness1
MODULES            = FullApp_Harness1_acc_data.c 
MAKEFILE           = FullApp_Harness1.mk
MATLAB_ROOT        = C:/Program Files/MATLAB/MATLAB Production Server/R2015a
ALT_MATLAB_ROOT    = C:/PROGRA~1/MATLAB/MATLAB~1/R2015a
MASTER_ANCHOR_DIR  = 
START_DIR          = C:/Users/Morya/Desktop/SeatHeater2
MATLAB_BIN         = C:/Program Files/MATLAB/MATLAB Production Server/R2015a/bin
ALT_MATLAB_BIN     = C:/PROGRA~1/MATLAB/MATLAB~1/R2015a/bin
S_FUNCTIONS        = 
S_FUNCTIONS_LIB    = 
SOLVER             = 
NUMST              = 1
TID01EQ            = 0
NCSTATES           = 0
MEM_ALLOC          = RT_STATIC
BUILDARGS          =  ISPROTECTINGMODEL=NOTPROTECTING
MEXEXT             = mexw64

MODELREFS          = FullApp 
SHARED_SRC         = ../../../slprj/sim/_sharedutils/*.c*
SHARED_SRC_DIR     = ../../../slprj/sim/_sharedutils
SHARED_BIN_DIR     = ../../../slprj/sim/_sharedutils
SHARED_LIB         = ../../../slprj/sim/_sharedutils/rtwshared.lib
SHARED_LIB_LINK      = $(subst /,\,$(SHARED_LIB))
MEX_OPT_FILE       = -f C:/PROGRA~1/MATLAB/MATLAB~1/R2015a/rtw/c/tools/LCC-WI~1.XML
OPTIMIZATION_FLAGS = -DNDEBUG
ADDITIONAL_LDFLAGS = 

#--------------------------- Model and reference models -----------------------
MODELLIB                  = FullApp_Harness1lib.lib
MODELREF_LINK_LIBS        = 
MODELREF_INC_PATH         = -Ireferenced_model_includes 
RELATIVE_PATH_TO_ANCHOR   = ../../..
MODELREF_TARGET_TYPE      = NONE

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Tool Specifications ------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

MEX = $(MATLAB_BIN)\mex.bat

#------------------------------ Include Path -----------------------------------

# Additional includes

ADD_INCLUDES = \
	-I$(START_DIR)/slprj/accel/FullApp_Harness1 \
	-I$(START_DIR) \


# see MATLAB_INCLUES and COMPILER_INCLUDES from lcctool.mak

SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES) $(MODELREF_INC_PATH) $(SHARED_INCLUDES)

#------------------------ C and MEX optimization options -----------------------
MEX_OPTS  =
OPT_OPTS  = $(DEFAULT_OPT_OPTS)

ifneq ($(ADDITIONAL_LDFLAGS),)
MEX_LDFLAGS = LINKFLAGS="$$LINKFLAGS $(ADDITIONAL_LDFLAGS)"
else
MEX_LDFLAGS =
endif

ifneq ($(OPTIMIZATION_FLAGS),)
MEX_OPT_OPTS = OPTIMFLAGS="$(OPTIMIZATION_FLAGS)"    # passed to 'mex -c'
else
MEX_OPT_OPTS = $(OPT_OPTS)    # passed to 'mex -c'
endif

ifeq "$(MEX_OPTS)" "-g"
MEX_OPT_OPTS =
endif

#-------------------------------- Mex Options  ---------------------------------
MEX_FLAGS = -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -DMX_COMPAT_32 -nodeclspec $(MEX_OPT_OPTS) $(MEX_LDFLAGS) $(MEX_OPTS)

DEF_FILE = $(MODEL)_acc.def

#----------------------------- Source Files -----------------------------------
USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS      = lccstub.c $(MODEL)_acc.c $(MODULES)
OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)
LINK_OBJS = $(SRCS:.c=.obj) $(LOCAL_USER_OBJS)

SHARED_OBJS := $(addsuffix .obj, $(basename $(wildcard $(SHARED_SRC))))
FMT_SHARED_OBJS = $(subst /,\,$(SHARED_OBJS))

#------------------------- Additional Libraries -------------------------------

LIBS =



LIBUT = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libut.lib
LIBMWMATHUTIL = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmathutil.lib
LIBMWSL_FILEIO = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_fileio.lib
LIBMWSIGSTREAM = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsigstream.lib
LIBMWSL_ASYNCIO = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsl_AsyncioQueue.lib
LIBMWSIMULINK = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwsimulink.lib
LIBMWIPP = 
LIBMX = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmx.lib
LIBMEX = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmex.lib
LIBS += $(LIBUT) $(LIBMWMATHUTIL) $(LIBMWSL_FILEIO) $(LIBMWIPP) $(LIBMX) $(LIBMEX) $(LIBMWSIGSTREAM) $(LIBMWSL_ASYNCIO) $(LIBMWSIMULINK)

PROGRAM = ../$(MODEL)_acc.$(MEXEXT)

#--------------------------------- Rules --------------------------------------

$(PROGRAM) : $(OBJS) $(LIBS) $(SHARED_LIB) $(DEF_FILE)
	@echo ### Linking ...
	$(LD) -s -dll -o $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)_acc.$(MEXEXT) -L"$(MATLAB)/sys/lcc64/lcc64/lib64" -entry LibMain $(DEF_FILE) $(LINK_OBJS) $(S_FUNCTIONS_LIB) $(SHARED_LIB_LINK) $(LIBS)  -map sfun.map 
	@echo ### Created mex file: $(MODEL)_acc.$(MEXEXT)

%.obj : %.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) -Fo$(@F) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) -Fo$(@F) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) -Fo$(@F) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) -Fo$(@F) $<



%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) -Fo$(@F) $<

lccstub.obj : $(LCC)/mex/lccstub.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $(LCC)/mex/lccstub.c -o ./lccstub.obj

# Libraries:





clean :
	@echo ### Deleting the objects and $(PROGRAM)
	@del $(OBJS) ..\$(MODEL)_acc.$(MEXEXT) $(wildcard *.obj) $(wildcard *.lib)

#----------------------------- Dependencies -------------------------------

$(DEF_FILE) : $(OBJS)
	@echo LIBRARY $(RELATIVE_PATH_TO_ANCHOR)/$(MODEL)_acc.$(MEXEXT) EXPORTS mexFunction > $(DEF_FILE)

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_OBJS) : $(SHARED_BIN_DIR)/%.obj : $(SHARED_SRC_DIR)/%.c 
	$(CC) -outdir $(SHARED_BIN_DIR) $(MEX_FLAGS) $(INCLUDES) $<

$(SHARED_LIB) : $(SHARED_OBJS)
	@echo ### Creating $@ 
	$(LIBCMD) /out:$(SHARED_LIB_LINK) $(FMT_SHARED_OBJS)
	@echo ### $@ Created   


