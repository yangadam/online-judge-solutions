#include<cstdio>
#include<utility>
using namespace std;

int main() {
  int n, m, kase = 0;
  while (scanf("%d%d", &n, &m) == 2 && (m!=0 || n!=0)) {
    if (n > m) swap(m, n);
    double sum = 0;
    for (int i = n; i <= m; i++) {
      sum += 1.0 / i / i;
    }
    printf("Case %d: %.5f\n", ++kase, sum);
  }
  return 0;
}
