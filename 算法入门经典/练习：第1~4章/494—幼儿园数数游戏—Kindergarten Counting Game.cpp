#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100000
char ch[MAX];
int main()
{
	while(fgets(ch, sizeof(ch), stdin) != NULL)
	{
		int i,word=0,count=0;
		for(i = 0; i < strlen(ch); i++)
		{
			if(isalpha(ch[i]))
				word = 1;
			else
			{
				if(word == 1)
				{
					count++;
					word = 0;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}