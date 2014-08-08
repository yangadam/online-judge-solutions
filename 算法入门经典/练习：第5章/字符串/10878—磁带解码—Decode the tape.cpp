#include<stdio.h>
int main()
{
	char s[20];
	while(gets(s) != NULL)
	{
		if(s[0] == '_')
			continue;
		int ascii = 0;
		for(int i = 0; s[i] != '\0'; i++)
			if(s[i] == 'o')
				ascii = ascii*2 + 1;
			else if(s[i] == ' ')
				ascii *= 2;
		putchar(ascii);
	}
	return 0;
}