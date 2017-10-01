#include<stdio.h>
#include<string.h>
int main()
{
	char s[101],ss[510];
	while(gets(s))
	{
		int len,num=0,j=0;
		len=strlen(s);
		char max=s[0];
		for(int i=1;i<len;i++)
			if(s[i]>max)
				max=s[i];
		for(int i=0;i<len;i++)
		{
			ss[j]=s[i];
			if(s[i]==max)
			{
				ss[j+1]='(',ss[j+2]='m',ss[j+3]='a',ss[j+4]='x',ss[j+5]=')';
				j+=5;
				num+=5;
			}
			j++;
		}
		ss[j]='\0';
		printf("%s\n",ss);
	}
}