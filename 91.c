#include <stdio.h>
int main()
{
  int n,r,bin=0,pow=1;
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%2;
    bin=r*pow+bin;
    n=n/2;
    pow=pow*10;
  }
  printf("%d",bin);
  return 0;
}
