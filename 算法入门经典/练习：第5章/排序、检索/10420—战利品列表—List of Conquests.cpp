#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void *_a, const void *_b)
{
	char *a = (char*)_a;
	char *b = (char*)_b;
	return strcmp(a, b);
}
char s[2000][80];
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++)
		gets(s[i]);
	qsort(s, n, sizeof(s[0]), cmp);
	char country[80];
	sscanf(s[0], "%s", country);
	printf("%s ", country);
	int num = 1;
	for(int i = 1; i < n; i++)
	{
		sscanf(s[i], "%s", country);
		if(strncmp(country, s[i - 1], strlen(country)))
		{
			printf("%d\n%s ", num, country);
			num = 1;
		}
		else
			num++;
	}
	printf("%d\n", num);
	return 0;
}