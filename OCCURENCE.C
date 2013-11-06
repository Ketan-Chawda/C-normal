/* A PROGRAM TO COUNT THE OCCURENCE OF PARTICULAR CHARACTER IN A STRING */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s,*str;
	int count=0,i,a,b;
	clrscr();
	printf("\n ENTER THE STRING=");
	gets(str);
	printf("\n ENTER THE CHARACTER WHOSE OCCURENCE U WANT TO COUNT=");
	s=getchar();
	for(i=0;i<strlen(str);i++)
	{
	a=str[i];
	b=s;
	if(a==b)
	{
	count=count+1;
	}
	}
	printf("\n TOTAL OCCURENCE IS=%d",count);
	getch();
}


