#include<cstdio>

int main()
{
  int kase = 0, a, b, c;
  while (scanf("%d%d%d", &a, &b, &c) == 3)
  {
    int m = (70*a + 21*b + 15*c) % 105;
    if (m > 100) printf("Case %d: No answer\n", ++kase);
    else printf("Case %d: %d\n", ++kase, m);
  }
  return 0;
}
