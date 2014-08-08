#include <iostream>
using namespace std;

int dfs()
{
	int g1, l1, g2, l2;
	cin >> g1 >> l1 >> g2 >> l2;
	if (!g1) g1 = dfs();
	if (!g2) g2 = dfs();
	if (g1 > 0 && g1*l1 == g2*l2)
		return g1 + g2;
	return -1;
}

int main()
{
	int kase;
	cin >> kase;
	while (kase--)
	{
		if (dfs() > 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		if (kase) cout << endl;
	}
	return 0;
}
