#include<stdio.h>
int main()
{
  for (int abc = 123; abc * 3 < 1000; abc++)
  {
    int flag[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int def = 2 * abc, ghi = 3 * abc;
    flag[abc/100] = 1;
    flag[abc/10%10] = 1;
    flag[abc%10] = 1;
    flag[def/100] = 1;
    flag[def/10%10] = 1;
    flag[def%10] = 1;
    flag[ghi/100] = 1;
    flag[ghi/10%10] = 1;
    flag[ghi%10] = 1;
    int sum = 0;
    for (int i = 1; i < 10; i++) sum += flag[i];
    if (sum == 9) printf("%d %d %d\n", abc, def, ghi);
  }
  return 0;
}
