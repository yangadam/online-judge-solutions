#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

const int MAX = 10000 + 10;
char L[MAX];

bool check(int k)
{
	for (int i = 0; i < k; i++)
	  for (int j = 0; j < k; j++)
	  {
		  char c = L[i*k + j];
		  if (c != L[j*k + i]) return false;
		  if (c != L[(k-1-i)*k + k-1-j]) return false;
		  if (c != L[(k-1-j)*k + k-1-i]) return false;
	  }
	return true;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	
	int T, kase = 0;
	scanf("%d\n", &T);
	while (kase++ < T)
	{
		int cur = 0;
		printf("Case #%d:\n", kase);
		while ((L[cur] = getchar()) != '\n' && L[cur] != EOF)
		{
			if (isalpha(L[cur]))
			  cur++;
		}
		int k = 0;
		while (k*k < cur && ++k);

		if (k*k != cur || !check(k))
		  puts("No magic :(");
		else
		  printf("%d\n", k);
	}
	return 0;
}
