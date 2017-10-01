#include <cstdio>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("data.in", "r", stdin);
		freopen("data.out", "w", stdout);
	#endif

	int L;
	while (scanf("%d\n", &L), L)
	{
		bool sgn = true;
		char axis = 'x';
		while (--L)  
        {  
            char ch1 = getchar(), ch2 = getchar();
            getchar();  
            if (ch1 == 'N') continue;  
            if (axis == 'x')  
                sgn = !(sgn ^ (ch1 == '+')), axis = ch2;  
            else if (ch2 == axis)  
                sgn = sgn ^ (ch1 == '+'), axis = 'x';  
        }  
		printf("%c%c\n", sgn ? '+' : '-', axis);
	}
	return 0;
}
