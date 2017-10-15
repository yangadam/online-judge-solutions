#include<stdio.h>
#include<math.h>
#include<string.h>
#define eps 1e-6
int main() {
  double A[10][31], B[10][31];
  for (int M = 0; M <= 9; M++) {
    for (int E = 1; E <=30; E++) {
      // val = m * 2^e
      // log10(val) = log10(m) + e * log10(2)
      // log10(val) = log10(a) + b, 0 < a < 10
      double m = 1 - pow(2, -M-1);
      double e = pow(2, E) - 1;
      double logval = log10(m) + e * log10(2);
      double b = floor(logval);
      double a = pow(10, logval - b);
      A[M][E] = a; B[M][E] = b;
    }
  }
  char s[32];
  while (scanf("%s", s) == 1) {
    if (!strcmp(s, "0e0")) break;
    for (int i = 0; s[i]; i++) if(s[i] == 'e') { s[i] = ' '; break; }
    double a, b;
    sscanf(s, "%lf%lf", &a, &b);
    for (int i = 0; i <= 9; i++) {
      for (int j = 1; j <= 30; j++) {
        if (fabs(A[i][j] - a) < eps && fabs(B[i][j] - b) < eps) {
          printf("%d %d\n", i, j);
          break;
        }
      }
    }
  }
  return 0;
}
