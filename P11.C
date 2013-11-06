/*  A PROGRAM TO CHECK FOR LEAP YEAR*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\n ENTER THE YEAR=");
	scanf("%d",&year);
	if(year%4==0)
	{
	printf("\n YES IT IS A LEAP YEAR");
	}
	else
	{
	printf("\n IT IS NOT A LEAP YEAR");
	}
	getch();
}