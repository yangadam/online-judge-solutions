#include <cstdio>
#include <cmath>
using namespace std;

int x[15], y[15];

double area(int a, int b, int c)
{
	return fabs(0.5*((y[c]-y[a])*(x[b]-x[a]) - (y[b]-y[a])*(x[c]-x[a])));
}

int main()
{
	int n;
	while(scanf("%d", &n) && n)
	{
		double max = 0;
		int o, p, q;
		for(int i=0; i<n; i++)
			scanf("%s%d%d", &x[i], &x[i], &y[i]);
		for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
		for(int k=j+1; k<n; k++)
		{
			bool flag = true;
			double s = area(i, j, k);
			for(int l=0; l<n; l++) if(l!=i && l!=j && l!=k)
				if(s == area(l, i, j) + area(l, j, k) + area(l, k, i))
				{
					flag = false;
					break;
				}
			if(flag && s>max)
			{
				max = s;
				o = i; p = j; q = k;
			}	
		}
		printf("%c%c%c\n", 'A'+o, 'A'+p, 'A'+q);
	}
	return 0;
}
