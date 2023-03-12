#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s[100];
FILE *fp;
clrscr();
fp=fopen("firstfile.txt","w");
if(fp==NULL)
{
printf("File failed to open.");
}
else
{
printf("The file is now opened.\n");
printf("Enter the string:");
gets(s);
if(strlen(s)>0)
{
fputs(s,fp);
fputs("\n",fp);
}
}
fclose(fp);
printf("File now is closed.");
getch();
}
