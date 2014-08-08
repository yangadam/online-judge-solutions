#include <cstdio>
using namespace std;

int main()
{
	double x1, y1, x2, y2;
	while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		if(x1==x2 && y1==y2) 
			 printf("Impossible.\n");
		else
			printf("%.10lf %.10lf %.10lf %.10lf\n", (x1+x2+y1-y2)/2, (y1+y2-x1+x2)/2, (x1+x2-y1+y2)/2, (y1+y2+x1-x2)/2);
	}
	return 0;
}
