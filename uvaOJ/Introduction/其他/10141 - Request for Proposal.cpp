#include <cstdio>
#include <cstring>
using namespace std; 

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("data.in", "r", stdin);
		freopen("data.out", "w", stdout);
	#endif
	
	int n, p, cnt = 0;
	while(scanf("%d%d", &n, &p) && n && p)
	{
		getchar();
		if (cnt) puts("");
		char req[85], pro[85];
		float price, min = -1;
		int met, max = -1;
		while (n--) fgets(req, 85, stdin);
		while (p--)
		{
			fgets(req, 85, stdin);
			scanf("%f%d", &price, &met);
			getchar();
			if (max == -1 || met > max || (met == max && price < min))
			{
				strcpy(pro, req);
				min = price;
				max = met;
			}
			while (met--) fgets(req, 85, stdin);
		}
		printf("RFP #%d\n", ++cnt);
		printf("%s", pro);
	}
	return 0;
}
