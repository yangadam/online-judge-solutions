#include <stdio.h>
int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva272.in", "r", stdin);
  #endif
  int c, q = 1;
  while((c= getchar()) != EOF) {
    if(c == '"') { printf("%s", q ? "``" : "''"); q = !q; }
    else printf("%c", c);
  }
  return 0;
}
