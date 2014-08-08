#include <cstdio>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		printf("%5d -> ", n);
		int last = 1, temp;
		while(n)
		{
			temp = n*last;
			while(temp%100000 == 0)
				temp /= 100000;
			last = temp%100000;
			n--;
		}
		while(last%10 == 0)
			last /= 10;
		printf("%d\n", last%10);
	}
	return 0;
}
