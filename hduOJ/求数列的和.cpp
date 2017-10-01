#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		float a=n*n,sum=0;
		while(m--)
		{
			a=sqrt(a);
			sum+=a;
		}
		printf("%.2f\n",sum);
	}
	return 0;
}