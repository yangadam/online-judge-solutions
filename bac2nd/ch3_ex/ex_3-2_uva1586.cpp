#include<cstdio>
#include<cctype>

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva1586.in", "r", stdin);
  #endif
  int T;
  double gmol['Z'] = { 0 };
  gmol['C'] = 12.01;
  gmol['H'] = 1.008;
  gmol['O'] = 16.00;
  gmol['N'] = 14.01;
  scanf("%d", &T);
  while (T--) {
    char str[81];
    double mass = 0;
    scanf("%s", str);
    int el = 0, num = 0;
    for (int i = 0; str[i]; i++) {
      if (isalpha(str[i])) {
        mass += gmol[el] * (num ? num : 1);
        el = str[i];
        num = 0;
      }
      else num = num * 10 + str[i] - '0';
    }
    mass += gmol[el] * (num ? num : 1);
    printf("%.3f\n", mass);
  }
  return 0;
}
