#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main()
{
	int k;
	while(scanf("%d", &k) != EOF)
	{
		bool first = true;
		int cur, b;
		printf("q(x):");
		while(scanf("%d", &cur))
		{
			if(first)
			{
				b = cur;
				first = !first;
			}
			else
				b = cur+k*b;
			
			if(getchar() == '\n')
				break;
			printf(" %d", b);
		}
		printf("\nr = %d\n\n", b);
	}
	return 0;
}
