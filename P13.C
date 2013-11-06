/*A PROGRAM TO FIND LARGEST VALUE FROM THREE NUMBERS*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int v1,v2,v3;
	clrscr();
	printf("\n ENTER THREE VALUES RESPECTIVELY:");
	scanf("%d%d%d",&v1,&v2,&v3);
	if(v1>v2 && v1>v3)
	{
	printf("\n FIRST VALUE IS GREATER");
	}
	else
	if(v2>v1 && v2>v3)
	{
	printf("\n SECOND VALUE IS GREATER");
	}
	else
	if(v3>v2 && v3 >v1)
	{
	printf("\n THIRD VALUE IS GREATER");
	}
	/*else
	if(
	{
	printf("\n THERE IS TWO SAME VALUE");
	*/
	getch();
}



