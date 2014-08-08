#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

char grid[6][6];
int n, Max, dir[4][2] = {{1, 0}, {-1, 0},{0, -1}, {0, 1}};

void mark(int x, int y, int* d, int* q, int& num) {
	int i=x+d[0], j=y+d[1];
	while ( i<n && i>=0 && j<n && j>=0 && grid[i][j]!='X') {
		if (grid[i][j] == '.') {
			grid[i][j] = '-';
			q[num++] = i*n + j;
		}
		i += d[0]; j += d[1];
	}
}

void search(int cur, int cnt) {
	int x = cur/n, y = cur%n, q[10], num = 0;
	grid[x][y] = '-';
	for (int i = 0; i < 4; i++)
		mark(x, y, dir[i], q, num);
	bool ok = false;
	for (int i = 0; i < n*n; i++) if (grid[i/n][i%n]=='.') {
		ok = true;
		search(i, cnt+1);
	}
	while (num--) grid[q[num]/n][q[num]%n] = '.';
	grid[x][y] = '.';
	if (!ok) Max = max(Max, cnt);
}

int main() {
	while (cin >> n && n) {
		memset(grid, 0, sizeof(grid));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> grid[i][j];
		Max = 0;
		for (int i = 0; i < n*n; i++) if (grid[i/n][i%n]=='.')
			search(i, 1);
		cout << Max << endl;
	}
	return 0;
}
