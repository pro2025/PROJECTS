#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];
int b[100];
int c[100];
int i,n,m;
clrscr();
printf("Enter the array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the array size:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
c[i]=a[i];
}
for(i=0;i<m;i++)
{
c[i+n]=b[i];
}
printf("The merged array");
for(i=0;i<m+n;i++)
{
printf("\n%d",c[i]);
}
getch();
}