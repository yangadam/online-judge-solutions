#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string str;
		getline(cin, str);
		int len = str.length();
		stack<char> st;
		while(len--)
		{
			if(st.empty() || str[len] == ')' || str[len] == ']')
				st.push(str[len]);
			else if((st.top()==')' && str[len]=='(') || (st.top()==']' && str[len]=='['))
				st.pop();
			else
				st.push(str[len]);
		}
		if(st.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
