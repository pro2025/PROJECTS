#include<stdio.h>
#include<conio.h>
void main()
{
int min,i,n,a[4];
clrscr();
for(i=0;i<=4;i++)
{
printf("The value is:%d",i);
scanf("%d",&n);
min=a[0];
a[i]=n;
if(a[i]<min)
{
min=a[i];
}
}
printf("Minimum value in array is %d",min);
getch();
}