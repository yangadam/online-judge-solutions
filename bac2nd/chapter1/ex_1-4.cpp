#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  double rad;
  scanf("%d", &n);
  rad = M_PI * n / 180;
  printf("%f %f\n", sin(rad), cos(rad));
  return 0;
}
