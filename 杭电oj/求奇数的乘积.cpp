#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m,mul=1;
		while(n--)
		{
			scanf("%d",&m);
			if(m%2==1)
				mul*=m;
		}
		printf("%d\n",mul);
	}
	return 0;
}