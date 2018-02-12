#include<cstdio>
#include<iostream>
#include<map>
using namespace std;

map<pair<int, int>, int> exchg;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva10763.in", "r", stdin);
  #endif
  int n, A, B;
  while (cin >> n && n) {
    while (n-- && cin >> A >> B) {
      pair<int, int> match = make_pair(B, A);
      int& cnt = exchg[match];
      if (cnt <= 1) exchg.erase(match);
      else if (cnt > 1) --cnt;
      if (cnt == 0) exchg[make_pair(A, B)]++;
    }
    cout << (exchg.empty() ? "YES" : "NO") << endl;
    exchg.clear();
  }
  return 0;
}
