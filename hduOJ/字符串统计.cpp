#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int num=0,l;
		char s[100];
		scanf("%s",s);
		l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
				num++;
		}
		printf("%d\n",num);
	}
	return 0;
}