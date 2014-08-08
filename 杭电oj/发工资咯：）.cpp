#include<stdio.h>
int main()
{
	int n,a[101];
	while(scanf("%d",&n)!=EOF)
	{
		int num,sum=0;
		if(n==0)
			break;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			sum+=a[i]/100+a[i]%100/50+a[i]%50/10+a[i]%10/5+a[i]%5/2+a[i]%5%2;
		printf("%d\n",sum);		
	}
	return 0;
}