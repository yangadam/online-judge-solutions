#include<stdio.h>
#include<string.h>
const int maxn = 1000;
int f[maxn];

int main()
{
	int i, j, n;
	while(scanf("%d", &n) != EOF)
	{
		memset(f, 0, sizeof(f));
		f[0] = 1;
		int len = 0;
		for(i = 1; i <= n; i++)
		{//乘以i
			int c = 0;
			for(j = 0; j <= len; j++)
			{
				int s = f[j] * i + c;
				f[j] = s % 1000000;
				c = s / 1000000;
			}
			if(c)
				f[++len] = c;
		}
		printf("%d!\n", n);
		printf("%d", f[len]);
		for(i = len - 1; i >= 0; i--)
			printf("%06d", f[i]);
		printf("\n");
	}
	return 0;
}