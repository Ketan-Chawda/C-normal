/*  A PROGRAM FOR REVERSING THE INPUTTED NUMBER*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k;
	clrscr();
	printf("\n ENTER THE NUMBER=");
	scanf("%d",&n);
	while(n>0)
	{
	k=n%10;
	printf("%d",k);
	n=(n-k)/10;
	}
	getch();
}

