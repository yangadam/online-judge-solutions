#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	int m, n;
	while (scanf("%d%d", &m, &n), m || n)
	{
		int num;
		if (m == 1) num = n;
		else if (n == 1) num = m;
		else if (m == 2) num = (n+3)/4*4 - (!((n-1)%4)?2:0);
		else if (n == 2) num = (m+3)/4*4 - (!((m-1)%4)?2:0);
		else if (m * n == 4) num = 4;
		else if (m * n == 6) num = 4;
		else 
		  num = max(m*n/2, m*n - m*n/2);
		printf("%d knights may be placed on a %d row %d column board.\n", num, m, n);
	}
	return 0;
}
