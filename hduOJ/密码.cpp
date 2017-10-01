#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int len,L=0,l=0,num=0,t=0;
		char m[51];
		getchar();
		scanf("%s",m);
		len=strlen(m);
		if(len>=8&&len<=16)
		{
			for(int i=0;i<=len;i++)
			{
				if(m[i]>='A'&&m[i]<='Z')
					L=1;
				if(m[i]>='a'&&m[i]<='z')
					l=1;
				if(m[i]>='0'&&m[i]<='9')
					num=1;
				if(m[i]=='~'||m[i]=='!'||m[i]=='@'||m[i]=='#'||m[i]=='$'||m[i]=='%'||m[i]=='^')
					t=1;
			}
			if(L+l+num+t>2)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}