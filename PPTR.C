#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int *ptr;
int **pptr;
clrscr();
printf("Enter the number:");
scanf("%d",&i);
ptr=&i;
pptr=&ptr;
//pointer to pointer conversation//
printf("value is: %d",**pptr);
getch();
}
