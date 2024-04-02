%{
#include<stdio.h>
#undef yywrap
%}

%%
[A-Z]+	{printf("%s is uppercase\n", yytext);}
.|\n ;
%%

int main(){
	printf("Enter string: ");
	yylex();
}

int yywrap(){
	return 1;
}

