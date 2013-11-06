/*  A PROGRAM TO CONVERT DECIMAL INTO BINARY*/
#include<stdio.h>
#include<conio.h>
void binary(int number);
void main()
{
	int n;
	clrscr();
	printf("\n ENTER THE DECIMAL NUMBER=");
	scanf("%d",&n);
	binary(n);
	getch();
}
void binary(int number)
{
	int r=0;
	if(number>0)
	{
	r=number%2;
	binary(number/2);
	}
	printf("\t%d",r);
}



