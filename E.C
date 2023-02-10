#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int a;
char name[25];
clrscr();
printf("Enter the string:");
gets(name);
printf("Length of the string: %d",strlen(name));
getch();
}