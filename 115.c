#include<stdio.h>
#include<string.h>
int main() 
{
   char a[100];
   int b,c,d,e,i,j,k;
   printf("Get the character");
   gets(a);
   b=strlen(a);
   for(i=0;i<b;i++)
   {
       if(a[i]==' ')
       c=i;
   }
   d=b-c;
   if(c>d)
   {
       for(i=0;i<d;i++)
       printf("%c",a[i]);
   }
   for(i=c+1;i<b;i++)
   printf("%c",a[i]);
   return 0;
}  
