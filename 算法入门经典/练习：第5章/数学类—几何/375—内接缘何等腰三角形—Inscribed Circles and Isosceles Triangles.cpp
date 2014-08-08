#include<cstdio>
#include<cmath>
using namespace std;

const double pi = acos(-1.0);

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		double B, H;
		scanf("%lf%lf", &B, &H);
		double L = sqrt(H*H + B*B/4), rate = B/(B + 2*L);
		double h = H, r = rate*h;
		while(r >= 0.000001)
		{
			h = h - 2*r;
			r = h*rate;
		}
		printf("%13.6lf\n", pi*(H-r/rate));
		if(n) putchar('\n');
	}
	return 0;
}
