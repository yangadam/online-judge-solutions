#include <iostream>
#include <string>
using namespace std;

void dfs(string &str, int &n, int L)
{
	int nLen = str.length(), nHalf = (nLen + 1) / 2;
	for (char i = 'A', iEnd = L + 'A', m = 1; i < iEnd; i++) {
		str.push_back(i);
		for (m = 1; m <= nHalf; ++m)
			if (equal(str.end() - m, str.end(), str.end() - m * 2)) {
				m = 0;
				break;
			}
		if (m) {
			if (--n == 0) return;
			dfs(str, n, L);
			if (n == 0) return;
		}
		str.erase(nLen);
	}
}

int main(void)
{
	for (int n, L; cin >> n >> L && n != 0; )
	{
		string str;
		dfs(str, n, L);
		int nLen = str.length();
		for (size_t i = 4; i < str.length(); i += 5)
		{
			str.insert(str.begin() + i, i == 79 ? '\n' : ' ');
		}
		cout << str << '\n' << nLen << endl;
	}
	return 0;
}