#include<cstdio>
#include<cmath>
using namespace std;

const double pi = acos(0.0)*2;

int main()
{
	int a, b, m, n, s;
	while(scanf("%d%d%d%d%d", &a, &b, &s, &m, &n) != EOF) if(a+b+s+m+n)
	{	
		double v = sqrt(1.0*a*a*m*m+1.0*b*b*n*n)/s;
		double A = atan(1.0*b*n/(1.0*a*m))/pi*180;
		while(A > 90)
			A -= 90;
		printf("%.2lf %.2lf\n", A, v);
	}
	return 0;
}
