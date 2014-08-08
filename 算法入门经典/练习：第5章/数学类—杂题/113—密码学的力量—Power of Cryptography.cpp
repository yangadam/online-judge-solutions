#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d", &n) == 1)
	{
		double p;
		scanf("%lf", &p);
		printf("%d\n", (int)(pow(p, 1.0/n)+0.5));
	}
	return 0;
}