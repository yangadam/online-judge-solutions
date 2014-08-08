#include <stdio.h>
#include <ctype.h>
int main()
{
	int num, i;
	char b;
	num = 0;
	while ((b=getchar())!= EOF)
	{
		if(isdigit(b))
			num += b-'0';
		else if (b == 'b')
		{
			for(i = 0; i < num; i++)
				putchar(32);
			num = 0;
		}
		else if(isupper(b)||b == '*')
		{
			for(i = 0; i < num; i++)
				printf("%c", b);
			num = 0;
		}
		else
			putchar(10);
	}
	return 0;
}