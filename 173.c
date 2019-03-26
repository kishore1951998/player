#include<stdio.h>
int main()
{
	char a[200],b[200];
	int c,d,e=0,f,g,h,i,j=0,k;
	gets(a);
	gets(b);
	c=strlen(a);
	d=strlen(b);
	for(i=0;i<c;i++)
	{
		if(a[i]==b[j])
		{
			a[i]='\0';
			j++;
			e++;
		}
	}
	for(i=0;i<e;i++)
	{
		if(a[i]!='\0')
		printf("%c",a[i]);
	}
return 0;
}
