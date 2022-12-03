#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,r1,r2,d;
clrscr();
printf("Enter the value of a:");
scanf("%f",&a);
printf("Enter the value of b:");
scanf("%f",&b);
printf("Enter the value of c:");
scanf("%f",&c);
d=sqrt(b*b-4*a*c);
if (d>0)
{
r1=-b+d/(2*a);
r2=-b-d/(2*a);
printf("Real and Different Roots\n root1=%f and root2=%f",r1,r2);
}
else if(d==0)
{
r1=r2=-b/(2*a);
printf("Roots are equal\nroot1=root2=%f",r1,r2);
}
else
{
real part=-b/(2*a);
imagpart=d/(2*a);
printf("Roots are imaginary");
}
getch();
}