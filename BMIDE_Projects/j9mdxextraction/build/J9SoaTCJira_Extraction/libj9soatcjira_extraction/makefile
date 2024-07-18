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
LIBJ9SOATCJIRA_EXTRACTION_SERVER     = $(PROJECT_HOME)$(PS)src$(PS)server
LIBJ9SOATCJIRA_EXTRACTION_SRC        = $(LIBJ9SOATCJIRA_EXTRACTION_SERVER)$(PS)J9SoaTCJira_Extraction
LIBJ9SOATCJIRA_EXTRACTION_DRV        = $(PROJECT_DRV)$(PS)J9SoaTCJira_Extraction
LIBJ9SOATCJIRA_EXTRACTION_OBJ        = $(PROJECT_OBJ)$(PS)libj9soatcjira_extraction
LIBJ9SOATCJIRA_EXTRACTION_CXXS       = $(LIBJ9SOATCJIRA_EXTRACTION_SRC)$(PS)*.cxx $(LIBJ9SOATCJIRA_EXTRACTION_DRV)$(PS)*.cxx
LIBJ9SOATCJIRA_EXTRACTION_CXX_FLAGS  = $(CXX_FLAGS) -DIPLIB=libj9soatcjira_extraction
LIBJ9SOATCJIRA_EXTRACTION_LINK_FLAGS = $(LINK_FLAGS)
LIBJ9SOATCJIRA_EXTRACTION_INCLUDES   = $(CPP_INCLUDES) -I$(LIBJ9SOATCJIRA_EXTRACTION_SRC) -I$(LIBJ9SOATCJIRA_EXTRACTION_DRV) -I$(PROJECT_DRV) -I$(LIBJ9SOATCJIRA_EXTRACTION_SERVER) \
                                  -I$(TC_ROOT)$(PS)include -I$(TC_ROOT)$(PS)include_cpp -I$(TC_ROOT)$(PS)aw_include_cpp \
                                  -I$(TOOLBOX_HOME)$(PS)TCGATEWAYSRC \
                                  
LIBJ9SOATCJIRA_EXTRACTION_LIB_PATH   = $(LP)$(PROJECT_BIN)  $(LIB_PATH)
LIBJ9SOATCJIRA_EXTRACTION_LIBS       = $(LIB_PREFIX)sa$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)base_utils$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)itk$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)qry$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)user_exits$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tccore$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)tc$(LIB_SUFFIX) \
                                  ParseJson$(LIB_SUFFIX) \
                                  $(SYSLIBS)  \
                                  $(LIB_PREFIX)tcsoacommon$(LIB_SUFFIX)        $(LIB_PREFIX)tcsoaserver$(LIB_SUFFIX) $(LIB_PREFIX)pom$(LIB_SUFFIX)  \
                                  $(LIB_PREFIX)itk$(LIB_SUFFIX)                $(LIB_PREFIX)fclasses$(LIB_SUFFIX)    $(LIB_PREFIX)metaframework$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)extensionframework$(LIB_SUFFIX) $(LIB_PREFIX)tccore$(LIB_SUFFIX)      $(LIB_PREFIX)tc$(LIB_SUFFIX) \
                                  $(LIB_PREFIX)cxpom$(LIB_SUFFIX)              $(LIB_PREFIX)base_utils$(LIB_SUFFIX)  $(LIB_PREFIX)mld$(LIB_SUFFIX)
LIBJ9SOATCJIRA_EXTRACTION_LD_FLAGS   = $(LIBJ9SOATCJIRA_EXTRACTION_LINK_FLAGS) $(LIBJ9SOATCJIRA_EXTRACTION_LIB_PATH)
LIBJ9SOATCJIRA_EXTRACTION_TARGET     = $(PROJECT_BIN)$(PS)libj9soatcjira_extraction



libj9soatcjira_extraction_all:   $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)  $(LIBJ9SOATCJIRA_EXTRACTION_TARGET).$(LIB_EXT)


$(LIBJ9SOATCJIRA_EXTRACTION_OBJ) :
	@echo Creating: $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)
	-@$(MAKE_DIR) $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)

$(LIBJ9SOATCJIRA_EXTRACTION_CXXS) :


# ==================================================
# Windows Build Target
# ==================================================
$(LIBJ9SOATCJIRA_EXTRACTION_TARGET).dll : $(LIBJ9SOATCJIRA_EXTRACTION_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server libj9soatcjira_extraction
	@echo Compiling Source...
	@$(COMPILE)  $(LIBJ9SOATCJIRA_EXTRACTION_CXX_FLAGS) $(LIBJ9SOATCJIRA_EXTRACTION_INCLUDES) -c $(**)   $(CARG_OUT)$(LIBJ9SOATCJIRA_EXTRACTION_OBJ)$(PS)
	@echo.
	@$(LINK) $(LIBJ9SOATCJIRA_EXTRACTION_LD_FLAGS) $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)$(PS)*.$(OBJ_EXT)  $(LIBJ9SOATCJIRA_EXTRACTION_LIBS)  $(LARG_OUT)$(LIBJ9SOATCJIRA_EXTRACTION_TARGET).dll
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcjira_extraction.dll $(PROJECT_TC)$(PS)bin
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcjira_extraction.lib $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


	
# ==================================================
# UNIX Build Target
# ==================================================
$(LIBJ9SOATCJIRA_EXTRACTION_TARGET).so : $(LIBJ9SOATCJIRA_EXTRACTION_CXXS)
	@echo ________________________________________________________________________________
	@echo Building C++ Server libj9soatcjira_extraction
	@# The compile output goes to the current directory (project root), so remove any .o files
	@# that may have been left here from previous failed builds. Then after the compile move all .o
	@# files to the the desired obj folder.
	@-rm *.$(OBJ_EXT)
	@echo Compiling $(LIBJ9SOATCJIRA_EXTRACTION_CXXS)
	@$(COMPILE)  $(LIBJ9SOATCJIRA_EXTRACTION_CXX_FLAGS) $(LIBJ9SOATCJIRA_EXTRACTION_INCLUDES) -c $(LIBJ9SOATCJIRA_EXTRACTION_CXXS) 
	@mv *.$(OBJ_EXT) $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)
	@echo Linking $(LIBJ9SOATCJIRA_EXTRACTION_TARGET).so
	@$(LINK) $(LIBJ9SOATCJIRA_EXTRACTION_LD_FLAGS) $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)$(PS)*.$(OBJ_EXT)  $(LIBJ9SOATCJIRA_EXTRACTION_LIBS)  $(LARG_OUT) $(LIBJ9SOATCJIRA_EXTRACTION_TARGET).so
	$(COPY_FILE)  $(PROJECT_BIN)$(PS)libj9soatcjira_extraction.so $(PROJECT_TC)$(PS)lib
	@echo ________________________________________________________________________________


libj9soatcjira_extraction_clean:
	@echo ________________________________________________________________________________
	@echo Cleaning C++ Server libj9soatcjira_extraction
	-$(DELETE_DIR)  $(LIBJ9SOATCJIRA_EXTRACTION_OBJ)
	-$(DELETE_FILE) $(PROJECT_BIN)$(PS)libj9soatcjira_extraction.*	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)bin$(PS)libj9soatcjira_extraction.dll
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libj9soatcjira_extraction.lib	
	-$(DELETE_FILE) $(PROJECT_TC)$(PS)lib$(PS)libj9soatcjira_extraction.so	
	@echo ________________________________________________________________________________

