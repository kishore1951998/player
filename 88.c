#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the value");
    scanf("%d %d",&n,&m);
    n=n>>m;
    printf("%d",n);
    return 0;
}
