#include<stdio.h>
void main()
{
    int n,m,a[100000],i;
    printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       m=m^a[i];
    }
    printf("%d",m);
    getch();
}
