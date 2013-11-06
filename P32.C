#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *str1,*str2,*str,a,b;
	int i;
	clrscr();
	printf("\n enter first string=");
	scanf("%s",str1);
	strcpy(str," ");
	printf("\n enter second string=");
	scanf("%s",str2);
	for(i=0;i<strlen(str1);i++)
	{
	//strcpy(a,str1[i]);
	//strcpy(b,str2[i]);
	strcat(str,a);
	strcat(str,b);
	}
	printf("\n str=%s",str);
	getch();
}
