#include <cstdio>
using namespace std;

int gcd(int a, int b)
{
	return b==0 ? a : gcd(b, a%b);
}

int main()
{
	int step, mod;
	while(scanf("%d%d", &step, &mod) != EOF)
	{
		printf("%10d%10d    ", step, mod);
		if(gcd(step, mod) == 1)
			puts("Good Choice\n");
		else
			puts("Bad Choice\n");
		
	}
	return 0;
}
