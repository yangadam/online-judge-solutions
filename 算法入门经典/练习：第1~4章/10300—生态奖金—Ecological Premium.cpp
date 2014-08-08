#include<stdio.h>
int main()
{
	int t,m,n,p,q,i,j,sum;
	scanf("%d",&t);
	for(i = 0; i < t; i++)
	{
		sum = 0;
		scanf("%d",&m);
		for(j = 0; j < m; j++)
		{
			scanf("%d%d%d", &n, &p, &q);
			sum += n * q;
		}
		printf("%d\n", sum);
	}
	return 0;
}