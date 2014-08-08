#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE  
        freopen("in.txt", "r", stdin);  
        freopen("out.txt", "w", stdout);   
    #endif
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if (a < b)
			puts("<");
		else if (a > b)
			puts(">");
		else
			puts("=");
	}
	return 0;
}