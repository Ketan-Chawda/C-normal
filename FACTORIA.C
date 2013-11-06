/* A PROGRAM FOR GETTING THE FACTORIAL OF INPUTED NUMBER */
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int num;
	clrscr();
	printf("\n ENTER THE NUMBER WHOSE FACTORIAL YOU WANT=");
	scanf("%d",&num);
	printf("\n THE FACTORIAL IS=%d",fact(num));
	getch();
}
int fact(int n)
{
	if(n>1)
	{
	return n*fact(n-1);
	}
}

