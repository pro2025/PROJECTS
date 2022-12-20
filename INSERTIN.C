#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,value;
int a[100];
clrscr();
printf("Enter the number of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the location:\n");
scanf("%d",&k);
printf("Enter the value to be inserted:\n");
scanf("%d",&value);
for(i=n;i>=k;i--)
{
a[i]=a[i-1];
}
a[k-1]=value;
n++;
printf("Array after the insertion\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}