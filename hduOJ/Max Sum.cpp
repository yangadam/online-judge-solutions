#include<stdio.h>
int a[100000];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
	{
		int N,i,j,sta,end;
		getchar();
		scanf("%d",&N);
		for(int n=0;n<N;n++)
			scanf("%d",&a[n]);
		int max=a[0],sum;
		for(i=0;i<N-1;i++)
		{
			sum=0;
			for(j=i;j<N;j++)
			{
				sum+=a[j];
				if(sum>max)
				{
					max=sum;
					sta=i+1;
					end=j+1;
				}
			}
		}
		printf("Case %d:\n",t);
		printf("%d %d %d\n\n",max,sta,end);
	}
	getchar();
	getchar();
	return 0;
}