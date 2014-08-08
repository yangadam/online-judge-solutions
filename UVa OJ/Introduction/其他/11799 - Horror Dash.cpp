#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		int N, c, Max = 0;
		scanf("%d", &N);
		while (N--)
		{
			scanf("%d", &c);
			Max = Max>c ? Max : c;
		}
		printf("Case %d: %d\n", i, Max);
	}
	return 0;
}
