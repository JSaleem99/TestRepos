@echo off
setlocal

rem Set environment variables
set BASE_PATH=E:\Projects_1\BMIDE\j9mdxextraction
set TC_ROOT=D:\Teamcenter_14\TC_ROOT
set TEMPLATE_HOME=D:\Teamcenter_14\tcdata\model
set SOA_CLIENT_KIT=D:\Teamcenter_14\TC_ROOT\soa_client\soa_client
set RAC_HOME=
set CHSARP_HOME=
set COMPILER_HOME=C:\PROGRA~1\MIB055~1\2022\Community\VC\Tools\MSVC\14.35.32215\bin\Hostx64\x64

rem Run nmake with the makefile
nmake -f makefile.wntx64 

endlocal
