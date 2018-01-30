#include<cstdio>
#include<cstring>

#define maxn 101

int shift(char s[], char t[], int ls, int lt) {
  for (int i = 0; i < ls; i++) {
    int j = 0;
    while (t[j] && (i+j >= ls || t[j] - '0' + s[i+j] - '0' < 4)) j++;
    if (t[j] == '\0') return i+j > ls ? i+j : ls;
  }
  return ls + lt;
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1588.in", "r", stdin);
  #endif
  char top[maxn], bottom[maxn];
  while (scanf("%s%s", bottom, top) == 2) {
    int ltop = strlen(top), lbottom = strlen(bottom);
    int min1 = shift(top, bottom, ltop, lbottom);
    int min2 = shift(bottom, top, lbottom, ltop);
    printf("%d\n", min1 < min2 ? min1 : min2);
  } 
  return 0;
}
