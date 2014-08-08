#include<cstdio>
#include<cmath>
using namespace std;


int main()
{
	int h, w;
	while(scanf("%d%d", &h, &w) == 2 && (h || w))
	{
		if(h == 1 && w == 1)
		{
			printf("0 1\n");
			continue;
		}
		int k;
		for(k = 1; ; k++)
		{
			if((int)(pow(1 + pow(w,1.0/k), k)+0.1) >= h)
				break;
		}
		int n = (int)(pow(w*1.0, 1.0/k) + 0.1);
		int cat = 0;
		int hat = 0;
		for(int i = 0; i < k; i++)
		{
			int temp = (int)(pow(n*1.0,i) + 0.1);
			cat += temp;
			hat += (h/(pow(n+1, i))*temp);
		}
		hat += w;
		printf("%d %d\n", (int)cat, (int)hat);
	}
	return 0;
}
