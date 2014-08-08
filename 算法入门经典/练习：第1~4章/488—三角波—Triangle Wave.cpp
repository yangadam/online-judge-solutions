#include<stdio.h>
void PrintALine(int n, int num)
{
	int i;
	for(i = 0; i < num; i++)
		printf("%d", n);
	putchar(10);
	return;
}
void PrintAWave(int hi)
{
	int i;
	for(i = 1; i <= 2*hi -1; i++)
	{
		if(i <= hi)
			PrintALine(i, i);
		else
			PrintALine(2*hi - i, 2*hi - i);
	}
}
int main()
{
	int cas, n, hi, i, j;
	scanf("%d", &cas);
	for(i = 0; i < cas; i++)
	{
		scanf("%d%d", &hi, &n);
		for(j = 0; j < n; j++)
		{
			PrintAWave(hi);
			if(!(i == cas-1 && j == n-1))
				putchar(10);
		}
	}
	return 0;
}