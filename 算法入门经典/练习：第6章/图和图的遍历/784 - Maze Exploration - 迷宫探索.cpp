#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char maze[50][100];

void dfs(int i, int j)
{
	if (maze[i][j]=='*' || maze[i][j]==' ')
	{
		maze[i][j] = '#';
		dfs(i, j-1);
		dfs(i, j+1);
		dfs(i-1, j);
		dfs(i+1, j);
	}
}

int main()
{
	int kase;
	cin >> kase; cin.ignore();
	while (kase--)
	{
		int cnt = 0;
		while (cin.getline(maze[cnt++], 81) && maze[cnt-1][0]!='_') ;
		for (int i=0; i<cnt; ++i)
			for (int j=0; j<strlen(maze[i]); ++j)
				if (maze[i][j] == '*') {
					dfs(i, j);
					break;
				}
		for (int i=0; i<cnt; ++i)
			cout << maze[i] << endl;
	}
	return 0;
}
