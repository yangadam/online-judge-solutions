#include<stdio.h>
#include <string.h>
int main()
{
	int t[14], n, count, i, j, min;
	char s[27];
	while(scanf("%d", &n)!=EOF && n)
	{
		memset(t, 0, sizeof(t));
		getchar();
		min = 30;
		count = 0;
		for (i = 0; i < n; i++)
		{
			gets(s);
			for(j = 0; j < 25; j++)
				if(s[j] ==  ' ')
					t[i]++;
			if(t[i]<min)
				min = t[i];
			count += t[i];
		}
		printf("%d\n", count - n*min);
	}
	return 0;
}