#include<stdio.h>
#include<string.h>
int KMP(char *str) {
  int a = -1, b = 1;
  int prefix[81];
  prefix[0] = -1;
  while(str[b]) {
    while(a >= 0 && str[a+1] != str[b]) a = prefix[a];
    if(str[a+1] == str[b]) ++a;
    prefix[b++] = a;
  }
  return a + 1;
}
int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    char word[100];
    scanf("%s", word);
    int len = strlen(word), t = KMP(word);
    if (len % (len - t)) printf("%d\n", len);
    else printf("%d\n", len -t);
    if(T) puts("");
  }
  return 0;
}
