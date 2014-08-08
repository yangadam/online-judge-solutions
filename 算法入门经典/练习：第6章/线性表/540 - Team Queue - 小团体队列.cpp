#include <iostream>
#include <map>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int t, cnt = 0;
	while (cin >> t && t)
	{
		cout << "Scenario #" << ++cnt << endl;
		map<int, int> mp;
		vector< queue<int> > v;
		queue<int> ans;
		for (int i=0; i<t; ++i)
		{
			v.push_back(queue<int>());
			int n, num;
			cin >> n;
			while(n--)
			{
				cin >> num;
				mp[num] = i;
			}
		}
		string str;
		while (cin >> str && str != "STOP")
		{
			if (str == "ENQUEUE")
			{
				int num;
				cin >> num;
				if (v[mp[num]].empty())
					ans.push(mp[num]);
				v[mp[num]].push(num);
			} 
			else
			{
				cout << v[ans.front()].front() << endl;
				v[ans.front()].pop();
				if (v[ans.front()].empty())
					ans.pop();
			}
		}
		cout << endl;
	}
	return 0;
}
