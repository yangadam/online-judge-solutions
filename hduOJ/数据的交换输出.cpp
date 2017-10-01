#include<stdio.h>
int main()
{
	int n,a[100];
	while(scanf("%d",&n)!=EOF)
	{
		int min;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		min=a[0];
		for(int i=0;i<n;i++)
			if(min>a[i])
				min=a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]==min)
			{
				a[i]=a[0];
				a[0]=min;
				break;
			}
		}
		for(int i=0;i<n-1;i++)
			printf("%d ",a[i]);
		printf("%d\n",a[n-1]);
	}
	return 0;
}