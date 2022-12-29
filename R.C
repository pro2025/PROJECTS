#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y,r,d,e,x1,y1,a,b;
clrscr();
printf("Enter the coordinates of centre of circle:");
scanf("%d%d",&x,&y);
printf("Enter the radius of the circle:");
scanf("%d",&r);
printf("Enter the point:");
scanf("%d%d",&x1,&y1);
a=x1-x;
b=y1-y;
d=sqrt(a*a+b*b);
if(d<r)
{
printf("The point lies inside the circle");
}
else if(e==r)
{
printf("The point lies on centre");
}
else
{
printf("The point lies outside the circle");
}
getch();
}

