#include <iostream>
#include <cstring>
using namespace std;

char line[205][205];
int cnt;

void dfs(int row, int col) {
	for (int i = col; line[row-1][i] == '-' ; i++)
		if (line[row][i] != ' ' && line[row][i]) {
			cout << line[row][i] << '(';
			if (line[row+1][i] == '|') {
				int j = i;
				while (line[row+2][j-1] == '-') j--;
				dfs(row+3, j);
			}
			cout << ')';
		}
}

int main() {
	int kase;
	cin >> kase; cin.ignore();
	while (kase--) {
		memset(line, 0, sizeof(line));
		cnt = 1;
		while (cin.getline(line[cnt], 201) && line[cnt][0] != '#')
			++cnt;
		for (unsigned i=0; line[1][i]; i++)
			line[0][i] = '-';
		cout << '(';
		if ( cnt > 1) dfs(1, 0);
		cout << ')' << endl;
	}
	return 0;
}
