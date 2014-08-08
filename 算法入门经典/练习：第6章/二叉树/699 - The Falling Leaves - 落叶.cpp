#include <iostream>
#include <cstring>
using namespace std;

const int width = 50;

int pile[width];

bool build_tree(int index)
{
	int n;
	cin >> n;
	if (n == -1)
		return false; 
	else
	{
		if (index < 0) index += width;
		if (index >= width) index -= width;
		pile[index] += n;
		build_tree(index-1);
		build_tree(index+1);
	}
	return true;
}

int main()
{
	int kase = 1;
	while (build_tree(0))
	{
		cout << "Case " << kase++ << ":" << endl;
		int i=width-1;
		while (pile[i]) --i;
		while (++i < width) cout << pile[i] << ' ';
		i = 0; while (pile[i+1]) cout << pile[i++] << ' ';
		cout << pile[i];
		cout << endl << endl;
		memset(pile, 0, sizeof(pile));
	}
	return 0;
}