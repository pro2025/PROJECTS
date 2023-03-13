#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr;
int number;
clrscr();
printf("Any number:");
scanf("%d",&number);
ptr=&number;
//address of age
printf("address of number: %u\n",ptr);
//address of pointer
printf("address of pointer: %u\n",&ptr);
getch();
}
