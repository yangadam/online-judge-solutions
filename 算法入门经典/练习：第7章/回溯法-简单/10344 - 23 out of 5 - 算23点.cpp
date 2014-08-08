#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int num[5], vis[5];

bool search(int cur, int sum)
{
	if (cur == 5) return sum==23;
	for (int i = 0; i < 5; i++) if (!vis[i])
	{
		vis[i] = 1;
		if (search(cur+1, sum+num[i])) return true;
		if (search(cur+1, sum-num[i])) return true;
		if (search(cur+1, sum*num[i])) return true;
		vis[i] = 0;
	}
	return false;
}

int main()
{
	while (cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4])
	{
		bool ok = false;
		memset(vis, 0, sizeof(vis));
		if (num[0]+num[1]+num[2]+num[3]+num[4] == 0) break;
		for (int i = 0; i < 5; i++)
		{
			vis[i] = 1;
			if (search(1, num[i])) { ok = true; break; }
			vis[i] = 0;
		}
		
		cout << (ok ? "Possible" : "Impossible") << endl;
	}
	return 0;
}
