#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif
	
	char s[1000];
	while (gets(s) != NULL)
	{
		if (!strcmp(s, "DONE"))
		  break;
		int len = strlen(s), l = 0;
		char str[100];
		for (int i = 0; i < len; i++)
			if (isalpha(s[i]))
			  str[l++] = toupper(s[i]);
		int start = 0, end = l-1;
		while (start < end)
		{
			if (str[start] != str[end])
			  break;
			start++; end--;		//比较之后在移动start和end的位置
		}
		if (start < end)
		  puts("Uh oh..");
		else
		  puts("You won't be eaten!");
	}
	return 0;
}
