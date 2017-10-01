#include<stdio.h>
#include<string.h>
int main()
{
	char s[220];
	int len;
	while(gets(s))
	{
		len=strlen(s);
		s[0]-=32;
		for(int i=1;i<len;i++)
		{
			if(s[i]>='a'&&s[i]<='z'&&s[i-1]==' ')
				s[i]-=32;
		}
		printf("%s\n",s);
	}
	return 0;
}