#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,a[100],i=0,j,k,count=0;
    clrscr();
    printf("Enter the value");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            if(a[j]==a[k])
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
