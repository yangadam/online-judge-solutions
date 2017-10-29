#include <cstdio>
using namespace std;

const int MAXN = 20 + 2;
int left[MAXN], right[MAXN];

void remove(int i)
{
	right[left[i]] = right[i];
	left[right[i]] = left[i];
}

int main()
{
	int N, k, m;
	while(scanf("%d%d%d", &N, &k, &m) && N)
	{
		for(int i=1; i<=N; i++)
		{
			left[i] = i-1;
			right[i] = i+1;
		}
		left[1] = N;
		right[N] = 1;
		int x = 1, y = N;
		while(N)
		{
			int lk = k, lm = m;
			while(lk--)
				x = right[x];
			while(lm--)
				y = left[y];
			int _x = left[x], _y = right[y];
			remove(_x);
			remove(_y);
			if(_x == _y)
			{
				printf("%3d", _x);
				N--;
			}
			else
			{
				printf("%3d%3d", _x, _y);
				if(_y == x)
					x = right[x];
				if(_x == y)
					y = left[y];
				N -= 2;
			}			
			if(N)
				printf(",");
		}
		printf("\n");
	}
	return 0;
}
