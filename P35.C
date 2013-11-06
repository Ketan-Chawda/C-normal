/* A PROGRAM TO FIND INPUTED VALUE FROM ARRAY */
#include<stdio.h>
#include<conio.h>
void  main()
{
	int *array,find,i;
	clrscr();
	for(i=0;i<10;i++)
	{
	printf("\n ENTER ARRAY[%d]=",i+1);
	scanf("%d",&array[i+1]);
	}
	printf("\n ENTER VALUE TO SEARCH");
	scanf("%d",&find);
	for(i=0;i<10;i++)
	{
	if(array[i+1]==find)
	{
	printf("\n yes");
	break;
	}
	else
	{
	printf("\n no");
	break;
	}
	}
	getch();
}


