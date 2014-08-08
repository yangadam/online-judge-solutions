#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		int n1,n2;
		n1=(a-1)+a*(b-1);
		n2=(b-1)+b*(a-1);
		printf("%d\n",n1<n2?n1:n2);
	}
	return 0;
}
