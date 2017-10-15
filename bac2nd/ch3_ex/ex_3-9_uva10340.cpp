#include<stdio.h>
#define maxn 1000000
char s[maxn], t[maxn];
int main() {
  while(scanf("%s%s", s, t) == 2) {
    int i = 0, j = 0;
    for(; s[i]; i++) {
      for(; t[j]; j++) if(s[i] == t[j]) break;
      if (t[j] == '\0') break;
      j++;
    }
    if(s[i] == '\0') puts("Yes");
    else puts("No");
  }
  return 0;
}
