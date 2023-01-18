#include<stdio.h>
#include<conio.h>
void main()
{
int s[100];
int n,i,a,lb,ub,mid;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements in sorted manner:");
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
printf("Enter the value to find:");
scanf("%d",&a);
lb=0;
ub=n-1;
mid=(lb+ub)/2;
while(lb<=ub)
{
if(s[mid]<a)
lb=mid+1;
else if(s[mid]==a)
{
printf("found at location %d",mid+1);
break;
}
else
ub=mid-1;
mid=(lb+ub)/2;
}
if(lb>ub)
printf("Item is not found");
getch();
}

