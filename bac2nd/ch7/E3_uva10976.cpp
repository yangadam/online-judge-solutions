#include<cstdio>
#include<vector>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva10976.in", "r", stdin);
  #endif
  int k;
  while(scanf("%d", &k) == 1 && k) {
    vector<int> X, Y;
    for(int y = k+1; y <= k*2; y++) {
      // 1/k = 1/x + 1/y => x = ky/(y-k)
      if(k*y%(y-k) == 0)
        { X.push_back(k*y/(y-k)); Y.push_back(y); }
    }
    printf("%ld\n", X.size());
    for(int i = 0; i < X.size(); i++)
      printf("1/%d = 1/%d + 1/%d\n", k, X[i], Y[i]);
  }
  return 0;
}
