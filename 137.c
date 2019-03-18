#include<stdio.h>
int main()
{
	int a,r,b=0,i=1,c,d=0;
scanf("%d",&a);
while(a)
{
r=a%2;
a=a/2;
b=b+(i*r);
i=i*10;
}
while(b)
{
	c=b%10;
	d++;
	if(c==1)
	{
	  break;
	 }
	 b=b/10;
}
printf("%d",d);
return 0;
}
