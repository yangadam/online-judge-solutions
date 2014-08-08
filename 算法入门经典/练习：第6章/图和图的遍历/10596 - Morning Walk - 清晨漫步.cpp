#include <iostream>
#include <cstring>
using namespace std;

int G[210][210], degree[210];
int N, R, vis[210], sum;

//判断图的连通性
void dfs(int u)
{
	sum++;
	vis[u] = 1;
	for (int v = 0; v < N; v++)
		if (G[u][v] && !vis[v])
			dfs(v);
}

//判断是否存在欧拉回路
bool euler()
{
	for (int i=0; i<N; i++)
		if (!degree[i] || degree[i] & 1)
			return false;
	return true;
}

int main()
{
	while (cin >> N >> R)
	{
		memset(G, 0, sizeof(G));
		memset(degree, 0, sizeof(degree));
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < R; i++)
		{
			int x, y; cin >> x >> y;
			G[x][y] = G[y][x] = 1;
			degree[x]++; degree[y]++;
		}
		sum = 0; dfs(0);
		if (R>1 && euler() && sum==N)
			cout << "Possible" << endl;
		else
			cout << "Not Possible" << endl;	
	
	}
	return 0;
}

