#include <stdio.h>
int main()
{
    int N,i,j,max,f;
    printf("Enter the value");
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			f=((a[i]) |	 (a[j]));
			if(f>max)
			{
				max=f;
			}
		}
	}
	printf("%d",max);
    return 0;
}
