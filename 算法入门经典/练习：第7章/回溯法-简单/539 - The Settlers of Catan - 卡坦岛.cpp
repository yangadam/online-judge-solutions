#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int G[30][30];
int n, m, Max;

void search(int u, int cnt) {
	int ok = 0;
	for (int v = 0; v < n; v++) if (G[u][v]) {
		ok = 1;
		G[u][v] = G[v][u] = 0;
		search(v, cnt+1);
		G[u][v] = G[v][u] = 1;
	}
	if (!ok) Max = max(cnt, Max);
}

int main() {
	while (cin >> n >> m && m && n)
	{
		memset(G, 0, sizeof(G));
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			G[x][y] = G[y][x] = 1;
		}
		Max = 0;
		for (int i = 0; i < n; i++)
			search(i, 0);
		cout << Max << endl;
	}
	return 0;
}
