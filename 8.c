#include<stdio.h>
int count=0,i;
  char a[100],
  printf("enter the string");
  scanf("%s",a);
  for(i=0;a[i]'\0';i++)
  {
    if(a[i]=='')
    {
      if(a[i+1]=='a'&&a[i+1]=='z'&&a[i+1]=='A'&&a[i+1]='Z')
    {
      count++;
    }
    break;
    if(count==0)
    {
      printf("%s",a);
    }

  }

}
