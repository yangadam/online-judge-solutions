#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, kase = 1;
	while (cin >> n && n)
	{
		cout << "S-Tree #" << kase++ << ":" << endl;
		string str, num;
		for (int i=0; i<n; ++i) cin >> str;
		cin >> str >> m;
		for (int i=0; i<m; ++i)
		{
			cin >> num;
			int value = 0;
			for (unsigned j=0; j<num.size(); ++j)
				value = value*2 + (num[j]-'0');
			cout << str[value];
		}
		cout << endl << endl;
	}
	return 0;
}