/*  A PROGRAM TO CHECK "BREAK" STATEMENT */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,y;
	clrscr();
	switch(n)
	{
		case 1:
		{
		printf("\n yes, 1 st if");
		//break;
		}
		case 2:
		{
		printf("\n yes, 2 nd if");
		break;
		}
		case 3:
		{
		printf("\n yes, 3 rd if");
		}
	}
	/*if(n==1)
	{
	printf("\n yes, 1 st if");
	}
	else
	if(n==1)
	{
	printf("\n yes, 2 nd if");
	}
	else
	if(n==1)
	{
	printf("\n yes, 3 rd if");
	}*/
	getch();
}


