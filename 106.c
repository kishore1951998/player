#include<stdio.h>
int main()
{
int i,a[100],h=0,k=0,b[100],j,n;
printf("Enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
h=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[k]=a[i];
k++;
h++;
a[j]='\0';
}
if(h!=0)
{
a[i]='\0';
}
}
}
for(i=0;i<k;i++)
{
if(b[i]!='\0')
printf("%d ",b[i]);
}
return 0;
}
