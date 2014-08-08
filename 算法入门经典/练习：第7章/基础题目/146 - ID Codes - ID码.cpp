#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	char code[60];
	while (cin >> code && code[0] != '#')
	{
		if (next_permutation(code, code+strlen(code)))
			cout << code << endl;
		else
			cout << "No Successor" << endl;
	}
	return 0;
}
