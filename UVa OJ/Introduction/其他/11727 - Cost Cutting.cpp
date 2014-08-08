#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		printf("Case %d: ", i);
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if ((a-b)*(a-c) < 0)
			printf("%d\n", a);
		else if((b-a)*(b-c) < 0)
			printf("%d\n", b);
		else
			printf("%d\n", c);
	}
	return 0;
}
