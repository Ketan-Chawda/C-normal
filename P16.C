/*A PROGRAM TO CALCULATE GROSS SALARY */
#include<stdio.h>
#include<conio.h>
void main()
{
	float bs,da,hra,pf,gs;
	clrscr();
	printf("\n ENTER BASIC SALARY OF EMPLOYEE=");
	scanf("%f",&bs);
	if(bs<5000)
	{
	da=bs*.2;
	hra=bs*.02;
	pf=100;
	}
	else
	if(bs<10000)
	{
	da=bs*.3;
	hra=bs*.05;
	pf=300;
	}
	else
	if(bs>=10000)
	{
	da=bs*.4;
	hra=bs*.01;
	pf=500;
	}
	gs=bs+hra+da-pf;
	printf("\nBASIC\t\tHRA\tDA\tPF\tGS\n");
	printf("\n%4.2f\t\t%4.2f\t%4.2f\t%4.1f\t%f",bs,hra,da,pf,gs);
	getch();
}


