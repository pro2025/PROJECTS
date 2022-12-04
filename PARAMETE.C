#include<stdio.h>
#include<conio.h>
void main()
{
float length,breadth,radius,area,perimeter,circumference;
clrscr();
printf("Length of Rectangle:\n");
scanf("%f",&length);
printf("Breadth of Rectangle:\n");
scanf("%f",&breadth);
printf("Radius of circle:\n");
scanf("%f",&radius);
area=length*breadth;
perimeter=2*(length+breadth);
circumference=2*3.14*radius ;
printf("Area of rectangle:%f\n",area);
printf("Periemeter of rectangle:%f\n",perimeter);
printf("circumference of circle:%f\n",circumference);
getch();
}