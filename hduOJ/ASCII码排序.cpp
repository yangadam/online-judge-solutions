#include<stdio.h>
int main()
{
	char s[3],temp;
	while(scanf("%s",s)!=EOF)
	{
		if(s[0]>s[1]){temp=s[0];s[0]=s[1];s[1]=temp;}
		if(s[1]>s[2]){temp=s[1];s[1]=s[2];s[2]=temp;}
		if(s[0]>s[1]){temp=s[0];s[0]=s[1];s[1]=temp;}
		printf("%c %c %c\n",s[0],s[1],s[2]);
	}
	return 0;
}