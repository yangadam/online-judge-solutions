#include<cstdio>
#include<cstring>
#include<utility>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1587.in", "r", stdin);
  #endif
  int w, h;
  int ws[6], hs[6], cnts[6];
  while(scanf("%d%d", &w, &h) == 2) {
    memset(cnts, 0, sizeof(cnts));
    if (w > h) swap(w, h);
    ws[0] = w, hs[0] = h, cnts[0] = 1;
    int cnt = 1;
    for (int i = 1; i < 6; i++) {
      scanf("%d%d", &w, &h);
      if (w > h) swap(w, h);
      int j;
      for (j = 0; j < cnt; j++)
        if (ws[j] == w && hs[j] == h) {
          cnts[j]++;
          break;
        }
      if (j == cnt) { ws[cnt] = w; hs[cnt] = h; cnts[cnt] = 1; cnt++; }
    }
    if (cnt == 1 && ws[0] == hs[0]) { puts("POSSIBLE"); continue; }
    if (cnt == 2 && cnts[0]%2 == 0 && cnts[1]%2 == 0) {
      if (cnts[0] == 2) swap(ws[0], ws[1]), swap(hs[0], hs[1]);
      if (ws[1] == ws[0] && hs[1] == ws[0] || ws[1] == hs[0] && hs[1] == hs[0]) { puts("POSSIBLE"); continue; }
    }
    if (cnt == 3 && cnts[0] == 2 && cnts[1] == 2 && cnts[2] == 2) {
      if (ws[0] > ws[1] || ws[0] == ws[1] && hs[0] > hs[1]) swap(ws[0], ws[1]), swap(hs[0], hs[1]);
      if (ws[0] > ws[2] || ws[0] == ws[2] && hs[0] > hs[2]) swap(ws[0], ws[2]), swap(hs[0], hs[2]);
      if (ws[1] > ws[2] || ws[1] == ws[2] && hs[1] > hs[2]) swap(ws[1], ws[2]), swap(hs[1], hs[2]);
      if (ws[0] == ws[1] && ws[2] == hs[0] && hs[2] == hs[1]) { puts("POSSIBLE"); continue; }
    }
    puts("IMPOSSIBLE");
  }
  return 0;
}
