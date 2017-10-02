#include<stdio.h>
int main()
{
  int a, b, c, kase = 0;
  while (scanf("%d%d%d", &a, &b, &c) == 3 && !(a==0 && b==0 && c==0))
  {
    char format[10];
    sprintf(format, "Case %%d: %%.%df\n", c);
    printf(format, ++kase, (double)a / b);
  }
  return 0;
}
