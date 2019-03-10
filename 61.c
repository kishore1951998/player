#include<stdio.h>

int main() {
    int a[100],k,s=0,n,i;
    printf("Enter the value");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    if(s==k)
    {
        printf("yes");
    }
    else if(s!=k)
    {
        printf("no");
    }
return 0;
}
