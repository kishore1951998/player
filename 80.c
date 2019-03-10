#include<stdio.h>
void main()
{
int a[100],b[100],n,i,j,k=0,g,m;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
g=0;
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
g=a[i]-a[j];
}
else 
{
g=a[j]-a[i];
}
b[k]=g;
k++;
}
}
m=b[0];
for(i=k-1;i=0;i--)
{
if(b[i]<m)
{
m=b[i];
}
}
printf("%d",m);
}
