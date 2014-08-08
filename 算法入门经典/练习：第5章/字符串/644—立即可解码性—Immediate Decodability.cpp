#include<stdio.h>
#include<string.h>
int main()
{
	char code[10][20];
	int num = 0;
	while(1)
	{
		if(gets(code[0]) == NULL)
			break;
		int i = 0;
		while(strcmp(gets(code[++i]), "9"));
		int ok = 0;
		for(int j = 0; j < i-1; j++)
			for(int k = j + 1; k < i; k++)
			{
				int len;
				if(strlen(code[j]) < strlen(code[k]))
					len = strlen(code[j]);
				else
					len = strlen(code[k]);
				if(!strncmp(code[j], code[k], len))
				{
					ok = 1;
					break;
				}
				if(ok)
					break;
			}
		if(ok)
			printf("Set %d is not immediately decodable\n", ++num);
		else
			printf("Set %d is immediately decodable\n", ++num);
	}
	return 0;
}