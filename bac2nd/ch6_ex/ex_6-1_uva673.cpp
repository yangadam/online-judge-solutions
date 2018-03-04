#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<stack>
#include<map>
using namespace std;

map<char, char> match;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input/uva673.in", "r", stdin);
  #endif
	int n;
	cin >> n;
	cin.ignore();
	match[']'] = '[';
	match[')'] = '(';
	while(n--) {
		string s;
		getline(cin, s);
		stack<char> st;
		for (int i = 0; i < s.length(); i++) {
			char c = s[i];
			if (c == '(' || c == '[') st.push(c);
			else if(!st.empty() && match[c] == st.top())
				st.pop();
			else { st.push(c); break; }
		}
		if(st.empty()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
