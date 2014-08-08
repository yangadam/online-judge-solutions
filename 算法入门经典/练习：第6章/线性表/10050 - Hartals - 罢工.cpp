#include <iostream>
#include <cstring>
using namespace std;

const int maxn = 3650 + 10;

bool list[maxn];

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int days, n;
		cin >> days >> n;
		memset(list, 0, days+1);
		while (n--)
		{
			int h, i = 0;
			cin >> h;
			while (h*(++i) <= days)
				list[h*i] = true;
		}
		int all = 0;
		for (int i=1; i<=days; ++i)
			if (list[i])
				if (i%7 != 6 && i%7 != 0)
					++all;
		cout << all << endl;
	}
	return 0;
}