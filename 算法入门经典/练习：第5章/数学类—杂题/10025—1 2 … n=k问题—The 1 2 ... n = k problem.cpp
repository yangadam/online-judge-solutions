#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int k;
		scanf("%d", &k);
		if(k == 0)
			printf("3\n");
		else
		{
			if(k < 0)
				k = -k;
			int sum = 0, cnt = 0;
			while(sum < k)
				sum += ++cnt;
			int d = sum - k;
			if(d % 2 == 0)
				printf("%d\n", cnt);
			else
			{
				for(int j = cnt + 1; ; j++)
				{
					d += j;
					if(d % 2 == 0)
					{
						printf("%d\n",j);
						break;
					}
				}
			}
		}
		if(n)
			putchar(10);
	}
	return 0;
}