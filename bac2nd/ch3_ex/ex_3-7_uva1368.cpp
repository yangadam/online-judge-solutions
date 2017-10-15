#include<stdio.h>
char dna[50][1001];
int main() {
  int T, map[26];
  char set[] = "ACGT";
  for (int i = 0; i < 4; i++) map[set[i]-'A'] = i;
  scanf("%d", &T);
  while(T--) {
    int m, n, sum = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) scanf("%s", dna[i]);
    for (int j = 0; j < n; j++) {
      int count[4] = { 0 };
      for (int i = 0; i < m; i++) {
        ++count[map[dna[i][j]-'A']];
      }
      int max = 0;
      for (int i = 0; i < 4; i++)
        if (count[i] > count[max])
          max = i;
      putchar(set[max]);
      sum += m - count[max];
    }
    printf("\n%d\n", sum);
  }
  return 0;
}
