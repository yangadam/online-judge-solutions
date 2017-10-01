#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s[101];
	scanf("%d",&n);
	getchar();
	for(int j=0;j<n;j++)
	{
		int len,a=0,e=0,i=0,o=0,u=0;
		if(j!=0)
			putchar('\n');
		gets(s);
		len=strlen(s);
		for(int k=0;k<len;k++)
		{
			switch (s[k])
			{
			case 'a':a++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'o':o++;break;
			case 'u':u++;break;
			default:break;
			}
		}
		printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
	}
	return 0;
}