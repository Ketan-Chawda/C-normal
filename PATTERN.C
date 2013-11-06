/*  A PROGRAM TO DISPLAY FOLLOWING PATTERNS*/
#include<stdio.h>
#include<conio.h>
void pattern(int total);
void main()
{
	int n;
	clrscr();
	printf("\n ENTER THE NUMBER=");
	scanf("%d",&n);
	pattern(n);
	getch();
}
void pattern(int total)
{
	int i,k=0,c=0;
	for(i=1;i<=total;i++)
	{
	if(k==c)
	{
	printf("%d\n",i*i);
	c=0;
	k=k+1;
	}
	else
	{
	c=c+1;
	printf("%d\t",i*i);
	}
	}
}




