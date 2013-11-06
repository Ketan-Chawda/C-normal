/* A PROGRAM TO CHECK AGE OF PERSON IS ADULT,MINOR,MAJOR*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n ENTER THE AGE OF PERSON=");
	scanf("%d",&age);
	if(age<=0)
	{
	printf("\n ENTER PROPER AGE");
	}
	else
	if(age<18)
	{
	printf("\n THE PERSON IS ADULT");
	}
	else
	if(age>=18 && age <=30)
	{
	printf("\n THE PERSON COMES IN MINOR");
	}
	else
	if(age>30)
	{
	printf("\n THE PERSON COMES IN MAJOR");
	}
	getch();
}


