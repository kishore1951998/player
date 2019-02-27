#include<stdio.h>
void main()
{
    int a,i;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }
}
