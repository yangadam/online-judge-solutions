#include <cstdio>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int r, c;
		scanf("%d%d", &r, &c);
		printf("%d\n", (r/3)*(c/3));
	}
	return 0;
}

