#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	unsigned n;
	while(scanf("%u", &n) && n)
	{
		unsigned m = (unsigned)sqrt((double)n);
		if(m*m == n)
			puts("yes");
		else
			puts("no");
	}
	return 0;
}
