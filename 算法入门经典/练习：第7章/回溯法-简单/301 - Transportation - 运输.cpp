#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

struct Ticket { int x, y, num; } ticket[30];

int cap, stops, oder;
int station[10], vis[30], Max;

void search(int u, int sum) {
	int i = ticket[u].x;
	for (; i < ticket[u].y; i++) {
		station[i] += ticket[u].num;
		if (station[i] > cap) break;
	}
	if (i == ticket[u].y) {
		Max = max(sum, Max);
		for (int v = u+1; v < oder; v++)
			search(v, sum+(ticket[v].y-ticket[v].x)*ticket[v].num);
		i--;
	}
	for (; i >= ticket[u].x; i--)
		station[i] -= ticket[u].num;
}

int main() {
	while (cin >> cap >> stops >> oder && cap+stops+oder)
	{
		memset(station, 0, sizeof(station));
		for (int i = 0; i < oder; i++)
			cin >> ticket[i].x >> ticket[i].y >> ticket[i].num;
		Max = 0;
		for (int i = 0; i < oder; i++)
			search(i, (ticket[i].y-ticket[i].x)*ticket[i].num);
		cout << Max << endl;
	}
	return 0;
}
