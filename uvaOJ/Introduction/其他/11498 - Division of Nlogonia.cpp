#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int K;
	while (scanf("%d", &K) && K)
	{
		int N, M;
		scanf("%d%d", &N, &M);
		while (K--)
		{
			int X, Y;
			scanf("%d%d", &X, &Y);
			if (X == N || Y == M)
				puts("divisa");
			else
			{
				if (Y > M) printf("N");
				else if (Y < M)printf("S");
				if (X > N) puts("E");
				else if (X < N) puts("O");
			}
		}
	}
	return 0;
}
