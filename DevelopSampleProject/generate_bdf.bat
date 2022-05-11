REM Tool chain path setting
set BUILD_TOOL_CHAIN_DIR=C:\online_cpptest\cygwin
set CPPTEST_DIR=C:\Program Files\Parasoft\C++test\10.5
set PATH=%BUILD_TOOL_CHAIN_DIR%\bin;%CPPTEST_DIR%;%PATH%

REM Setting environment variables for creating build data files
set PROJECT_DIR=%~dp0
set CPPTEST_SCAN_OUTPUT_FILE=%PROJECT_DIR%cpptestscan.bdf
set CPPTEST_SCAN_PROJECT_NAME=DevelopSampleProject
set CPPTEST_SCAN_TRACE_COMMAND=gcc^|g\+\+

REM Creating a build data file
cd %PROJECT_DIR%
del /F %PROJECT_DIR%cpptestscan.bdf
make clean
cpptesttrace  make -i -B
make clean