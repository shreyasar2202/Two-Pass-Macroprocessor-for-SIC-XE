% {
  #include<stdio.h>

  #include<stdlib.h>

  #include<string.h>

  #include "data_structures.h"

  extern FILE * yyin;
  extern FILE * yyout;
  extern char * yytext;
  extern int yyleng;
  struct namtab NAMTAB[100];
  char DEFTAB[2000][200];
  struct argtab ARGTAB[100];
  int count = 0;
  int line_count = 0;
  void check(char s[50]);
  void addarg(char s[50]);
  void replacecall(char text[50]);
  char * replaceWord(const char * s,
    const char * oldW,
      const char * newW);
  void changelabel();
  char head[100];
  int head_count = 0;
  int linecount = 0;
  int argtabcount = 0; //no of macro calls
  int defnparametercount = 0;
  int defnreplacecount = 0; //expand defn
  int pass_no = 1;
  char unique[2] = "AA";
  void addlbl(char str[50]);
  void checkforlabel(char str[50], int c);
  int labelcnt = 0;
  void removeSubstring(char * s,
    const char * toremove);
  void addvariable(char s[50]);

  struct variabletable {
    char varname[50];
    int varvalue;
  }
  vartable[50];
  int varcount = 0; %
}

%
token START END MACRO MEND OPRTYPE1 OPRTYPE2 OPRTYPE3 REGOPR REG TYPE1 LABEL COM WS MACROPARAM WORD BYTE RESERVE MACROCALL CONCATPARAM OPRTYPE4 EQU ORG IF ENDIF SMAC
  %
  %
  S: E;
E: START {
  if (pass_no == 2) {
    fprintf(yyout, "%s", yytext);
  }
}
STAT1 END {
  if (pass_no == 2) {
    fprintf(yyout, "%s", yytext);
  }
};
STAT1: ST STAT1 | ;
ST: REGOPR {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  OPRTYPE1 {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  TYPE1 {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  OPRTYPE2 {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  BYTE {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  WORD {
    if (pass_no == 1) {
      addvariable(yytext);
    } else if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  RESERVE {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  EQU {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  ORG {
    if (pass_no == 2) {
      fprintf(yyout, "%s", yytext);
    }
  } |
  SINGMAC |
  MAC | {
    if (pass_no == 1) addarg(yytext);
  }
MACROCALL {
  if (pass_no == 2) replacecall(yytext);
};
SINGMAC: {
  if (pass_no == 1) {
    removeSubstring(yytext, " MACRO\n");
    check(yytext);
    defnparametercount = 0;
    strcpy(NAMTAB[count].name, yytext);
    strcpy(head, yytext);
    head_count += yyleng + 1;
    strcat(head, " ");
    labelcnt = 0;
    NAMTAB[count].defStart = line_count;
  }
}
SMAC {
  if (pass_no == 1) {
    strcpy(DEFTAB[line_count], head);
    line_count++;
    head_count = 0;
  }
}
STAT2 {
  if (pass_no == 1) {
    strcpy(DEFTAB[line_count], yytext);
    line_count++;
  }
}
MEND {
  if (pass_no == 1) {
    NAMTAB[count].defEnd = line_count - 1;
    count++;
  }
}
MAC: {
  if (pass_no == 1) {
    check(yytext);
    defnparametercount = 0;
    strcpy(NAMTAB[count].name, yytext);
    strcpy(head, yytext);
    head_count += yyleng + 1;
    strcat(head, " ");
    labelcnt = 0;
    NAMTAB[count].defStart = line_count;
  }

}
LABEL WS MACRO WHITE PARAMS {
  if (pass_no == 1) {
    strcpy(DEFTAB[line_count], head);
    line_count++;
    head_count = 0;
  }
}
STAT2 {
  if (pass_no == 1) {
    strcpy(DEFTAB[line_count], yytext);
    line_count++;
  }
}
MEND {
  if (pass_no == 1) {
    NAMTAB[count].defEnd = line_count - 1;
    count++;
  }
};
STAT2: {
  if (pass_no == 1) {
    strcpy(DEFTAB[line_count], yytext);
    if (strstr(yytext, ":")) addlbl(yytext);
    line_count++;
  }
}
ST2 STAT2
  |
  {
    if (pass_no == 1) {
      NAMTAB[count].label_count = labelcnt;
    }
  };
WHITE: WS | ;
PARAMS: {
  if (pass_no == 1) {
    strcat(head, yytext);
    head_count += yyleng;
    if (yytext[yyleng - 1] == ',')
      strncpy(NAMTAB[count].params[defnparametercount], yytext, yyleng - 1);
    else strcpy(NAMTAB[count].params[defnparametercount], yytext);
    defnparametercount++;
  }
}
MACROPARAM PARAMS
  |
  {
    if (pass_no == 1) {
      NAMTAB[count].no_of_parameters = defnparametercount;
    }
  };
ST2: REGOPR |
  OPRTYPE1 |
  OPRTYPE2 |
  OPRTYPE3 |
  OPRTYPE4 |
  CONCATPARAM |
  IF |
  ENDIF |
  TYPE1; %
%
int main() {
  int kk;
  if (yyin = fopen("test.txt", "r"))

    yyparse();
  printf("NAMTAB:\n\n");
  int i;
  printf("Macro Name\tStart\tEnd\tNo of parameters\tParameters\n");
  for (i = 0; i < count; i++) {
    printf("%s\t\t%d\t %d\t%d\t", NAMTAB[i].name, NAMTAB[i].defStart, NAMTAB[i].defEnd, NAMTAB[i].no_of_parameters);
    for (kk = 0; kk < NAMTAB[i].no_of_parameters; kk++)
      printf("%s", NAMTAB[i].params[kk]);
    printf("\n");
  }
  printf("\n\nDEFTAB:\n");
  printf("\nIndex\t Statement");
  for (i = 0; i < line_count; i++) {
    printf("\n%d\t %s", i, DEFTAB[i]);
  }
  fclose(yyin);
  fopen("test.txt", "r");
  pass_no = 2;
  yyout = fopen("output.txt", "w");
  //Pass2
  yyparse();
}

int yyerror() {
  printf("Error");
}

void check(char s[50]) {
  int i;
  for (i = 0; i < count; i++) {
    if (strcmp(s, NAMTAB[i].name) == 0) {
      yyerror();
      printf(" : Macro %s already defined\n", s);
      exit(0);
    }
  }
}
void addarg(char s[50]) {
  int j = 0;
  char * p = strstr(s, ":");
  char name[50];
  char param[50];
  int paramcount = 0;
  if (p != NULL) {
    int i = 1;
    while (p[i] != ' ' && p[i] != '\n') {
      name[i - 1] = p[i];
      i++;
    }
    name[i - 1] = '\0';
    i++; //to move 1 step after space
    strcpy(ARGTAB[argtabcount].macroname, name);

    while (p[i] != '\0') {
      j = 0;
      while (p[i] != ',' && p[i] != '\n') {
        param[j] = p[i];
        j++;
        i++;
      }
      param[j] = '\0';
      strcpy(ARGTAB[argtabcount].params[paramcount], param);

      paramcount++;
      i++;

    }
    ARGTAB[argtabcount].number = paramcount;
    argtabcount++;
  } else {
    p = s;
    int i = 0;
    while (p[i] != ' ' && p[i] != '\n') {
      name[i] = p[i];
      i++;
    }
    name[i] = '\0';
    i++; //to move 1 step after space
    strcpy(ARGTAB[argtabcount].macroname, name);

    while (p[i] != '\0') {
      j = 0;
      while (p[i] != ',' && p[i] != '\n') {
        param[j] = p[i];
        j++;
        i++;
      }
      param[j] = '\0';
      strcpy(ARGTAB[argtabcount].params[paramcount], param);
      paramcount++;
      i++;

    }
    ARGTAB[argtabcount].number = paramcount;
    argtabcount++;
  }
}
void replacecall(char text[50]) {
  int c;
  char name[50];
  char temp[50];
  char temp2[50];
  char temp4[50];
  int j;
  char * result;
  char * lab;
  char * lab2;
  char temp3[50];
  int flag = 0;
  int flag_if = 1;
  int labelchangeflag = 0;
  strcpy(name, ARGTAB[defnreplacecount].macroname);
  for (c = 0; c < count; c++) {
    if (strcmp(NAMTAB[c].name, name) == 0) {
      defnreplacecount++;
      break;
    }
  }
  if (c == count) return;
  if (ARGTAB[defnreplacecount - 1].number != NAMTAB[c].no_of_parameters) printf("number mismatch");
  if (lab = strstr(text, ":")) {
    int p = 0;
    while ( & text[p] != lab + 1) {
      fprintf(yyout, "%c", text[p]);
      p++;
    }
  }

  int startIndex = NAMTAB[c].defStart;
  int endIndex = NAMTAB[c].defEnd;
  int index;
  for (index = startIndex + 1; index <= endIndex - 1; index++) {
    flag = 0;
    if (strstr(DEFTAB[index], "ENDIF\n")) {
      flag_if = 1;
      continue;
    }
    if (flag_if == 0) {
      continue;
    }
    strcpy(temp, DEFTAB[index]);
    strcpy(temp3, unique);
    if (lab2 = strstr(temp, ":")) {
      strncpy(temp2, temp, lab2 - & temp[0] + 2);
      temp2[lab2 - & temp[0] + 1] = '\0';
      strcat(temp3, temp2);
      strcat(temp3, lab2 + 1);
      strcpy(temp, temp3);
      labelchangeflag = 1;

    }
    checkforlabel(temp, c);

    for (j = 0; j < NAMTAB[c].no_of_parameters; j++) {
      if (strstr(temp, NAMTAB[c].params[j])) {
        result = replaceWord(temp, NAMTAB[c].params[j], ARGTAB[defnreplacecount - 1].params[j]);

        if (strstr(result, "->")) {
          removeSubstring(result, "->");
        }
        if (strstr(temp, "IF ")) {
          flag_if = evaluatecondition(result);
          flag = 1;
          break;
        }
        fprintf(yyout, "%s", result);
        flag = 1;

        break;
      }
    }

    if (flag == 0) fprintf(yyout, "%s", temp);

  }
  if (labelchangeflag == 1) {
    changelabel();
  }

}
char * replaceWord(const char * s,
  const char * oldW,
    const char * newW) {
  char * result;
  int i, cnt = 0;
  int newWlen = strlen(newW);
  int oldWlen = strlen(oldW);

  // Counting the number of times old word
  // occur in the string
  for (i = 0; s[i] != '\0'; i++) {
    if (strstr( & s[i], oldW) == & s[i]) {
      cnt++;

      // Jumping to index after the old word.
      i += oldWlen - 1;
    }
  }

  // Making new string of enough length
  result = (char * ) malloc(i + cnt * (newWlen - oldWlen) + 1);

  i = 0;
  while ( * s) {
    // compare the substring with the result
    if (strstr(s, oldW) == s) {
      strcpy( & result[i], newW);
      i += newWlen;
      s += oldWlen;
    } else
      result[i++] = * s++;
  }

  result[i] = '\0';
  return result;
}
void changelabel() {
  if (unique[1] != 'Z') {
    unique[1] = unique[1] + 1;
  } else unique[0] = unique[0] + 1;
}
void addlbl(char s[50]) {
  char * ptr;
  char temp[50];
  ptr = strstr(s, ":");
  strncpy(temp, s, ptr - & s[0]);
  temp[ptr - & s[0]] = '\0';
  strcpy(NAMTAB[count].labels[labelcnt], temp);
  labelcnt++;
}
void checkforlabel(char temp[50], int num) {
  char t1[50];
  char t2[50];
  int x;
  char t3[50];
  char * p;
  strcpy(t3, unique);
  for (x = 0; x < NAMTAB[num].label_count; x++) { //strcpy(t1,NAMTAB[num].labels[x]);
    //strcat(t1," ");
    strcpy(t2, NAMTAB[num].labels[x]);
    strcat(t2, "\n");
    if (p = strstr(temp, t2)) {
      strcat(t3, t2);
      strncpy(t1, temp, p - & temp[0]);
      strcat(t1, t3);
      strcpy(temp, t1);
      break;
    }
  }
}
void removeSubstring(char * s,
  const char * toremove) {
  while (s = strstr(s, toremove))
    memmove(s, s + strlen(toremove), 1 + strlen(s + strlen(toremove)));
}

void addvariable(char s[50]) {
  char temp[50];
  char * p;
  char * q;
  p = strstr(s, " ");
  strncpy(temp, s, p - & s[0]);
  temp[p - & s[0]] = '\0';
  strcpy(vartable[varcount].varname, temp);
  q = strstr(p + 1, " ");
  removeSubstring(q, "\n");
  int val = atoi(q);
  vartable[varcount].varvalue = val;
  varcount++;
}
int evaluatecondition(char s[50]) {
  char * p;
  char * q;
  char * r;
  char * t;
  char temp[50];
  char operand[50];
  char value[50];
  int val;
  p = strstr(s, "(");
  q = strstr(p, " ");
  p = p + 1;
  strncpy(temp, p, q - p);
  temp[s - p - 1] = '\0';
  q = q + 1;
  r = strstr(q, " ");
  strncpy(operand, q, r - q);
  operand[r - q + 1] = '\0';
  r = r + 1;
  t = strstr(r, ")");
  strncpy(value, r, t - r);
  val = atoi(value);
  int i;
  for (i = 0; i < varcount; i++) {
    if (strcmp(vartable[i].varname, temp) == 0) {
      if (strcmp(operand, "EQ") == 0) {
        if (vartable[i].varvalue == val) {
          return 1;
        } else return 0;
      } else if (strcmp(operand, "NE") == 0) {
        if (vartable[i].varvalue != val) {
          return 1;
        } else return 0;
      } else if (strcmp(operand, "LE") == 0) {
        if (vartable[i].varvalue <= val) {
          return 1;
        } else return 0;
      } else if (strcmp(operand, "GT") == 0) {
        if (vartable[i].varvalue > val) {
          return 1;
        } else return 0;
      }
    }
  }
  return 0;
}
