#include<stdio.h>
int main()
{
	int score[51][6],m,n;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&score[i][j]);
		float aver,averm[5]={0};
		for(int i=0;i<n-1;i++)
		{
			aver=0;
			for(int j=0;j<m;j++)
				aver+=score[i][j];
			printf("%.2f ",aver/m);
		}
		aver=0;
		for(int j=0;j<m;j++)
			aver+=score[n-1][j];
		printf("%.2f\n",aver/m);
		for(int j=0;j<m-1;j++)
		{
			for(int i=0;i<n;i++)
				averm[j]+=score[i][j];
			printf("%.2f ",averm[j]/=n);
		}
		for(int i=0;i<n;i++)
			averm[m-1]+=score[i][m-1];
		printf("%.2f\n",averm[m-1]/=n);
		int num=0;
		for(int i=0;i<n;i++)
		{
			int k=0;
			for(int j=0;j<m;j++)
			{
				if((float)score[i][j]>=averm[j])
					k++;
			}
			if(k==m)
				num++;
		}
		printf("%d\n\n",num);
	}
	return 0;
}