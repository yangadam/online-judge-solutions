#include <cstdio>
#include <cstring>
using namespace std;

float dep[150];

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int months, n;
	float downpay, loan;
	while(scanf("%d%f%f%d", &months, &downpay, &loan, &n) && months > 0)
	{
		memset(dep, 0, sizeof(dep));
		while(n--)
		{
			int tmp;
			scanf("%d", &tmp);
			scanf("%f", &dep[tmp]);
		}
		int i = 0;
		float car = downpay + loan;
		float monthpay = loan / months;
		float curdep = 0;
		for ( ; ; i++)
		{
			curdep = dep[i] ? dep[i] : curdep;
			car *= 1 - curdep;
			if (loan < car) break;
			loan -= monthpay;
		}
		if (i == 1) puts("1 month");
		else printf("%d months\n", i);
	}
	return 0;
}
