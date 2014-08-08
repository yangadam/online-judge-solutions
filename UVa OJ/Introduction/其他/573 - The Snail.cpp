#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int H, U, D, F;
	while (scanf("%d%d%d%d", &H, &U, &D, &F) && H)
	{
		F *= U; H *= 100; U *= 100; D *= 100;
		int height = 0, d = 0;
		while (true)
		{
			d++;
			if (U > 0)
				height += U;
			if (height > H)
			{
				printf("success on day %d\n", d);
				break;
			}
			height -= D;
			if (height < 0)
			{
				printf("failure on day %d\n", d);
				break;
			}
			U -= F;
		}
	}
	return 0;
}
