#include<cstdio>
using namespace std;

int main()
{
	int z, i, m, l;
	int n = 1;
	while(scanf("%d%d%d%d", &z, &i, &m, &l) && m)
	{
		z = z%m;  
		i = i%m;
		int cur, p, cnt = 1;
		p = cur = (z*l + i) % m;
		while(cur != l)
		{
			cur = (z*cur + i) % m; 
			if(cur == p)
				break;
			cnt++;
		}
		printf("Case %d: %d\n", n++, cnt);
	}
	return 0;
} 

