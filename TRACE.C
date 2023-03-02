#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,c,a[100][100],sum=0;
clrscr();
printf("Enter rows and columns of matrix:");
scanf("%d%d",&r,&c);
if(r==c)
{
printf("Elements in matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Element at %d%d:",i,j);
scanf("%d",&a[i][j]);
}
}
printf("Matrix\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}


printf("elements in diagonal:\n");
for(i=0;i<r;i++)
{
printf("%d\n",a[i][i]);
}


for(i=0;i<r;i++)
{
sum=sum+a[i][i];
}

printf("Trace of matrix:%d",sum);
}
else
{
printf("Trace of non square matrix is not possible");
}
getch();
}