#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	while (n--)
	{
		char code[11];
		cin >> code;
		sort(code, code+strlen(code));
		do 
		{
			cout << code << endl;
		} while (next_permutation(code, code+strlen(code)));
		cout << endl;
	}
	return 0;
}
