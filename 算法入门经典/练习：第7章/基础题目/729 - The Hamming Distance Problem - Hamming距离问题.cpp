#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N, H;

void solve(int n)
{
	int cnt = 0;
	for (int i = 0; i < N; i++)
		if (n & 1<<i)
			cnt++;
	if (cnt == H) {
		for (int i = N-1; i >= 0; i--)
			cout << ((n & 1<<i) ? 1 : 0);
		cout << endl;
	}
}

int main(void)
{
	int kase;
	cin >> kase;
	while (kase--)
	{
		cin >> N >> H;
		for (int i = 0; i < 1<<N; i++)
			solve(i);
		if (kase)
			cout << endl;
	}
	return 0;
}
