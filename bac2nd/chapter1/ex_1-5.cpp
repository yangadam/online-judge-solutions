#include<stdio.h>
#include<math.h>
int main()
{
  const int PRICE = 95;
  int n;
  double totalPrice;
  scanf("%d", &n);
  totalPrice = PRICE * n;
  printf("%.2f\n", totalPrice < 300 ? totalPrice : totalPrice * 0.85);
  return 0;
}
