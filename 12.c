#include <stdio.h>
int main()
{
	int n1,a[10],k,temp=0,i,j;
  clrscr();
	scanf("%d %d\n",&n1,&k);
	for(i=0;i<n1;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
	    temp=a[n1-1];
	    for(j=n1-1;j>=0;j--)
	    {
	       a[j]=a[j-1];
	    }
	    a[0]=temp;
	}
	for(i=0;i<n1;i++)
	{
	    printf("%d ",a[i]);
	}
	
	return 0;
}
