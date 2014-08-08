#include<stdio.h>
int main()
{
	int n,a,b;
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&a);
		for(int i=1;i<n;i++)
		{
			scanf("%d",&b);
			for(int j=(a>b)?a:b;j<=a*b;j++)
				if(j%a==0&&j%b==0)
				{
					a=j;
					break;
				}
		}
		printf("%d\n",a);
	}
	return 0;
}