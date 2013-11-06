/* TO CHECK "STATIC","EXTERN","AUTO","REGISTER" */
#include<stdio.h>
#include<conio.h>
void simple();
int v3;
void main()
{
	auto int v1;
	static int v2;
	register int v4;
	clrscr();
	printf("\n v1=%d v2=%d v3=%d v4=%d",v1,v2,v3,v4);
	getch();
}

