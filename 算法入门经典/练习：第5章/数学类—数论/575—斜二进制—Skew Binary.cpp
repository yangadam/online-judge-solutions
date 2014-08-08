#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    char num[50];
    while(scanf("%s", num)!=EOF && num[0]!='0')
    {
      int sum = 0, len = strlen(num);
      for(int i=0; i<len; i++)
      {
          sum += (num[i]-'0')*(int)(pow(2.0,len-i)-1);
      }
     printf("%d\n",sum);
    }
    return 0;
}

/*#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int base[32] = {1};
	for(int i=0; i<32; i++)
		base[i] = 2*base[i-1]+1;
    char num[100];
    while(scanf("%s", num)!=EOF && num[0]-'0')
    {
      int sum = 0, len = strlen(num);
      for(int i=0; i<len; i++)
          sum += (num[i]-'0')*base[len-i-1];
     printf("%d\n", sum);
    }
    return 0;
}*/
