#include<stdio.h>
void main()
{
    char a[10000];
    int n,i;
    clrscr();
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    printf("%d",n);
    getch();
}
