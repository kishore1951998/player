#include<stdio.h>
void main()
{
    int a,i,s,m,y,x;
    printf("Enter the value");
    scanf("%d",&a);
    s=a;
    y=a;
    for(i=1;i<a;i++)
    {
        x=i;
        if(s%i==0)
        {
            m=y/x;
        if(m%2!=0)
            {
                printf("%d",x);
                break;
            }
        }
    }
}
