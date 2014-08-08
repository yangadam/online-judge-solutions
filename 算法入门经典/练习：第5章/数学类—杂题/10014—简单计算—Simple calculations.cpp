#include<cstdio>
using namespace std;

int main()
{
	int cnt, n;
	scanf("%d", &cnt);
	while(cnt--)
	{
		double sum = 0, temp;
		scanf("%d%lf", &n, &temp);
		sum += n*temp;
		scanf("%lf", &temp);
		sum += temp;
		for(int i=n; i>0; i--)
		{
			scanf("%lf", &temp);
			sum -= 2*i*temp;
		}
		printf("%.2lf\n", sum/(n+1));
		if(cnt)
			printf("\n");
	}
	return 0;
}
