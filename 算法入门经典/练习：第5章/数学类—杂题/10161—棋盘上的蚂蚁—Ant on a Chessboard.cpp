#include<stdio.h>
#include<math.h>
int main()
{
	int N;
	while(scanf("%d", &N) == 1 && N)
	{
		int n = (int)floor(sqrt((double)N)-1e-9)+1;
		int k = N - (n-1)*(n-1);
		int x = n%2 ? (k < n ? n : 2*n-k) : (k < n ? k : n);
		int y = n%2 ? (k < n ? k : n) : (k < n ? n : 2*n-k);
		printf("%d %d\n", x, y);
	}
	return 0;
}