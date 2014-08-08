#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	char s[1000];
	cin.getline(s, 1000, '\n');
	stringstream ss(s);
	int a, b;
	ss >> a >> b;
	cout << a+b << "\n";
	return 0;
}