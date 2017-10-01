#include<stdio.h>
#include<string.h>
int main()
{
	int n,len;
	char s[51];
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
label:
		memset(s,0,sizeof(s));
		if(j==0)
			getchar();
		gets(s);
		if(!(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'))
		{
			printf("no\n");
			continue;
		}
		len=strlen(s);
		for(int i=1;i<len;i++)
		{
			if(!(s[i]=='_'||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'))
			{
				printf("no\n");
				j++;
				goto label;
			}
		}
		printf("yes\n");
	}
	return 0;
}