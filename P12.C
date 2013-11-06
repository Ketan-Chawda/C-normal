/* A PROGRAM TO CHECK FOR ZERO,POSITIVE,OR NEGATIVE */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("\n ENTER THE NUMBER=");
	scanf("%d",&n);
	if(n>0)
	{
	printf("\n THE NUMBER IS POSITIVE");
	}
	else
	if(n<0)
	{
	printf("\n THE NUMBER IS NEGATIVE");
	}
	else
	{
	printf("\n THE NUMBER IS ZERO");
	}
	getch();
}


