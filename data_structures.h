#include<stdio.h>
struct namtab
{
char name[50]; //name of macro
int defStart; //starting index in deftab
int defEnd;	//ending e=index in deftab
int no_of_parameters; //number of paramaters in the macro definition
char params[50][50]; //paramets of the macro definition
char labels[50][50]; //labels used in the macro
int label_count; //number of labels used in the macro
};

char DEFTAB[2000][200];	

struct argtab
{
	char macroname[50];	//name of the macro
	char params[50][50]; //parameters passed to the macro
	int number;	//number of parameters passed to the macro
	
};