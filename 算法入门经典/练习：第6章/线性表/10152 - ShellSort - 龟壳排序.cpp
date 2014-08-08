#include <iostream>
#include <string>
using namespace std;

string src[300], des[300];

int main()
{
	int k;
	cin >> k;
	while(k--)
	{
		int n;
		cin >> n;
		cin.ignore();
		for(int i=0; i<n; i++)
			getline(cin, src[i]);
		for(int i=0; i<n; i++)
			getline(cin, des[i]);
		int i, j;
		i = j = n-1;
		while(i >= 0)
		{
			if(src[i] == des[j])
				--j;
			--i;
		}
		while(j >= 0)
			cout << des[j--] << endl;
		cout << endl;
	}
	return 0;
}
