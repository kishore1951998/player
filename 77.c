#include<stdio.h>
void main()
{
int n,a[100],m,i,c=0;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<n;i++)
{
if(a[i]>m)
{
m=a[i];
c++;
}
}
printf("%d",c);
}
