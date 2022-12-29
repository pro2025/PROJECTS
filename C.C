#include<stdio.h>
#include<conio.h>
void main()
{
int x1,x2,x3,y1,y2,y3,m1,m2;
clrscr();
printf("Enter the point : ");
scanf("%d%d",&x1,&y1);
printf("\nEnter the point : ");
scanf("%d%d",&x2,&y2);
printf("\nEnter the point : ");
scanf("%d%d",&x3,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1==m2)
{
printf("\nThe points are in straight line");
}
else
{
printf("\nThe points are not in straight line");
}
getch();
}

