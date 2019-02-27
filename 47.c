#include<stdio.h>
int main()
{
    int a,b,c;
    clrscr();
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)||(a==c)||(b==c))
    printf("yes");
    else
    printf("no");
    return 0;
}
