/* A PROGRAM TO CHECK WHETHER NUMBER IS ARMSTRONG OR NOT*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,k,sum=0,store;
	clrscr();
	printf("\n ENTER THE NUMBER=");
	scanf("%d",&n);
	store=n;
	while(n>0)
	{
	k=n%10;
	sum=sum+pow(k,3);
	n=(n-k)/10;
	}
	if(sum==store)
	{
	printf("\n yes,the number is armstrong");
	}
	else
	{
	printf("\n no,the number is not armstrong");
	}
	getch();
}

