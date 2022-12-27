#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float degree,radian;
float p=3.14159265;
clrscr();
printf("Enter the degree:\n");
scanf("%f",&degree);
radian=degree*(p/180.0);
printf("sin(%f)=%f\n",degree,sin(radian));
printf("cos(%f)=%f\n",degree,cos(radian));
printf("tan(%f)=%f\n",degree,tan(radian));
printf("cosec(%f)=%f\n",degree,1/sin(radian));
printf("sec(%f)=%f\n",degree,1/cos(radian));
printf("cot(%f)=%f\n",degree,1/tan(radian));
getch();
return 0;
}
