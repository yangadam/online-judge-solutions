#include <iostream>
using namespace std;

int target;
bool ok;

bool build_tree(int sum)
{
	int num, flag = 0;
	cin >> (char&)num;
	if(!(flag = ((cin >> num)==0)))
	{
		sum += num;
		bool lchild = build_tree(sum), rchild = build_tree(sum);
		if ( lchild && rchild && sum == target)
			ok = true;
	}
	cin.clear();
	cin >> (char&)num;
	return flag;
}

int main()
{
	while (cin >> target)
	{
		ok = false;
		build_tree(0);
		cout << ( ok ? "yes" : "no" ) << endl;
	}
	return 0;
}