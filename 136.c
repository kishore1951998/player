#include<stdio.h>
int main()
{
    int n,a[100],k,i,m=0;
    printf("Enter the value");
    scanf("%d",&n);
    printf("Enter the value");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        m++;
    }
}
if(m!=0)
{
    printf("yes ");
    printf("%d",m);
}
return 0;
}
