#include<stdio.h>
int main() 
{
   int n,k,i=0,t=0,a[10000];
   printf("Enter n and k value");
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
       for(i=0;i<n;i++)
       {
           if(a[i]==k)
           {
               t++;
               break;
           }
       }
       if(t!=0)
       printf("yes");
       else
       printf("no");
       return 0;
}
