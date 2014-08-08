#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	int kase;
	scanf("%d\n", &kase);
	while (kase--)
	{
		char type;
		int m, n;
		scanf("%c%d%d\n", &type, &m, &n);
		switch (type)
		{
		case 'r':
		case 'Q':
			 printf("%d\n", min(m, n));
			 break;
		case 'k':
			 printf("%d\n", max(m*n/2, m*n - m*n/2));
			 break;
		case 'K':
			 printf("%d\n", (m+1)/2*((n+1)/2));
			 break;
		}
	}
	return 0;
}
