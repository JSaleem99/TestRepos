# ==================================================
# Copyright 2015
# Siemens Product Lifecycle Management Software Inc.
# All Rights Reserved.
# ==================================================
# ==================================================
#             Auto-generated source
#                 DO NOT EDIT
# ==================================================



# ==================================================
# Define macros for C++ Service implementation
# ==================================================
LIBJ9SOATCOBJECTSYNC_SERVER     = $(PROJECT_HOME)$(PS)src$(PS)server
LIBJ9SOATCOBJECTSYNC_SRC        = $(LIBJ9SOATCOBJECTSYNC_SERVER)$(PS)J9SoaTcObjectSync
LIBJ9SOATCOBJECTSYNC_DRV        = $(PROJECT_DRV)$(PS)J9SoaTcObjectSync
LIBJ9SOATCOBJECTSYNC_OBJ        = $(PROJECT_OBJ)$(PS)libj9soatcobjectsync
LIBJ9SOATCOBJECTSYNC_CXXS       = $(LIBJ9SOATCOBJECTSYNC_SRC)$(PS)*.cxx $(LIBJ9SOATCOBJECTSYNC_DRV)$(PS)*.cxx
LIBJ9SOATCOBJECTSYNC_CXX_FLAGS  = $(CXX_FLAGS) -DIPLIB=libj9soatcobjectsync
LIBJ9SOATCOBJECTSYNC_LINK_FLAGS = $(LINK_FLAGS)
LIBJ9SOATCOBJECTSYNC_INCLUDES   = $(CPP_INCLUDES) -I$(LIBJ9SOATCOBJECTSYNC_SRC) -I$(LIBJ9SOATCOBJECTSYNC_DRV) -I$(PROJECT_DRV) -I$(LIBJ9SOATCOBJECTSYNC_SERVER) \
                                  -I$(TC_ROOT)$(PS)include -I$(TC_ROOT)$(PS)include_cpp -I$(TC_ROOT)$(PS)aw_include_cpp \
                                  -I$(TOOLBOX_HOME)$(PS)TCGATEWAYSRC \
                                  
LIBJ9SOATCOBJECTSYNC_LIB_PATH   = $(LP)$(PROJECT_BIN)  $(LIB_PATH)
LIBJ9SOATCOBJECTSYNC_LIBS       = $(SYSLIBS)  \
                                  $(LIB_PREFIX)tcsoacommon$(LIB_SUFFIX)        $(LIB_PREFIX)tcsoaserver$(LIB_SUFFIX) $(LIB_PREFIX)pom$(LIB_SUFFIX)  \
                                  $(LIB_PREFIX)itk$(LIB_SUFFIX)                $(LIB_PREFIX)fclasses$(LIB_SUFFIX)    $(LIB_PREFIX)metaframework$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)extensionframework$(LIB_SUFFIX) $(LIB_PREFIX)tccore$(LIB_SUFFIX)      $(LIB_PREFIX)tc$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)cxpom$(LIB_SUFFIX)              $(LIB_PREFIX)base_utils$(LIB_SUFFIX)  $(LIB_PREFIX)mld$(LIB_SUFFIX)
LIBJ9SOATCOBJECTSYNC_LD_FLAGS   = $(LIBJ9SOATCOBJECTSYNC_LINK_FLAGS) $(LIBJ9SOATCOBJECTSYNC_LIB_PATH)
LIBJ9SOATCOBJECTSYNC_TARGET     = $(PROJECT_BIN)$(PS)libj9soatcobjectsync



libj9soatcobjectsync_all:   $(LIBJ9SOATCOBJECTSYNC_OBJ)  $(LIBJ9SOATCOBJECTSYNC_TARGET).$(LIB_EXT)


$(LIBJ9SOATCOBJECTSYNC_OBJ) :
	@echo Creating: $(LIBJ9SOATCOBJECTSYNC_OBJ)
	-@$(MAKE_DIR) $(LIBJ9SOATCOBJECTSYNC_OBJ)

$(LIBJ9SOATCOBJECTSYNC_CXXS) :


# ==================================================
# Windows Build Target
# ==================================================
$(LIBJ9SOATCOBJECTSYNC_TARGET).dll : $(LIBJ9SOATCOBJECTSYNC_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server libj9soatcobjectsync
	@echo Compiling Source...
	@$(COMPILE)  $(LIBJ9SOATCOBJECTSYNC_CXX_FLAGS) $(LIBJ9SOATCOBJECTSYNC_INCLUDES) -c $(**)   $(CARG_OUT)$(LIBJ9SOATCOBJECTSYNC_OBJ)$(PS)
	@echo.
	@$(LINK) $(LIBJ9SOATCOBJECTSYNC_LD_FLAGS) $(LIBJ9SOATCOBJECTSYNC_OBJ)$(PS)*.$(OBJ_EXT)  $(LIBJ9SOATCOBJECTSYNC_LIBS)  $(LARG_OUT)$(LIBJ9SOATCOBJECTSYNC_TARGET).dll
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcobjectsync.dll $(PROJECT_TC)$(PS)bin
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcobjectsync.lib $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


	
# ==================================================
# UNIX Build Target
# ==================================================
$(LIBJ9SOATCOBJECTSYNC_TARGET).so : $(LIBJ9SOATCOBJECTSYNC_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server libj9soatcobjectsync
	@# The compile output goes to the current directory (project root), so remove any .o files
	@# that may have been left here from previous failed builds. Then after the compile move all .o
	@# files to the the desired obj folder.
	@-rm *.$(OBJ_EXT)
	@echo Compiling $(LIBJ9SOATCOBJECTSYNC_CXXS)
	@$(COMPILE)  $(LIBJ9SOATCOBJECTSYNC_CXX_FLAGS) $(LIBJ9SOATCOBJECTSYNC_INCLUDES) -c $(LIBJ9SOATCOBJECTSYNC_CXXS) 
	@mv *.$(OBJ_EXT) $(LIBJ9SOATCOBJECTSYNC_OBJ)
	@echo Linking $(LIBJ9SOATCOBJECTSYNC_TARGET).so
	@$(LINK) $(LIBJ9SOATCOBJECTSYNC_LD_FLAGS) $(LIBJ9SOATCOBJECTSYNC_OBJ)$(PS)*.$(OBJ_EXT)  $(LIBJ9SOATCOBJECTSYNC_LIBS)  $(LARG_OUT) $(LIBJ9SOATCOBJECTSYNC_TARGET).so
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcobjectsync.so $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


libj9soatcobjectsync_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning C++ Server libj9soatcobjectsync
	-$(DELETE_DIR)  $(LIBJ9SOATCOBJECTSYNC_OBJ)
	-$(DELETE_FILE) $(PROJECT_BIN)$(PS)libj9soatcobjectsync.*	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)bin$(PS)libj9soatcobjectsync.dll
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libj9soatcobjectsync.lib	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libj9soatcobjectsync.so	
	@echo ________________________________________________________________________________

