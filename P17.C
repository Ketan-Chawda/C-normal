/* A PROGRAM TO CHECK WHETHER INPUTED CHARACTER IS VOWEL OR NOT*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s;
	clrscr();
	printf("\n ENTER A SINGLE CHARACTER TO CHECK FOR VOWELS=");
	s=getchar();
	//printf("\n %c",s);
	if(s=='a' | s=='i' | s=='o' | s=='e' | s=='u')
	{
	printf("\n yes");
	}
	else
	{
	printf("\n no");
	}
	getch();
}

