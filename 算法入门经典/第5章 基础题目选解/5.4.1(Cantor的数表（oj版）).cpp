#include<stdio.h>
#include<math.h>
int main()
{
	long n;
	while(scanf("%ld", &n) != EOF)
	{
		int x,y;
		x = (int)floor((sqrt(8.0*n + 1) - 1)/2 - 1e-9) + 1;
		y = x*(x + 1)/2;
		if(x%2==0)
			printf("TERM %ld IS %ld/%ld\n",n,x-y+n,y-n+1);
		else
			printf("TERM %ld IS %ld/%ld\n",n,y-n+1,x-y+n);
	}
	return 0;
}
