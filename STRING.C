/* A PROGRAM TO COUNT NUMBER OF WORDS,CHARACTERS AND DIGITS*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void words(char *str);
void count(char *str);
void main()
{
	char *abc;
	clrscr();
	printf("\n ENTER THE SENTENCE=");
	gets(abc);
	words(abc);
	count(abc);
	getch();
}
void words(char *str)
{
	int i,c=0,a,b;
	for(i=0;i<strlen(str);i++)
	{
	a=str[i];
	b=str[i+1];
	if(a==32 && b!=32)
	{
	c=c+1;
	}
	}
	printf("\n THERE ARE TOTAL=%d WORDS",c+1);
}
void count(char *str)
{
	int k,digits=0,characters,d;
	for(k=0;k<strlen(str);k++)
	{
	d=str[k];
	if(d>=48 && d<=57)
	{
	digits++;
	}
	else
	{
	characters++;
	}
	}
	printf("\n THERE ARE TOTAL %d DIGITS",digits);
	printf("\n THERE ARE TOTAL %d CHARACTERS",characters);
}











