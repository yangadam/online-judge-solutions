#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m=1;
		while(--n)
		(m+=1)*=2;
		printf("%d\n",m);
	}
	return 0;
}