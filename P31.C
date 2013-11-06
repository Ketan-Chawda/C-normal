#include<stdio.h>
#include<conio.h>
void main()
{
	char *str;
	int i,j;
	clrscr();
	printf("\n ENTER THE STRING=");
	scanf("%s",str);
	for(i=strlen(str);i>0;i--)
	{
	putchar('\n');
	for(j=0;j<i;j++)
	{
	printf("%c",str[j]);
	}
	}
	getch();
}


