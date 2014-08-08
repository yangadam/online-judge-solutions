#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		long long int s2, r2, s3, r3, s4, r4;
		long long int m = n*(n+1)/2; 
		s2 = m*(2*n+1)/3;
		s3 = m*m;
		s4 = m*(2*n+1)*(6*m-1)/15;
		r2 = m*m - s2;
		r3 = m*m*m - s3;
		r4 = m*m*m*m - s4;
		printf("%lld %lld %lld %lld %lld %lld\n", s2, r2, s3, r3, s4, r4);
	}
	return 0;
}
