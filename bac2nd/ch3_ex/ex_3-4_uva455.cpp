#include<cstdio>
#include<cstring>

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva455.in", "r", stdin);
  #endif
  int T;
  scanf("%d", &T);
  while(T--) {
    char word[100];
    scanf("%s", word);
    int len = strlen(word);
    for(int i = 1; i <= len; i++) if(len % i == 0) {
        int ok = 1;
        for(int j = i; j < len; j++)
          if(word[j] != word[j % i]) { ok = 0; break; }
        if(ok) { printf("%d\n", i); break; }
    }
    if(T) putchar('\n');
  }
  return 0;
}
