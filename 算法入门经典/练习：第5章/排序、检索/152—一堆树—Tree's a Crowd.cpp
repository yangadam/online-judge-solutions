#include<stdio.h>
#include<math.h>
struct Tree
{
	int x, y, z;
}tree[10000];

int dis(struct Tree a, struct Tree b)
{
	return (int)sqrt((double)((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) +(a.z-b.z)*(a.z-b.z)));
}
int main()
{
	int x, y, z, n = 0;
	while(scanf("%d%d%d", &x, &y, &z) == 3 && (x||y||z))
	{
		tree[n].x = x;
		tree[n].y = y;
		tree[n].z = z;
		n++;
	}
	int count[10] = {0};
	for(int i = 0; i < n; i++)
	{
		int min = 500;
		for(int j = 0; j < n; j++)
		{
			int d = dis(tree[i], tree[j]);
			if(j != i && min > d) min = d;
		}
		if(min < 10)
			count[min]++;
	}
	for(int i = 0; i < 10; i++)
		printf("%4d", count[i]);
	putchar(10);
	return 0;
}