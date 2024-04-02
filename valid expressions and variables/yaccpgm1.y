%{
	#include<stdio.h>
	#include<ctype.h>
%}
%token DIGIT
%%
* line:exp'\n' {printf("%d\n",$1);};
expr:expr'+'term{$$=$1'+'$3

