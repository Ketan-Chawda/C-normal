/* A PROGRAM TO FIND MAXIMUM VALUE */
#include<stdio.h>
#include<conio.h>
void  main()
{
	int *array,max=0,i;
	clrscr();
	for(i=0;i<10;i++)
	{
	printf("\n ENTER ARRAY[%d]=",i+1);
	scanf("%d",&array[i+1]);
	if(array[i+1]>max)
	{
	max=array[i+1];
	}
	}
	printf("\n MAXIMUM VALUE IS=%d",max);
	getch();
}


