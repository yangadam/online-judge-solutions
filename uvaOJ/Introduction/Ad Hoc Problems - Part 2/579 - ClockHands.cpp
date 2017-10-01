#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("data.in", "r", stdin);
		freopen("data.out", "w", stdout);
	#endif

	int hour, min;
	while (scanf("%d:%d", &hour, &min) != EOF && (hour || min))
	{
		float angle1 = hour * 30 + min * 0.5;
		float angle2 = min * 6;
		float angle = fabs(angle1 - angle2);
		printf("%.3f\n", angle>180 ? 360-angle : angle);
	}
	return 0;
}
