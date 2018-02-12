#include<cstdio>

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva232.in", "r", stdin);
  #endif
  int m, n, kase = 0;
  char puzzle[10][11];
  while(scanf("%d%d", &m, &n) == 2) {
    if(kase) putchar('\n');
    printf("puzzle #%d:\n", ++kase);
    for (int i = 0; i < m; i++) scanf("%s", puzzle[i]);
    puts("Across");
    int num[10][10] = {}, count = 0;
    for (int i = 0; i < m; i++) {
      int start = 1;
      for (int j = 0; j < n; j++) {
        if (puzzle[i][j] != '*') {
          if (i == 0 || j == 0 || puzzle[i-1][j] == '*' || puzzle[i][j-1] == '*') num[i][j] = count++;
          if (start) printf("%3d.", count);
          putchar(puzzle[i][j]);
          start = 0;
        } else if(!start) {
          putchar('\n');
          start = 1;
        }
      }
      if(!start) putchar('\n');
    }
    puts("Down");
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        if ((i == 0 || puzzle[i-1][j] == '*') && puzzle[i][j] != '*') {
          printf("%3d.", num[i][j]);
          int r = i;
          while(r < m && puzzle[r][j] != '*') putchar(puzzle[r++][j]);
          putchar('\n');
        }
  }
  return 0;
}
