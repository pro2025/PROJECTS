
#include<stdio.h>
#include<conio.h>
void main()
{
int max,i,n;
int a[3];
clrscr();
for(i=0;i<=3;i++)
{
printf("Enter the value :%d",i);
scanf("%d",&n);
max=a[0];
a[i]=n;
if(a[i]>max)
{
max=a[i];
}
}
printf("The maximum value of array:%d",max);
getch();
}
