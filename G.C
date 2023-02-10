#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char s1[25];
char s2[25];
clrscr();
printf("Enter the first string:");
gets(s1);
printf("Enter the second string:");
gets(s2);
printf("After concantenate: %s",strcat(s1,s2));
getch();
}