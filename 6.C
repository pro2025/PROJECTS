#include<stdio.h>
#include<conio.h>
void main()
{
float m,p,e,cs,agg,percentage;
clrscr();
printf("Enter the marks of Maths:");
scanf("%f",&m);
printf("Enter the marks of English:");
scanf("%f",&e);
printf("Enter the marks of Physics:");
scanf("%f",&p);
printf("Enter the marks of computer science:");
scanf("%f",&cs);
agg=m+p+e+cs;
percentage=agg/4;
printf("Aggregrate Marks:%f\n",agg);
printf("Percentage:%f",percentage);
getch();
}