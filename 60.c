#include<stdio.h>
int main()
{
    char a[100],b[100];
    int l=0,i;
    printf("Enter two strings : ");
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==b[i])
    {
        l++;
        break;
    }
        
    }
    if(l>0)
    printf("Yes");
    else
    printf("No");
    return 0;
}
