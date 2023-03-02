#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],rev[100];
int i,j=0,b;
clrscr();
printf("Enter the string:");
gets(str);
b=strlen(str);
for(i=b-1;i>=0;i--)
{
rev[j++]=str[i];
}
printf("Reverse of string: %s",rev);
getch();
}