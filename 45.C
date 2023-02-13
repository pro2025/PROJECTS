#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct data
{
int marks;
char name[10];
}a,b;
int main()
{
int x;
clrscr();
printf("Enter your student 1 name: ");
scanf("%s",&a.name);
printf("Enter your student 1 marks: ");
scanf("%d",&a.marks);
printf("Enter your student 2 name: ");
scanf("%s",&b.name);
printf("Enter your student 2 marks: ");
scanf("%d",&b.marks);
printf("Enter 1 for student 1 name and marks\n");
printf("Enter 2 for student 2 name and marks: ");
scanf("%d",&x);
switch(x)
{
case 1:
printf("Name=%s\n",a.name);
printf("Marks=%d",a.marks);
break;
case 2:
printf("Name=%s\n",b.name);
printf("Marks=%d",b.marks);
break;
default:printf("Wrong Choice");
break;
}
getch();
return 0;
}
