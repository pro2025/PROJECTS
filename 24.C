#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=10;
clrscr();
while(i!=0)
{
printf("\nInput the password: ");
scanf("%d",&a);
if(a==1234)
{
printf("Correct password");
break;
}
else
{
printf("Incorrect password");
}
}
getch();
}
