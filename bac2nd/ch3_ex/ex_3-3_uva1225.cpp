#include<stdio.h>
#include<string.h>
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int N, count[10];
    memset(count, 0, sizeof(count));
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
      int cur = i;
      while (cur) { count[cur%10]++; cur /= 10; }
    }
    for (int i = 0; i < 9; i++) printf("%d ", count[i]);
    printf("%d\n", count[9]);
  }
  return 0;
}
