#include<stdio.h>
int main()
{
	int a[100],b,c=0,i,j;
	scanf("%d%d\n",&b,&j);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	/*for(i=0;i<b;i++)
	{
		if(a[i]==j)
		{
			printf("%d",a[i]);
			c=1;
			break;
		}
	}*/
	if(c==0)
	{
		for(i=0;i<b;i++)
	{
		if(a[i]>j)
		{
			printf("%d",a[i]);
			break;
		}
	}
}
return 0;
}
