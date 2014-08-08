#include<cstdio>
#include<cmath>
using namespace std;

int step(int d)
{
	if(d == 0)
		return 0;
	int s = (int)sqrt(d);
	if(s*s == d)
		return 2*s - 1;
	else if(s*s + s >= d)
		return 2*s;
	else
		return 2*s + 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		printf("%d\n", step(y-x));
	}
	return 0;
}