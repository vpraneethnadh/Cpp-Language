#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char m1[50],m2[50];
	int l=0,i,j;
	clrscr();
	printf("ENTER ANY STRING: ");
	gets(m1);
	l=strlen(m1);
	for(i=l-1,j=0;i>=0;i=i-1,j=j+1)
		m2[j]=m1[i];
	m2[j]='\0';
	puts(m2);
}