%{
#include<stdio.h>
#undef yywrap
%}

%%
[a e i o u]+	{printf("%s is a vowel\n", yytext);}
.	{printf("%s is  consonant\n", yytext);}
.|\n ;
%%

int main(){
	printf("Enter string: ");
	yylex();
}

int yywrap(){
	return 1;
}

