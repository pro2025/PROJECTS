#include<stdio.h>
#include<conio.h>
void main()
{
int month,day;
clrscr();
printf("Enter the day of birth(1 to 31): ");
scanf("%d",&day);
printf("Enter the month of birth(1 to 12): ");
scanf("%d",&month);
if(month==12 && day>=22 && day<=31 ||month==1 && day>=1 && day<=19)
printf("Zodiac sign is Capricorn");
else if(month==1 && day>=20 && day<=31 || month==2 && day>=1 && day<=17)
printf("Zodiac sign is Aquarius");
else if(month==2 && day>=18 && day<=29 || month==3 && day>=1 && day<=19)
printf("Zodiac sign is Pisces");
else if(month==3 && day>=20 && day<=31 || month==4 && day>=1 && day<=19)
printf("Zodiac sign is Aries");
else if(month==4 && day>=20 && day<=31 || month==5 && day>=1 && day<=20)
printf("Zodiac sign is Taurus");
else if(month==5 && day>=21 && day<=31 || month==6 && day>=1 && day<=20)
printf("Zodiac sign is Gemini");
else if(month==6 && day>=21 && day<=31 || month==7 && day>=1 && day<=22)
printf("Zodiac sign is Cancer");
else if(month==7 && day>=23 && day<=31 || month==8 && day>=1 && day<=22)
printf("Zodiac sign is Leo");
else if(month==8 && day>=23 && day<=31 || month==9 && day>=1 && day<=22)
printf("Zodiac sign is Virgo");
else if(month==9 && day>=23 && day<=31 || month==10 && day>=1 && day<=22)
printf("Zodiac sign is Libra");
else if(month==10 && day>=23 && day<=31 || month==11 && day>=1 && day<=21)
printf("Zodiac sign is Scorpio");
else if(month==11 && day>=22 && day<=31 || month==12 && day>=1 && day<=21)
printf("Zodiac sign is Sagittarius");
getch();
}















