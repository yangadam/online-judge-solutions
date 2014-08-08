#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int MAX = 60;
char s[110][70];
int order[110][30];
int cmp(const void *_a, const void *_b)
{
	char *a = (char*)_a;
	char *b = (char*)_b;
	return strcmp(a, b);
}
int main()
{
	int n;
	while(scanf("%d", &n) == 1)
	{
		memset(order, -1, sizeof(order));
		int max = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%s", s[i]);
			if(max < strlen(s[i]))
				max = strlen(s[i]);
		}
		if(max > 58) max = 58;
		qsort(s, n, sizeof(s[0]), cmp);
		int v = MAX / (max + 2), r = (n-1)/v + 1;
		for(int i = 0; i < MAX; i++)
			printf("-");
		putchar(10);
		for(int i = 0; i < n; i++)
			order[i%r][i/r] = i;
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < v; j++)
			{
				if(order[i][j] == -1)
					break;
				printf("%-*s", max+2, s[order[i][j]]);
			}
			printf("\n");
		}
	}
	return 0;
}