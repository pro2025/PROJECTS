#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char s[100];
clrscr();
fp=fopen("firstfile.txt","r");
if(fp==NULL)
{
printf("file is failed to open");
}
else
{
printf("File is now opened.");
printf("Enter the string:");
gets(s);
while(fgets(s,100,fp)!=NULL)
{
printf("%s",s);
}
}
fclose(fp);
printf("The file is closed.");
getch();
}

