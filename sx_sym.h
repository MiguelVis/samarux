#asm 
ADDPATHTOFN  equ 04F1BH
ADDTYPETOFN  equ 04EBDH
ALIASADD     equ 02252H
ALIASDEL     equ 02271H
ALIASFIND    equ 02225H
ALIASGET     equ 02239H
ALIASMAIN    equ 0211EH
ALIASPRINT   equ 02212H
ATOI         equ 00439H
BATCHARG     equ 023E3H
BATCHARGC    equ 02414H
BATCHEXE     equ 0237BH
BATCHFN      equ 024A5H
BATCHJUMP    equ 0242BH
BATCHMAIN    equ 0228AH
BATCHSHIFT   equ 02452H
BATCH_ARGC   equ 05B56H
BATCH_ARGV   equ 05B58H
BATCH_LINES  equ 05B5CH
BATCH_LN     equ 05B5AH
BATCH_PC     equ 05B5EH
BDOS_A       equ 0059DH
BDOS_FCX_A   equ 005AAH
BDOS_HL      equ 00594H
BINFILE      equ 04FEBH
BUILTINMAIN  equ 024C9H
CCAND        equ 001E7H
CCARGS       equ 00144H
CCASL        equ 00263H
CCASR        equ 00258H
CCCMP        equ 0021FH
CCCOM        equ 00270H
CCDIV        equ 00296H
CCDIVDENEG   equ 002D6H
CCEQ         equ 001FDH
CCERRSTACK   equ 0012BH
CCFALSE      equ 00334H
CCFLUSH      equ 00159H
CCFREEBYTES  equ 00166H
CCFREEFIRST  equ 00162H
CCFREELAST   equ 00164H
CCGC         equ 0017CH
CCGE         equ 00219H
CCGT         equ 0020BH
CCGW         equ 0018AH
CCLADR1SV    equ 001C8H
CCLADR2SV    equ 001B7H
CCLE         equ 00212H
CCLGAND      equ 001F4H
CCLGNOT      equ 00200H
CCLGOR       equ 001EEH
CCLT         equ 0020CH
CCMOD        equ 00291H
CCMUL        equ 0027FH
CCNE         equ 00207H
CCNEG        equ 00277H
CCOR         equ 001D9H
CCPW         equ 001AFH
CCRTADR      equ 00100H
CCSTACKSIZE  equ 00200H
CCSUB        equ 0026BH
CCSWTCH      equ 00317H
CCSXT        equ 0017DH
CCTMPW       equ 001B5H
CCTRUE       equ 00331H
CCUASL       equ 00263H
CCUASR       equ 0024DH
CCUCMP       equ 00243H
CCUDIV       equ 002E3H
CCUDIV_CNT   equ 00316H
CCUDIV_TMP   equ 00314H
CCUGE        equ 00236H
CCUGT        equ 0023CH
CCULE        equ 0022FH
CCULT        equ 0023DH
CCUMOD       equ 002DEH
CCUMUL       equ 0027FH
CCXGB        equ 0016DH
CCXGC        equ 00179H
CCXGW        equ 00187H
CCXOR        equ 001E0H
CCXPB        equ 00194H
CCXPW        equ 001A3H
CDMAIN       equ 0254CH
CLEARMAIN    equ 025CDH
CMDADD       equ 03547H
DIRTODRVUSR  equ 0502BH
ECHOMAIN     equ 026C9H
ENVADD       equ 02929H
ENVDEL       equ 02948H
ENVFIND      equ 028FCH
ENVGET       equ 02910H
ENVMAIN      equ 02763H
ENVPRINT     equ 028E9H
ERROR        equ 050B6H
ERRORAMB     equ 05188H
ERRORCLOSE   equ 0516DH
ERRORCREATE  equ 05140H
ERRORDELETE  equ 05149H
ERRORDIR     equ 05137H
ERRORFATAL   equ 05101H
ERRORFINDVA  equ 051B5H
ERRORFNAME   equ 0512EH
ERRORILL     equ 05125H
ERRORMEM     equ 05164H
ERRORNOFILE  equ 051A3H
ERROROPEN    equ 05152H
ERROROPT     equ 0511CH
ERRORPARS    equ 05113H
ERRORREAD    equ 05176H
ERRORREDIR   equ 051ACH
ERRORRENAME  equ 0515BH
ERRORTOOLON  equ 0519AH
ERRORTOOMAN  equ 05191H
ERRORWRITE   equ 0517FH
EXECOMMAND   equ 03963H
EXECUTE      equ 03AF7H
EXEREDIR     equ 036A3H
EXEREDIRSTO  equ 0390EH
EXEVARS      equ 0358BH
EXITMAIN     equ 02961H
FALSEMAIN    equ 02979H
FCLOSE       equ 0136FH
FEOF         equ 013F6H
FERROR       equ 01412H
FGETC        equ 010D8H
FGETS        equ 01523H
FNISAMB      equ 043B1H
FNISDIR      equ 04395H
FOPEN        equ 00DD8H
FPRINTF      equ 01B85H
FPUTC        equ 01230H
FREAD        equ 0142EH
FREE         equ 00CDFH
FWRITE       equ 014B1H
GETCH        equ 00348H
GETCHAR      equ 00359H
GETCLOCK     equ 01BE5H
GETDATE      equ 01C95H
GOTOMAIN     equ 0298BH
HISTMAIN     equ 02A43H
HOOKEXIT     equ 053EDH
IFEXIST      equ 02DA2H
IFGETARG     equ 02DCEH
IFMAIN       equ 02B33H
ISALNUM      equ 0051AH
ISALPHA      equ 004E3H
ISDIGIT      equ 004F6H
ISLOWER      equ 0052FH
ISSPACE      equ 045EBH
ISUPPER      equ 00523H
ISXDIGIT     equ 00502H
KBHIT        equ 00351H
KEYADD       equ 0481CH
KEYALLOC     equ 04604H
KEYCOUNT     equ 0479BH
KEYCOUNT1ST  equ 047E3H
KEYDEL       equ 0491EH
KEYFIND      equ 04708H
KEYFREE      equ 04653H
KEYGET       equ 04765H
KEYPRINT     equ 046A3H
LOADPRL      equ 051BEH
LOADSTATUS   equ 04CF4H
LONGJMP      equ 02112H
MAKEFCX      equ 043F2H
MALLOC       equ 00B9FH
MEMCMP       equ 00577H
MEMCPY       equ 00566H
MEMHEAP      equ 02E9FH
MEMMAIN      equ 02DF5H
MEMSET       equ 00551H
PARSEARGS    equ 0449EH
PF_CF        equ 01998H
PF_DEC       equ 019BBH
PF_END       equ 01B64H
PF_HEX       equ 01AADH
PF_OUT       equ 01B50H
PF_S         equ 01B30H
PF_SF        equ 018F9H
PF_UDEC      equ 01A56H
PRINTCWD     equ 05044H
PRINTF       equ 01B67H
PROFILE      equ 04089H
PROMPT       equ 03F96H
PUTCH        equ 00338H
PUTCHAR      equ 00362H
PUTS         equ 003B8H
PUTSTR       equ 00371H
PWDMAIN      equ 02F02H
RAND         equ 020E3H
READFILE     equ 0496AH
READLINE     equ 03415H
READMAIN     equ 02F1FH
REMOVE       equ 0159DH
RENAME       equ 01606H
RTCOMPFCX    equ 0424EH
RTEXPANDFCX  equ 040C8H
RTPRINTFCX   equ 042F0H
RTSORTFCX    equ 04183H
RUNPOP       equ 03EC2H
RUNPUSH      equ 03E31H
SAVESTATUS   equ 04D07H
SETCLOCK     equ 01C04H
SETDATE      equ 01E09H
SETFCX       equ 00621H
SETJMP       equ 02105H
SETJMP_RT    equ 05952H
SETJMP_SP    equ 05954H
SETUPCPM     equ 04CBDH
SHIFTMAIN    equ 03057H
SKIPSPACES   equ 04069H
SPRINTF      equ 01BB7H
SRAND        equ 020FDH
STDERR       equ 0593AH
STDIN        equ 05936H
STDOUT       equ 05938H
STRCAT       equ 003E7H
STRCHR       equ 00410H
STRCMP       equ 003F5H
STRCPY       equ 003D7H
STRLEN       equ 003CAH
STRUPR       equ 00420H
SV_ALIAS_NA  equ 05980H
SV_ALIAS_VA  equ 05982H
SV_BATCH     equ 05990H
SV_CMD_FUN   equ 05A42H
SV_CMD_MAX   equ 059E0H
SV_CMD_NAME  equ 059E2H
SV_CPMVER    equ 0595EH
SV_DIR_ALIA  equ 05986H
SV_DIR_PATH  equ 05984H
SV_DMA       equ 059DCH
SV_DRIVE     equ 05960H
SV_ED_BUF    equ 05AA6H
SV_ENV_NAME  equ 0597CH
SV_ENV_VALU  equ 0597EH
SV_FCX       equ 05992H
SV_FCXBUF    equ 059DEH
SV_FCX_TWO   equ 059B7H
SV_FLG_BUF   equ 0598AH
SV_FLG_CPM   equ 0598EH
SV_FLG_HIST  equ 05988H
SV_FLG_QUIT  equ 0598CH
SV_HIST      equ 0597AH
SV_NAME      equ 05956H
SV_PIPE_IN   equ 05B26H
SV_PIPE_OUT  equ 05B3CH
SV_RUN_EXIT  equ 05AA4H
SV_RUN_NAME  equ 05AA2H
SV_TMP_FN    equ 05964H
SV_USER      equ 05962H
SV_VER_DATE  equ 0595CH
SV_VER_MAIN  equ 05958H
SV_VER_SEQ   equ 0595AH
SX_EXIT_COD  equ 05B54H
SX_EXIT_JPB  equ 05B52H
TERMCOLS     equ 04E1DH
TERMROWS     equ 04DFBH
TERMVAL      equ 04E3FH
TMPFILE      equ 04FC7H
TOLOWER      equ 00546H
TOUPPER      equ 0053BH
TRUEMAIN     equ 0307FH
UNPARSE      equ 04BA6H
UNPARSEEX    equ 04BBBH
UPDATEHIST   equ 03EFDH
UXCHDIR      equ 00AEAH
UXFIELD      equ 00976H
UXGETDRVUSR  equ 007D8H
UXGETPATH    equ 00A8DH
UXPAD        equ 008B8H
XBIOS        equ 00341H
XD_GETBCD    equ 020A3H
XD_ISLEAP    equ 02064H
XD_MDAYS     equ 05409H
XD_SETBCD    equ 020C2H
XFGETC       equ 011AAH
XFNAMB       equ 016A7H
XFPFEND      equ 01BB6H
XFPFOUT      equ 01BA0H
XFPUTC       equ 012E0H
XM_END       equ 0593EH
XM_TOP       equ 0593CH
XPFEND       equ 01B84H
XPFOUT       equ 01B7BH
XPF_CNT      equ 05945H
XPF_DPT      equ 0594EH
XPF_DST      equ 05947H
XPF_END      equ 01B65H
XPF_ERR      equ 05940H
XPF_FA       equ 05943H
XPF_FW       equ 05941H
XPF_FZ       equ 05944H
XPF_OUT      equ 01B52H
XPRINTF      equ 016D4H
XSPFEND      equ 01BDFH
XSPFOUT      equ 01BD2H
XS_SEED      equ 05950H
#endasm 
