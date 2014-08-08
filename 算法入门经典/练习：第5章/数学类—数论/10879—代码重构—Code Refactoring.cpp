#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
	int N;
	scanf("%d", &N);
	for(int cnt=0; cnt<N; cnt++)
	{
		int K, A, B, C, D;
		scanf("%d", &K);
		for(int i=2; i*i<K; i++)
		{
			if(K%i==0)
			{
				A = i; B = K/A;
				for(int j=i+1; j*j<K; j++)
				{
					if(K%j==0)
					{
						C = j; D = K/C;
						break;
					}
				}
				break;
			}
		}
		printf("Case #%d: %d = %d * %d = %d * %d\n", cnt+1, K, A, B, C, D);
	}
	return 0;
}
