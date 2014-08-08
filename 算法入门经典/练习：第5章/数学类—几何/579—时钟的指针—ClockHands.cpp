#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int h, m;
	while(scanf("%d:%d", &h, &m) && (h || m))
	{
		double angle1 = h*30.0+m/2.0;
		double angle2 = m*6.0;
		double angle = fabs(angle1-angle2);
		printf("%.3lf\n", angle>180?360-angle:angle);
	}
	return 0;
}
