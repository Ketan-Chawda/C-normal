/*  A PROGRAM TO CHECK THE INPUTTED NUMBER IS PALINDROME*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,sum=0;
	clrscr();
	printf("\n ENTER THE NUMBER=");
	scanf("%d",&n);
	while(n>0)
	{
	k=n%10;
	printf("%d",k);
	n=(n-k)/10;
	}
	printf("%d",k);
	if(n==k)
	{
	printf("\n yes");
	}
	else
	{
	printf("\n no");
	}
	getch();
}

