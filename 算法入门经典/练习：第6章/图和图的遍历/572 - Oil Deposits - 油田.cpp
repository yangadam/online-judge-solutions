#include <iostream>
#include <cstring>
using namespace std;

typedef char MAT[110][110];
MAT grid, vis;


void dfs(int i, int j)
{
	if (grid[i][j]!='@' || vis[i][j]) return;
	vis[i][j] = 'v';
	dfs(i-1, j-1);	dfs(i-1, j);	dfs(i-1, j+1);
	dfs(i, j-1);					dfs(i, j+1);
	dfs(i+1, j-1);	dfs(i+1, j);	dfs(i+1, j+1);
}

int main()
{
	int m, n;
	while (cin >> m >> n && m)
	{
		memset(vis, 0, sizeof(vis));
		memset(grid, 0, sizeof(grid));
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> grid[i+1][j+1];
		int cnt = 0;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)
				if (grid[i][j]=='@' && !vis[i][j])
					{ ++cnt; dfs(i, j);	}
		cout << cnt << endl;				
	}
	return 0;
}
