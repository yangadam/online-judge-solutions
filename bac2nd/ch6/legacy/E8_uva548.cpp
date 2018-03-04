#include <iostream>
using namespace std;

const int maxn = 10000 + 10;

int inter[maxn], post[maxn];

void build_tree(int n, int* s1, int* s2, int sum, int &min, int &leaf) {
	if(n) {
		sum += s2[n-1];
		if (n == 1) {
			if (sum < min) {
				min = sum;
				leaf = s2[0];
			}
		} else {
			int i = 0;
			while (s1[i] != s2[n-1]) ++i;
			build_tree(i, s1, s2, sum, min, leaf);
			build_tree(n-i-1, s1+i+1, s2+i, sum, min, leaf);
		}
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva548.in", "r", stdin);
  #endif
	while (cin >> inter[0]) {
		char temp;
		int n = 1;
		for (cin >> noskipws >> temp; temp!='\n'; cin >> noskipws >> temp)
			cin >> skipws >> inter[n++];
		for (int i=0; i<n; i++)
			cin >> skipws >> post[i];
		int min = 0x7fffffff, leaf;
		build_tree(n, inter, post, 0, min, leaf);
		cout << leaf << endl;
	}
	return 0;
}
