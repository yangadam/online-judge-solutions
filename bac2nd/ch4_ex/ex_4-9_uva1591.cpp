#include<cstdio>

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1591.in", "r", stdin);
  #endif
  int N, Sp, Sq;
  while (scanf("%d%d%d", &N, &Sp, &Sq) == 3) {
    int minA = 0, minB = 0, minK = 0x7fffffff, originK = Sq * (N - 1);
    long Pofs = Sp * (N - 1);
    for (int A = 0; A < 34; A++) {
      for (int B = 0; B < 34; B++) {
        long curK = (Pofs + (Pofs << A)) >> B;
        if (curK >= originK && curK < minK)
          minK = curK, minA = A, minB = B;
      }
    }
    printf("%d %d %d\n", minK + Sq, minA, minB);
  }
  return 0;
}
