#include<cstdio>

int main() {
  for (int i = 100; i < 999; i++) {
    int hi = i/100, mid = i/10%10, lo = i%10;
    if (i == hi*hi*hi + mid*mid*mid + lo*lo*lo)
      printf("%d\n", i);
  }
  return 0;
}
