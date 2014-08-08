#include<stdio.h>
int main()
{
	int T,t,n;
	scanf("%d",&T);
	t=T;
	while(t--)
	{
		scanf("%d",&n);
		int max,i,j,s[101],temp;
		s[0]=0;
		scanf("%d",&s[1]);
		for(i=2;i<=n;i++)
		{
			scanf("%d",&temp);
			s[i]=s[i-1]+temp;
		}
		max=s[1];
		int min=n+1,ii=0,jj=1;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
				max=(max>s[j]-s[i])?max:s[j]-s[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(s[j]-s[i]==max&&j-i<min)
				{
					ii=i;
					jj=j;
					min=j-i;
				}
			}
		}
		if(t!=0)
			printf("Case %d:\n%d %d %d\n\n",T-t,max,ii+1,jj);
		else
			printf("Case %d:\n%d %d %d\n",T-t,max,ii+1,jj);
	}
	return 0;
}
