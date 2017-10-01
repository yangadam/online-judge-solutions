#include<stdio.h>
int f[49*7+1];
int main()
{
int n,A,B;
f[1]=1;f[2]=1;
while(scanf("%d%d%d",&A,&B,&n)!=EOF)
{
if(A==0&&B==0&&n==0)
break;
for(int i=3;i<=49*7;i++)
f[i]=(A*f[i-1]+B*f[i-2])%7;
n=n%49*7;
if(n==0) printf("%d\n",f[49*7]);
else printf("%d\n",f[n]);
}
return 0;
}