#include<cstdio>

const int MAXN = 50;

int queue[MAXN];
int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva10935.in", "r", stdin);
  #endif
	int n, front, rear;
	while(scanf("%d", &n) == 1 && n) {
		printf("Discarded cards:");
		for(int i = 0; i < n; i++)
			queue[i] = i+1;
		front = 0;
		rear = n;
		int count = 0;
		while(front < rear - 1) {
			if(count)
				printf(",");
			printf(" %d", queue[front++]);
			queue[rear++] = queue[front++];
			count++;
		}
		printf("\nRemaining card: %d\n",queue[front]);
	}
	return 0;
}
