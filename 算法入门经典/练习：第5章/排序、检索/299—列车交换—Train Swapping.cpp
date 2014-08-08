#include<stdio.h>
#define MAXN 10000
int s[MAXN];
int main()
{
	int m;
	scanf("%d", &m);
	while(m--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d", &s[i]);
		int num = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n-i-1; j++)
			{
				if(s[j] > s[j+1])
				{
					num++;
					int temp = s[j];
					s[j] = s[j+1];
					s[j+1] = temp;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", num);
	}
	return 0;
}