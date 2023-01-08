#include<stdio.h>
#include<conio.h>
void main()
{
int a[50];
int n,i=n,c,b,sum=0,add=0;
clrscr();
printf("Enter how many numbers you want to store:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>0)
{
b=1;
sum=sum+b;
}
else if(a[i]<0)
{
c=1;
add=add+c;
}
}
printf("Number of positive Numbers: %d",sum);
printf("\nNumber of negative Numbers: %d",add);
getch();
}