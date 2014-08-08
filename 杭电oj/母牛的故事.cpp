#include<stdio.h>
int main()
{
	int a[56]={0};
	a[1]=1,a[2]=1,a[3]=1,a[4]=1;
	for(int i=5;i<=55;i++)
		for(int j=1;j<=i-3;j++)
			a[i]+=a[j];
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=0;
		if(n==0)
			break;
		for(int i=1;i<=n;i++)
			sum+=a[i];
		printf("%d\n",sum);
	}
	return 0;
}