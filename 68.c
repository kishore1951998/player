#include<stdio.h>
void main()
{
int a[100],b[100],n,i,j,k=0,c=0,m;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=i;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c!=0)
{
b[k]=c;
k++;
}
}
m=b[0];
for(i=0;i<n;i++)
{
if(b[i]>m)
{
m=b[i];
}
}
printf("%d",m);
}
