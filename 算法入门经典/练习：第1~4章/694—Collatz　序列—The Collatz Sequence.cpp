#include<stdio.h>
int main()
{
	int A, L, n = 0;
	while(scanf("%d%d", &A, &L) == 2 && A != -1 && L != -1)
	{
		printf("Case %d: A = %d, limit = %d, number of terms = ", ++n, A, L);
		int a = A, term = 1;
		while(a != 1)
		{
			if(a%2 && a <= (L-1) / 3)
			{
				a = 3*a + 1;
				term++;
			}
			else if(a%2 == 0)
			{
				a /= 2;
				term++;
			}
			else
				break;
		}
		printf("%d\n", term);
	}
	return 0;
}