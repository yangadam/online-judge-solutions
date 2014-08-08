#include <iostream>
using namespace std;

int point[110][2];

void solve(int N)
{
	for (int A = -500; A <= 500; A++)
	{
		for (int B = -500; B <= 500; B++)
		{
			int x = 0, y = 0, k;
			for (k = 0; k < 2*N; k++)
			{
				if (A*point[k][0] + B*point[k][1] > 0) x++; 
				else if (A*point[k][0] + B*point[k][1] < 0) y++;
				else break;
			}
			if (k == 2*N && x == N && y == N)
			{
				cout << A << ' ' << B << endl;
				return;
			}
		}
	}
}

int main(void)
{
	int N;
	while (cin >> N && N)
	{
		for (int i = 0; i < 2*N; i++)
			cin >> point[i][0] >> point[i][1];
		solve(N);
	}
	return 0;
}