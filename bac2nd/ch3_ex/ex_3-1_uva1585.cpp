#include<cstdio>

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1585.in", "r", stdin);
  #endif
  int T;
  scanf("%d", &T);
  while (T--) {
    char str[81];
    scanf("%s", str);
    int score = 0, cum = 0;
    for (int i = 0; str[i]; i++) {
      if (str[i] == 'O') score += ++cum;
      else cum = 0;
    }
    printf("%d\n", score);
  }
}
