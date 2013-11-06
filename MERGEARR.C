/* A PROGRAM TO MERGE TWO ARRAY AND THEN SORT IN ASCENDING ORDER*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ch,one[5],two[5],three[10];
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\n ENTER THE VALUE OF ARRAY ONE[%d]=",i);
	scanf("%d",&one[i]);
	printf("\n ENTER THE VALUE OF ARRAY TWO[%d]=",i);
	scanf("%d",&two[i]);
	three[i]=one[i];
	three[5+i]=two[i];
	}
	for(i=0;i<10;i++)
	{
	for(j=0;j<9;j++)
	{
	if(three[j]>three[j+1])
	{
	ch=three[j];
	three[j]=three[j+1];
	three[j+1]=ch;
	}
	}
	}
	for(i=0;i<10;i++)
	{
	printf("\n array[%d]=%d",i,three[i]);
	}
	getch();
}



