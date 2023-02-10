#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int a;
char s1[25];
char s2[25];
clrscr();
printf("Enter the first string:");
gets(s1);
printf("Enter the second string:");
gets(s2);
a=strcmp(s1,s2);
if(a==0)
{
printf("Both the strings are equal");
}
else if(a<0)
{
printf("Second string is larger");
}
else if(a>0)
{
printf("First string is larger");
}
getch();
}
