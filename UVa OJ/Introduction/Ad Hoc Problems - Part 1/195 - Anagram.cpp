#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int encode(char c) {
	return c>='a' ? (c-'a')*2+1 : (c-'A')*2;
}

struct Ch
{
	char ch;
	bool operator< (const Ch& x) const {
		return encode(ch) < encode(x.ch);
	}
}word[80];


int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif

	int T;
	scanf("%d\n", &T);
	while (T--)
	{
		int cnt = 0;
		while ((word[cnt].ch = getchar()) != '\n' && word[cnt].ch != EOF)
			cnt++;
		sort(word, word+cnt);
		do
		{
			for (int i = 0; i < cnt; i++)
				putchar(word[i].ch);
			putchar(10);
		}while(next_permutation(word, word+cnt));
	}
	return 0;
}
