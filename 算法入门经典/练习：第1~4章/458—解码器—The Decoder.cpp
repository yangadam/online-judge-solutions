#include <stdio.h>
#define MAX 100
int main()
{
	int i;
	char s[MAX];
	while (gets(s) != NULL)
	{
		i = -1;
		while(s[++i])
			printf("%c",s[i]-7);
		putchar(10);
	}
	return 0;
}