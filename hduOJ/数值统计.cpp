#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		float m;
		int zero=0,zheng=0,fu=0;
		while(n--)
		{
			scanf("%f",&m);
			if(m>0)
			{
				zheng++;
				continue;
			}
			if(m<0)
			{
				fu++;
				continue;
			}
			zero++;
		}
		printf("%d %d %d\n",fu,zero,zheng);
	}
	return 0;
}