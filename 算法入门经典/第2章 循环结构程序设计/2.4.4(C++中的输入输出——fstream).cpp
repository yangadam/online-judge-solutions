#include<fstream>
using namespace std;
ifstream fin("data.in");
ofstream fout("data.out");
int main()
{
	int a, b;
	while(fin >> a >> b) fout << a+b << "\n";
	return 0;
}