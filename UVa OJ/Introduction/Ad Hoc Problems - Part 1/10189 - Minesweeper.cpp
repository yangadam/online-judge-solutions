#include <cstdio>
using namespace std;

int main()
		{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	int m, n, kase = 0;
	while (scanf("%d%d", &m, &n) && m && n)
	{
		if (kase) putchar(10);
		char grid[100][100] = {0};
		printf("Field #%d:\n", ++kase);
		for (int i = 0; i < m; i++)
		  for (int j = 0; j < n; j++)
			scanf("\n%c", &grid[i][j]);
		for (int i = 0; i < m; i++)
		{
		  for (int j = 0; j < n; j++)
		  {
				if (grid[i][j] == '*')
				{
					putchar('*');
					continue;
				}
				int num = 0;
				if (i-1>=0 && j-1>=0 && grid[i-1][j-1]=='*') num++;
				if (i-1>=0 && grid[i-1][j]=='*') num++;
				if (i-1>=0 && j+1<n && grid[i-1][j+1]=='*') num++;
				if (j+1<n && grid[i][j+1]=='*') num++;
				if (i+1<m && j+1<n && grid[i+1][j+1]=='*') num++;
				if (i+1<m && grid[i+1][j]=='*') num++;
				if (i+1<m && j-1>=0 && grid[i+1][j-1]=='*') num++;
				if (j-1>=0 && grid[i][j-1]=='*') num++;
				printf("%d", num);
		  }
		  putchar(10);
		}
	}
	return 0;
}
