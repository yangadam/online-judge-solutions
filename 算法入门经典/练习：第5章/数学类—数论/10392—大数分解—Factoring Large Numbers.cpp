#include <cstdio>
#include <cstring>
using namespace std;

const int MAXN = 1000010;
int prime[400000];
bool flag[MAXN];

int get_prime()
{
    memset(flag, true, MAXN*sizeof(flag[0]));
    int cur = 0;
    for(int i = 2; i < MAXN; ++i)
	{
        if(flag[i])
			prime[cur++] = i;
        for(int j = 0; j<cur && i*prime[j]<MAXN; ++j)
		{
            flag[i*prime[j]] = false;
			if(i%prime[j] == 0)
				break;
		}
    }
	return cur;
}

int main()
{
	long long n;
	int len = get_prime();
	while(scanf("%lld", &n) && n!=-1)
	{
		for(int i=0; i<len && prime[i]<=n; ++i)
		{
			while(n%prime[i] == 0)
			{
				n /= prime[i];
				printf("    %d\n", prime[i]);
			}
		}
		if(n != 1) printf("    %lld\n", n);
		printf("\n");
	}
	return 0;
}
