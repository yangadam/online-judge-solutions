#include<cstdio>
#include<algorithm>
using namespace std;

int grid[900];

void collectWater(int N, int water) {
  sort(grid, grid + N);
  int cnt = 1, remain = water;
  double level = grid[0];
  for (int i = 1; i < N; i++) {
    int full = 100 * cnt * (grid[i] - grid[i-1]);
    //printf("%d %d %d %d\n", remain, full, grid[i-1], grid[i]);
    if (remain > full) {
       level = grid[i];
       remain -= full;
       ++cnt;
    } else {
      level += remain / 100.0 / cnt;
      remain = 0;
      break;
    }
  }
  if (remain != 0) level += remain / 100.0 / cnt;
  printf("Water level is %.2f meters.\n", level);
  printf("%.2f percent of the region is under water.\n\n", cnt * 100.0 / N);
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva815.in", "r", stdin);
  #endif
  int m, n, water, kase = 0;
  while (scanf("%d%d", &m, &n) && m && n) {
    printf("Region %d\n", ++kase);
    for (int i = 0; i < m * n; i++)
      scanf("%d", &grid[i]);
    scanf("%d", &water);
    collectWater(m * n, water);
  }
  return 0;
}
