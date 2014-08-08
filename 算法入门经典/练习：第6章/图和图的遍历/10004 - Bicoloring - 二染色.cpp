#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int G[210][210], c[210];

bool bfs(int u, int n)
{
	queue<int> q;
	q.push(u);
	c[u] = 1;
	while (!q.empty())
	{
		int cur = q.front(); q.pop();
		for (int v = 0; v < n; v++)
			if (G[cur][v])
			{
				if (!c[v])
				{
					q.push(v);
					c[v] = -1*c[cur];
				}
				else if (c[cur]*c[v] == 1)
					return false;
			}

	}
	return true;
}


int main()
{
	int n, l, x, y;
	while (cin >> n && n)
	{
		memset(G, 0, sizeof(G));
		memset(c, 0, sizeof(c));
		cin >> l;
		while (l--)
		{
			cin >> x >> y;
			G[x][y] = G[y][x] = 1;
		}
		cout << (bfs(0, n) ? "BICOLORABLE." : "NOT BICOLORABLE.") << endl;
	}
	return 0;
}