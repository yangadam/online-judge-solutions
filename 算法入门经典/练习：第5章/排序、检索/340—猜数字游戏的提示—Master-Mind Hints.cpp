#include<stdio.h>
#include<string.h>
#define MAXN 1000 + 10
int main()
{
	int n, num = 0;
	while(scanf("%d", &n) == 1 && n)
	{
		printf("Game %d:\n", ++num);
		int code[MAXN];
		for(int i = 0; i < n; i++)
			scanf("%d", &code[i]);
		for(;;)
		{
			int _code[MAXN];
			memcpy(_code, code, sizeof(code));
			int guess[MAXN];
			int a = 0, b = 0;
			for(int i = 0; i < n; i++)
				scanf("%d", &guess[i]);
			if(guess[0] == 0)
				break;
			for(int i = 0; i < n; i++)
				if(guess[i] == _code[i])
				{
					a++;
					_code[i] = guess[i] =0;
				}
			for(int i = 0; i < n; i++)
			{
				if(!guess[i])
					continue;
				for(int j = 0; j < n; j++)
					if(guess[i] == _code[j])
					{
						b++;
						_code[j] = 0;
						break;
					}
			}
			printf("    (%d,%d)\n", a, b);
		}
	}
	return 0;
}