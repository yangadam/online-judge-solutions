#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int vis[1000];

bool is_happy(int n)
{
	while ( n >= 1000 || !vis[n])
	{
		if ( n < 1000 )
			vis[n] = 1;
		int temp = 0;
		for (int i = 0; i <= 9; i++)
			temp += (int) pow(n / (int)pow(10.0, i) % 10, 2);
		if (temp == 1)
			return true;
		else
			n = temp;
	}
	return false;
}

int main()
{
	int kase;
	cin >> kase;
	for (int i = 1; i <= kase; i++)
	{
		memset(vis, 0, sizeof(vis));
		int num;
		cin >> num;
		cout << "Case #" << i << ": " << num << " is a";
		cout << (is_happy(num) ? " Happy number." : "n Unhappy number.")
			<< endl;
	}
	return 0;
}