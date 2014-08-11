#include <iostream>
#include <algorithm>
using namespace std;

int A[100000 + 10];

int main()
{
	int T, kase = 0; cin >> T;
	while (kase < T)
	{
		if (kase) cout << endl;
		int N; cin >> N;
		for (int i = 1; i <= N; i++)
		{
			int tmp; cin >> tmp;
			A[i] = A[i-1] + tmp;
		}
		int maxSum = A[1] - A[0], iMin = 0;
		int left = 0, right = 1;
		for (int i = 1; i <= N; i++)
		{
			iMin = A[iMin]>A[i-1] ? i-1 : iMin;
			if (maxSum < A[i] - A[iMin])
			{
				left = iMin; right = i;
				maxSum = A[i] - A[iMin];
			}
		}
		cout << "Case " << kase++ << ":" << endl;
		cout << maxSum << ' ' << left+1 << ' ' 
			<< right << endl;
	}
	return 0;
}
