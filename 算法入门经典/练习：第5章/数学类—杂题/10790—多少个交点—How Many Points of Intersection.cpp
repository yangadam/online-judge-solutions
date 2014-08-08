#include <cstdio>
using namespace std;

int main()
{
	long long a, b;
	int k = 0;
	while (scanf("%lld%lld", &a,&b) == 2 && (a || b))
		printf("Case %d: %lld\n", ++k, a*(a-1)*b*(b-1)/4);
	return 0;
}