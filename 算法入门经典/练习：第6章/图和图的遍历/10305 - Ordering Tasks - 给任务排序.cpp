#include <iostream>
#include <cstring>
using namespace std;

int n, m;
int G[110][110], t;
int vis[110], topo[110];

bool dfs(int u)
{
	vis[u] = -1;
	for (int v = 1; v <= n; v++) if (G[u][v])
	{
		if (vis[v] < 0) return false;
		else if (!vis[v] && !dfs(v)) return false;
	}
	vis[u] = 1;
	topo[--t] = u;
	return true;
}

bool toposort()
{
	t = n;
	memset(vis, 0, sizeof(vis));
	for (int u = 1; u <= n; u++) if (!vis[u])
		if (!dfs(u)) return false;
	return true;
}

int main()
{
	//退出条件为n+m，因为m可能为零
	while (cin >> n >> m && n + m)
	{
		memset(G, 0, sizeof(G));
		for (int i = 0; i < m; i++)
		{
			int pre, aft;
			cin >> pre >> aft;
			G[pre][aft] = 1;
		}
		toposort();
		cout << topo[0];
		for (int i = 1; i < n; i++)
			cout << ' ' << topo[i];
		cout << endl;
	}
	return 0;
}

