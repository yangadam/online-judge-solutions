#include<cstdio>
#include<cmath>
#include<iostream>
#include<map>
using namespace std;

string s;
int maxCnt, total;
map<long long, int> cnt;

void solve(int depth, int p, int q) {
  if (s[p] == '[') {
    int d = 0;
    for (int i = p + 1; i < q; i++) {
      if (s[i] == '[') d++;
      else if (s[i] == ']') d--;
      else if (d == 0 && s[i] == ',') {
        solve(depth + 1, p + 1, i);
        solve(depth + 1, i + 1, q - 1);
        return;
      }
    }
  } else {
    long long w = 0;
    for (int i = p; i < q; i++)
      w = w * 10 + s[i] - '0';
    total++;
    w <<= depth;
    cnt[w]++;
    maxCnt = max(maxCnt, cnt[w]);
  }
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva12166.in", "r", stdin);
  #endif
	int T;
  cin >> T;
  while (T--) {
    cnt.clear();
    maxCnt = total = 0;
    cin >> s;
    solve(0, 0, s.length());
    cout << total - maxCnt << endl;
  }
  return 0;
}
