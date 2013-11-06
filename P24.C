/* A PROGRAM TO ADD FIRST SEVEN TERMS OF FOLLOWING SERIES*/
#include<stdio.h>
#include<conio.h>
float factorial(float num);
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\n ENTER THE NUMBER UPTILL WHOSE SUM YOU WANT=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum=(i/factorial(i))+sum;
	}
	printf("\n THE SUM IS=%d",sum);
	getch();
}
float factorial(float num)
{
	if(num>1)
	{
	return num*factorial(num-1);
	}
	/*else
	{
	return 1;
	}*/
}




