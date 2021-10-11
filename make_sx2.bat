@echo off
rem Make the SamaruX shell and the built-in commands from "sx2.c".
rem Usage: make_sx2
if exist sx2.com del sx2.com
if exist sx2.zsm del sx2.zsm
if exist sx2.hex del sx2.hex
if exist sx2.prn del sx2.prn
cpm cc sx2
cpm ccopt sx2
cpm zsm sx2
cpm hextocom sx2
del sx2.zsm
del sx2.hex
echo -------------
echo Build results
echo -------------
call make_tst sx2.com
echo.
echo Remember to re-build the manual if needed, with:
echo.
echo cpm sx2 batch mk_doc.sx dest_file formfeed version date
echo.