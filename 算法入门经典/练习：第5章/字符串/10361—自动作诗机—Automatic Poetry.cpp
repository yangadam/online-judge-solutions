#include<stdio.h>
#include<string.h>
#define MAXN 105
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		char input[MAXN], output[MAXN];
		char *temp1, *temp2, *temp3, *temp4;
		gets(input); gets(output);
		temp1 = strstr(input, "<") + 1;
		temp2 = strstr(temp1, ">") + 1;
		temp3 = strstr(temp2, "<") + 1;
		temp4 = strstr(temp3, ">") + 1;
		int i = 0; while(input[i] != '<') putchar(input[i++]);
		i = 0; while(temp1[i] != '>') putchar(temp1[i++]);
		i = 0; while(temp2[i] != '<') putchar(temp2[i++]);
		i = 0; while(temp3[i] != '>') putchar(temp3[i++]);
		i = 0; while(temp4[i] != '\0') putchar(temp4[i++]);
		putchar(10);
		i = 0; while(output[i] != '.') putchar(output[i++]);
		i = 0; while(temp3[i] != '>') putchar(temp3[i++]);
		i = 0; while(temp2[i] != '<') putchar(temp2[i++]);
		i = 0; while(temp1[i] != '>') putchar(temp1[i++]);
		i = 0; while(temp4[i] != '\0') putchar(temp4[i++]);
		putchar(10);
	}
	return 0;
}