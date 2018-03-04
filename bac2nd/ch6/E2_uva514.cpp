#include<cstdio>
#include<stack>
using namespace std;
const int MAXN = 1000 + 10;

int n, target[MAXN];

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva514.in", "r", stdin);
  #endif
  while(scanf("%d", &n) == 1 && n) {
    stack<int> s;
    while (scanf("%d", &target[1]) == 1 && target[1]) {
      for(int i = 2; i <= n; i++)
        scanf("%d", &target[i]);
      int ok = 1;
      int A = 1, B = 1;
      while(B <= n) {
        if(A == target[B]){ A++; B++; }
        else if(!s.empty() && s.top() == target[B]){ s.pop(); B++; }
        else if(A <= n) s.push(A++);
        else { ok = 0; break; }
      }
      printf("%s\n", ok ? "Yes" : "No");
    }
    putchar('\n');
  }
  return 0;
}
