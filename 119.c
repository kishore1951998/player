#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
char hex[32]={0};
int dec,i;
int cnt;
int d; 
printf("Get the value");
gets(hex);
cnt=0;
dec=0;
for(i=(strlen(hex)-1);i>=0;i--)
{
switch(hex[i])
{
case 'A':
d=10; break;
case 'B':
d=11; break;
case 'C':
d=12; break;
case 'D':
d=13; break;
case 'E':
d=14; break;
case 'F':
d=15; break;
default:
d=hex[i]-0x30;
}
dec= dec+ (d)*pow((double)16,(double)cnt);
cnt++;
}

printf("%d",dec);
return 0;
}
