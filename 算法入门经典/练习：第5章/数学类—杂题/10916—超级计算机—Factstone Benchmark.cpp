#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int y;
    while (scanf("%d", &y)!=EOF && y!=0)
    {
        int i, bit = 4*pow(2.0, ((y - 1960)/10));
		double sum = 0, t = (double)bit*log(2.0);
        for (i = 1; ; i++)
        {
            sum += log((double)i);
            if (sum > t)
                break;
        }
        printf("%d\n", i-1);
    }
    return 0;
}
