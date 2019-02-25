#include<stdio.h>
void main()
{
char a[200];
int i;
clrscr();
scanf("%[^\n]",a);
for (i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
printf("%c",a[i]);
}
}
}
