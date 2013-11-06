/*A PROGRAM TO DISPLAY PYRAMID */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n=5;
	clrscr();
	for(i=1;i<n;i++)
	{
	putchar('\n');
	for(k=1;k<i+1;k++)
	{
	printf("  %d",k);
	}
	for(j=i-1;j>0;j--)
	{
	printf("  %d",j);
	}
	}
	getch();
}

