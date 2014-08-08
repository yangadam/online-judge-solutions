#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int N, B, H, W;
	while (scanf("%d%d%d%d", &N, &B, &H, &W) != EOF)
	{
		int min = 2e6;
		while (H--)
		{
			int p, a;
			bool isIn = false;
			scanf("%d", &p);
			for (int i = 0; i < W; i++)
			{
				scanf("%d", &a);
				if (N < a) isIn = true;
			}
			if (isIn)
			{
				int sum = p * N;
				min = (sum<B && sum<min) ? sum : min;
			}
		}
		if (min == 2e6) puts("stay home");
		else printf("%d\n", min);
	}
	return 0;
}
