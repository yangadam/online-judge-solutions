#include <stdio.h>
#include <string.h>
int main()
{
	char s[100][100];
	int i = 0, j, k, max = 0;
	memset(s, 0, sizeof(s));
	while (gets(s[i]))
	{
		max = max>strlen(s[i]) ? max : strlen(s[i]);
		i++;
	}
	i--;
	for (j = 0; j < max; j++)
	{
		for (k = i; k >= 0; k--)
			if(j<strlen(s[k]))
				printf("%c",s[k][j]);
			else
				putchar(32);
		putchar(10);
	}
	return 0;
}