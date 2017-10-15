#include<stdio.h>
#include<string.h>
int main() {
  int a, b, mark[3001], result[51];
  while(scanf("%d%d", &a, &b) == 2) {
    memset(mark, 0, sizeof(mark));
    printf("%d/%d = %d.", a, b, a/b);
    a %= b;
    int pos = 1;
    for (;;) {
      if (mark[a]) break;
      mark[a] = pos;
      a *= 10;
      if (pos <= 50) result[pos] = a / b;
      pos++;
      a %= b;
    }
    for (int i = 1; i < mark[a]; i++) printf("%d", result[i]);
    putchar('(');
    for (int i = mark[a]; i < pos && i <= 50; i++) printf("%d", result[i]);
    if (pos > 50) printf("...");
    puts(")");
    printf("   %d = number of digits in repeating cycle\n\n", pos - mark[a]);
  }
  return 0;
}
