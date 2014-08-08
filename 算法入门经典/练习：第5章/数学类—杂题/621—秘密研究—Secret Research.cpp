#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		char s[1000];
		scanf("%s", s);
		int l = strlen(s);
		if(!strcmp(s, "1") || !strcmp(s, "4") || !strcmp(s, "78"))
			printf("+\n");
		else if(s[l-2] == '3' && s[l-1] == '5')
			printf("-\n");
		else if(s[0] == '9' && s[l-1] == '4')
			printf("*\n");
		else if(s[0] == '1' && s[1] == '9' && s[2] == '0')
			printf("?\n");
	}
	return 0;
}