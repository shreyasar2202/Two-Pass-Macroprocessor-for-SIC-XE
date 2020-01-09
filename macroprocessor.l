%{
#include<stdio.h>
#include "y.tab.h"
#include "data_structures.h"
%}
REGOPR1 ("ADDR"|"SUBR"|"DIVR"|"MULR"|"COMPR"|"RMO")
REGOPR2 ("CLEAR"|"TIXR")
REG ("A"|"B"|"X"|"PC"|"SW"|"S"|"T"|"F")
OPR("ADD"|"ADDF"|"AND"|"COMP"|"COMPF"|"DIV"|"DIVF"|"J"|"JEQ"|"JGT"|"JLT"|"JSUB"|"LDA"|"LDB"|"LDF"|"LDL"|"LDS"|"LDX"|"LPS"|"MUL"|"MULF"|"OR"|"RD"|"STA"|"STB"|"STL"|"STS"|"STSW"|"STT"|"STX"|"TD"|"TIX"|"WD"|"SUB"|"LDT")
TYPE1 ("FIX"|"FLOAT"|"HIO"|"NORM"|"SIO"|"TIO")
LABEL ([A-Z][A-Z0-9]*)
WS ([" "]+|[\t]+)
NUM ([0-9]+)
%%
[A-Z][A-Z0-9]*" START "{NUM}\n {return START;}
"END "[A-Z][A-Z0-9]*\n return END;
"MACRO" return MACRO;
"MEND"\n return MEND;
"&"{LABEL}"," return MACROPARAM;
"&"{LABEL} return MACROPARAM;
"ORG"{WS}{NUM} return ORG;
"IF"{WS}"(&"{LABEL}{WS}("EQ"|"NE"|"LE"|"GT"){WS}{NUM}")"\n return IF;
"ENDIF"\n return ENDIF;
({LABEL}":"{WS}?)?{OPR}{WS}{LABEL}"&"{LABEL}"->"{NUM}\n return CONCATPARAM;
({LABEL}":"{WS}?)?"+"?{OPR}{WS}("#")?{LABEL}\n return OPRTYPE1;
({LABEL}":"{WS}?)?{OPR}{WS}"#"{NUM}\n return OPRTYPE2;
({LABEL}":"{WS}?)?{OPR}{WS}"&"{LABEL}\n return OPRTYPE3;
({LABEL}":"{WS}?)?{OPR}{WS}"="("X"|"C")"'""&"?{LABEL}"'"\n return OPRTYPE4;
({LABEL}":"{WS}?)?{REGOPR1}{WS}{REG}","{REG}\n {return REGOPR;}
({LABEL}":"{WS}?)?{REGOPR2}{WS}{REG}\n {return REGOPR;}
({LABEL}":"{WS}?)?{TYPE1}\n return TYPE1;
{REG} return REG;
{WS} return WS;
{LABEL}{WS}("RESW"|"RESB"){WS}{NUM}\n return RESERVE;
{LABEL}{WS}"EQU"{WS}({NUM}|"'"{LABEL}"'")\n return EQU;
{LABEL}{WS}"BYTE"{WS}({NUM}|"C'"[A-Z0-9]*"'"|"X'"[0-9]+"'")\n return BYTE;
{LABEL}{WS}"WORD"{WS}{NUM}\n return WORD;
[A-Z][A-Z0-9]* return LABEL;
{LABEL}{WS}"MACRO"\n {printf("mac : %s\n",yytext);return SMAC;}
({LABEL}":"{WS}?)?{LABEL}{WS}({LABEL}",")*{LABEL}\n {return MACROCALL;}
({LABEL}":"{WS}?){LABEL}\n return MACROCALL;
"," return COM;
. return yytext[0];
%%
int yywrap(){return 1;}

