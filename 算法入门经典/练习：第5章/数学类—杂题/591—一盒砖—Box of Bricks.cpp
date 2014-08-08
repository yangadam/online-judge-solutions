#include<cstdio>
using namespace std;

int main()
{
	int n, num = 1;
	while(scanf("%d", &n) == 1 && n)
	{
		int h[100], aver = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &h[i]);
			aver += h[i];
		}
		aver /= n;
		int moves = 0;
		for(int i = 0; i < n; i++)
			if(h[i] > aver)
				moves += h[i] - aver;
		printf("Set #%d\nThe minimum number of moves is %d.\n", num++, moves);
		putchar(10);
	}
	return 0;
}