#include<cstdio>
#include<cstring>

int main() {
  const char* numSet = "123456789";
  for (int abc = 123; abc < 329; abc++) {
    char buf[11];
    int def = 2 * abc, ghi = 3 * abc;
    sprintf(buf, "%d%d%d", abc, def, ghi);
    int ok = 1;
    for(int i = 0; i < 9; i++)
      if(strchr(buf, numSet[i]) == NULL) ok = 0;
    if (ok) printf("%d %d %d\n", abc, def, ghi);
  }
  return 0;
}
