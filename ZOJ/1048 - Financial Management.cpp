#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n = 12;
	double sum = 0, m;
	while (n-- && cin >> m)
		sum += m;
	printf("$%.2lf\n", sum/12);
	return 0;
}