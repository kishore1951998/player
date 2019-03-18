#include<stdio.h>
void main()
{
int n,s=0,a[100],i;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("%d",s);
}
