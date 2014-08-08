#include <cstdio>
#include <climits>
#include <cmath>
using namespace std;

int zero(int N,int base)
{
    int zero = INT_MAX;
    for(int i=2; i<=base; i++)
	{
		int fac1 = 0, fac2 = 0;
        while(base%i == 0)
		{
			fac1++;
			base /= i;
		}
        if(fac1 == 0) continue;
		for(int j=i; j<=N; j*=i)
			fac2 += N/j;
		if(zero > fac2/fac1)
			zero = fac2/fac1;
    }
    return zero;
}

int main()
{
    int N, base;
    while(scanf("%d%d", &N, &base) != EOF)
	{
		double sum = 0;
		for(int i=2; i<=N; i++)
			sum += log((double)i);
		int digits = (int)(sum/log((double)base) + 1e-6) + 1;
		printf("%d %d\n", zero(N, base), digits);
	}
    return 0;
}
