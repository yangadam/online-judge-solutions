#include<cstdio>
#include<cstdlib>

const int maxn = 10000;

int marble[maxn];

int cmp(const void *_a, const void *_b) {
	int *a = (int*)_a;
	int *b = (int*)_b;
	return *a - *b;
}

int find(int x, int n) {
	for(int i = 0; i < n; i++)
		if(marble[i] == x)
			return i+1;
	return -1;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva10474.in", "r", stdin);
  #endif
	int N, Q, num = 1;
	while(scanf("%d%d", &N, &Q) == 2 && N && Q)	{
		printf("CASE# %d:\n", num++);
		for(int i = 0; i < N; i++)
			scanf("%d", &marble[i]);
		qsort(marble, N, sizeof(int), cmp);
		for(int i = 0; i < Q; i++) {
			int x;
			scanf("%d", &x);
			int y = find(x, N);
			if(y == -1)
				printf("%d not found\n", x);
			else
				printf("%d found at %d\n", x, y);
		}
	}
	return 0;
}
