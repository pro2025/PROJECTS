#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,c[3][3];
clrscr();
printf("Enter the matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("Second matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("After adding");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",c[i][j]);
printf("\n");
}
}
getch();
}