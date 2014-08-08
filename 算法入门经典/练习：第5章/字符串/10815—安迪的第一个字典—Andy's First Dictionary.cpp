#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char word[5001][100];

int cmp(const void *_a, const void *_b)
{
	char *a = (char*)_a;
	char *b = (char*)_b;
	return strcmp(a, b);
}
int main()
{
	char input[300] = {0};
	int num = 0;
	while(fgets(input, 300, stdin) != NULL)
	{
		if(input[0] == '\0')
			continue;
		int n = 0;
		char temp[100];
		for(int i = 0; input[i] != '\0'; i++)
		{
			if(isalpha(input[i]))
				temp[n++] = tolower(input[i]);
			else
			{
				temp[n] = '\0';
				if(temp[0] != '\0')
				{
					int j;
					for(j = 0; j < num; j++)
						if(!strcmp(temp, word[j]))
							break;
					if(j >= num)
						strcpy(word[num++], temp);
				}
				n = 0;
			}
		}
	}
	qsort(word, num, sizeof(word[0]), cmp);
	for(int i = 0; i < num; i++)
		puts(word[i]);
	return 0;
}