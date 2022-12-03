#include<stdio.h>
#include<conio.h>
void main()
{
float km,m,cm,ft,inc;
clrscr();
printf("Enter the distance between the cities in km:");
scanf("%f",&km);
m=1000*km;
cm=100000*km;
ft=3280.84*km;
inc=39370.08*km;
printf("Distance between cities in feet:%f\n",ft);
printf("Distance between cities in meter:%f\n",m);
printf("Distance between cities in centrimeter:%f",cm);
printf("Distance between cities in inches:%f\n",inc);
getch();
}