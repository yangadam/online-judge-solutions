#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int toInt(string& s) {
	int value = 0;
	for (int i = 0; i < s.size(); i++)
		value = value * 2 + (s[i] - '0');
	return value;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva712.in", "r", stdin);
  #endif
	int n, m, kase = 0;
	while (cin >> n && n) {
		cout << "S-Tree #" << ++kase << ":" << endl;
		string leaf, s;
		for (int i = 0; i < n; i++) cin >> s;
		cin >> leaf >> m;
		for (int i = 0; i < m; i++) {
			cin >> s;
			cout << leaf[toInt(s)];
		}
		cout << endl << endl;
	}
	return 0;
}
