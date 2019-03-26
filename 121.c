#include <stdio.h>
int main()
{
	char a[100][100],z[100],c[10];
	int b,d,e,f,g,h,i,j,k=0;
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	scanf("%s",&a[i]);
	for(i=0;i<b;i++)
	{
		z[k]=a[i][0];
		k++;
	}
	c[0]=z[0];
	for(i=0;i<k;i++)
	{
		if(z[i]<c[0])
		{
			c[0]=z[i];
		}
	}
	for(i=0;i<k;i++)
	{
		if(z[i]==c[0])
		d=i;
	}
	printf("%s",a[d]);
  return 0;
}
