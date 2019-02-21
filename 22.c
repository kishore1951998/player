#include <stdio.h>

int main()
{
   int n,k,i,g,a,b,r;
   scanf("%d%d",&n,&k);
   a=n;
   b=k;
   while(b)
   {
       r=a%b;
       a=b;
       b=r;
   }
   g=a;
   printf("%d",g);
    return 0;
}
