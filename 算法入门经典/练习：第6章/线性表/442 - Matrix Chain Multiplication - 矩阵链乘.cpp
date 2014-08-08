#include <iostream>
#include <string>
#include <stack>
using namespace std;

typedef struct { int row, col; } matrix;
matrix mat[27], x, y;

int main()
{
	int n, row, col;
	string temp;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> temp >> row >> col;
		mat[temp[0]-'A'] = (matrix){row, col};
	}
	cin.ignore();
	while(getline(cin, temp))
	{
		bool ok = true;
		int sum = 0;
		stack<matrix> exp;
		for(unsigned i=0; i<temp.length(); i++)
		{
			if(temp[i] == ')')
			{
				y = exp.top();
				exp.pop();
				x = exp.top();
				exp.pop();
				if(x.col == y.row)
				{
					sum += x.row *x.col* y.col;
					x.col = y.col;
					exp.push(x);
				}
				else
				{
					ok = false;
					break;
				}
			}
			else if(temp[i] == '(');
			else
				exp.push(mat[temp[i]-'A']);
		}
		if(ok)
			cout << sum << endl;
		else
			cout << "error" << endl;
	}
	return 0;
}
