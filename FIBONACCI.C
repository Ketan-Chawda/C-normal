/* A PROGRAM TO DISPLAY FIBONACCI SERIES */
#include<stdio.h>
#include<conio.h>
void fib(int total);
void main()
{
	int n;
	clrscr();
	printf("\n ENTER THE NUMBER FOR FIBONACCI SERIES=");
	scanf("%d",&n);
	fib(n);
	getch();
}
void fib(int total)
{
	int i,a,b=0,c=1;
	for(i=0;i<total;i++)
	{
	a=b+c;
	printf("\n %d",a);
	c=b;
	b=a;
	}
}

