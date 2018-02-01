#include<cstdio>

void resolveIp(int n) {
  unsigned ip[4], minIp = 0xffffffff, maxIp = 0, realIp;
  for (int i = 0; i < n; i++) {
    scanf(" %d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
    unsigned sum = (ip[0]<<24) + (ip[1]<<16) + (ip[2]<<8) + ip[3];
    if (sum < minIp) minIp = sum;
    if (sum > maxIp) maxIp = sum;
  }
  unsigned mask = minIp ^ maxIp, bit = 0;
  while (mask) { mask >>= 1; ++bit; }
  mask = (bit >= 32) ? 0 : (0xffffffff << bit);
  int net = minIp & mask;
  printf("%d.%d.%d.%d\n", (net>>24)&255, (net>>16)&255, (net>>8)&255, net&255);
  printf("%d.%d.%d.%d\n", (mask>>24)&255, (mask>>16)&255, (mask>>8)&255, mask&255);
}

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1590.in", "r", stdin);
  #endif
  int n;
  while (scanf("%d", &n) != EOF) {
    if (n == 1) {
      char ip[16];
      scanf("%s", ip);
      printf("%s\n255.255.255.255\n", ip); 
    } else {
      resolveIp(n);
    }
  }
  return 0;
}
