#include<cstdio>

int main() {
  int n;
  scanf("%d", &n);
  bool isLeap = n % 400 == 0 || n % 100 != 0 && n % 4 == 0;
  printf("%s\n", isLeap ? "yes" : "no");
  return 0;
}
