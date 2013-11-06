/* A PROGRAM TO DISPLAY TABLE OF INPUTTED NUMBER*/
#include<stdio.h>
#include<conio.h>
void table(int total);
void main()
{
	int n;
	clrscr();
	printf("\n ENTER THE NUMBER WHOSE TABLE YOU WANT=");
	scanf("%d",&n);
	table(n);
	getch();
}
void table(int total)
{
	int i;
	for(i=1;i<=10;i++)
	{
	printf("\n%d * %d = %d",total,i,total*i);
	}
}

