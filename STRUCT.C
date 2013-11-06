/* A PROGRAM OF STRUCTURE TO STORE CUSTOMERS INFORMATION */
#include<stdio.h>
#include<conio.h>
struct customer
{
	int id,amt;
	char name[20],date[10];
}s[4];
void input();
void display();
void main()
{
	//struct customer s[4];
	clrscr();
	input();
	display();
	getch();
}
void input()
{
	int i;
	for(i=0;i<2;i++)
	{
	printf("\n ENTER THE NAME=");
	scanf("%s",s[i].name);
	printf("\n ENTER THE AMOUNT=");
	scanf("%d",&s[i].amt);
	}
}
void display()
{
	int j;
	for(j=0;j<2;j++)
	{
	if(s[j].amt>15000)
	{
	printf("\n THE NAME IS=%s",s[j].name);
	printf("\n THE AMOUNT IS=%d",s[j].amt);
	}
	}
}






