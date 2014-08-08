#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int num[10], n, cnt;

bool isInOrder()
{
	for (int i = 1; i < n; i++)
		if (num[i] < num[i-1])
			return false;
	return true;
}

void swap(int& x, int& y)
{
	int temp = x;
	x = y; y = temp;
}

void search()
{
	if (isInOrder())
		cnt++;
	else for (int i = 1; i < n; i++) if (num[i] < num[i-1])
	{
		swap(num[i], num[i-1]);
		search();
		swap(num[i], num[i-1]);
	}
}

int main()
{
	int kase = 1;
	while (cin >> n && n)
	{
		for (int i = 0; i < n; i++)
			cin >> num[i];
		cnt = 0;
		if (!isInOrder())
			search();
		cout << "There are " << cnt << " swap maps for input data set "
			<< kase++ << "." << endl;
	}
	return 0;
}
