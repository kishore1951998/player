#include<stdio.h>
int main()
{
    char a[1000];
    int n,i,j,k;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(a[i]>='1'&&a[i]<='9')
        {
            k=a[i]-48;
            for(j=0;j<k;j++)
            printf("%c",a[i-1]);
        }
    }
    return 0;
}
