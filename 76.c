#include<stdio.h>
void main()
{
    int n,a[100000],i,j=0,b[100000],k=0,c[1000000];
    printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    if(j<k)
    {
        for(i=0;i<j;i++)
        printf("%d",b[i]);
    }
    if(k<j)
    {
        for(i=0;i<k;i++)
        printf("%d",c[i]);
    }
    getch();
}
