#include<stdio.h>
int main()
{
	int m,n;
	long long x, y;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int temp;
		x=0;y=0;
		if(m>n)
		{
			temp=m;
			m=n;
			n=temp;
		}
		for(int i=m;i<=n;i++)
		{
			if(i%2==0)
				x+=i*i;
			else
				y+=i*i*i;
		}
		printf("%lld %lld\n",x,y);
	}
	return 0;
}