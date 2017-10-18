//n=1或者n太大时请勿调用
int is_prime(int n) {
  for(int i = 2; i*i <= n; i++)
    if(n % i == 0) return 0;
  return 1;
}
