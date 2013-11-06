/*A PROGRAM TO INPUT 5 STUDENTS MARKS N PRINT IN FOLLOWING FORMAT*/
#include<stdio.h>
#include<conio.h>
struct stud
{
	int id,sub[5],total;
	char name[10];
	float per;
}a[5];
void input();
void display();
void main()
{
	clrscr();
	input();
	display();
	getch();
}
void input()
{
	int i,j;
	for(i=0;i<3;i++)
	{
	printf("\n ENTER STUDENTS NAME=");
	scanf("%s",a[i].name);
	printf("\n ENTER STUDENTS ID=");
	scanf("%d",&a[i].id);
	a[i].total=0;
	for(j=0;j<5;j++)
	{
	printf("\n ENTER MARKS OF SUB[%d]=",j+1);
	scanf("%d",&a[i].sub[j]);
	a[i].total=a[i].total+a[i].sub[j];
	}
	a[i].per=(float)a[i].total/5;
	}
}
void display()
{
	int k,n,count;
	printf("\nNAME\tID\tSUB1\tSUB2\tSUB3\tSUB4\tSUB5\tTOTAL\tPERCENTAGE\tPOSITION\n");
	for(k=0;k<3;k++)
	{
	count=0;
	printf("\n%s\t%d",a[k].name,a[k].id);
	for(n=0;n<5;n++)
	{
	printf("\t%d",a[k].sub[n]);
	if(a[k].sub[n]>40)
	{
	count=count+1;
	}
	}
	printf("\t%d\t%f",a[k].total,a[k].per);
	if(count==5 && a[k].per>=70)
	{
	printf("\t DISTINCTION");
	}
	else
	if(count==5 && a[k].per>=60)
	{
	printf("\t FIRST CLASS ");
	}
	else
	if(count==5 && a[k].per>=50)
	{
	printf("\t SECOND CLASS");
	}
	else
	if(count==5 && a[k].per>=40)
	{
	printf("\t PASS CLASS");
	}
	else
	{
	printf("\t FAIL");
	}
	}
	}












