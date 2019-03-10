#include <stdio.h>
int main()
{
    int n,i,k,n1,r,c=0,c1=0;
    printf("Enter the value");
    scanf("%d %d",&n,&k);
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        c1++;
        if(r>=0 && r<=k)
        {
            c++;
        }
        n1=n1/10;
    }
    if(c==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;
}
