#include<stdio.h>
#define M 1000
long int MM[M][M],max;
long abs(long a)
{
	if(a<0)
		return -a;
	else
		return a;
}
int main()
{
	int m,n,p,q;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				scanf("%ld",&MM[i][j]);
		max=MM[0][0];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(abs(MM[i][j])>abs(max))
				{
					max=MM[i][j];
					p=i+1;
					q=j+1;
				}
			}
		}
		printf("%d %d %ld\n",p,q,MM[p-1][q-1]);
	}
	return 0;
}