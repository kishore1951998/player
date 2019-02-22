#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,h=0,g;
    scanf("%s",a);
    //printf("%s",a);
    g=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            h++;
        }
    }
    if(h==g)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        
    getch();
}
