#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int base, last, n;
    while(scanf("%d%d%d", &base, &last, &n) != EOF)
    {
		int temp, cnt = 0, carry = 0;
		bool first = false;
        for(int front=last; !(first && carry==0 && front==last); cnt++)
        {
            temp = front*n + carry;
            carry = temp/base;
			front = temp%base;
            first = true;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
