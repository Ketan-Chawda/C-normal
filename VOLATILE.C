/* A PROGRAM TO CHECK "volatile" KEYWORD */
#include<stdio.h>
#include<conio.h>
void main()
{
	//const float pi=3.14;
	volatile float pi=3.14;
	pi=5.6;
	clrscr();
	printf("%f",pi);
	getch();
}

