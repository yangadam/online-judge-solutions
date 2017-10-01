#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
using namespace std;
const int MAXN = 1000 + 10;
char word[MAXN][21], done[MAXN][21];

int cmp_char(const void *_a, const void *_b)
{
	char *a = (char*)_a;
	char *b = (char*)_b;
	return *a - *b;
}

int cmp_word(const void *_a, const void *_b)
{
	char *a = (char*)_a;
	char *b = (char*)_b;
	return strcmp(a, b);
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	int n = 0;
	while(scanf("%s", word[n++]) == 1)
	{
		if(word[n-1][0] == '#')
			break;
		int len = strlen(word[n-1]);
		for(int i = 0; i < len; i++)
			done[n-1][i] = tolower(word[n-1][i]);
	}
	for(int i = 0; i < n; i++)
		qsort(done[i], strlen(done[i]), sizeof(char), cmp_char);
	for(int i = 0; i < n; i++)
	{
		if(done[i][0] == '\0')
			continue;
		int ok = 0;
		for(int j = 0; j < n; j++)
			if( !strcmp(done[i], done[j]) && i != j)
			{
				strcpy(done[j], "");
				strcpy(word[j], "");
				ok = 1;
			}
		if(!ok)
			continue;
		strcpy(done[i], "");
		strcpy(word[i], "");
	}
	qsort(word, n, sizeof(word[0]), cmp_word);
	int i = 0;
	while(word[i++][0] == '\0');
	for(; i < n; i++)
		printf("%s\n", word[i]);
	return 0;
}