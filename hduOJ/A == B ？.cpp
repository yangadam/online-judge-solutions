#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000],b[100000];
	while(scanf("%s%s",a,b)!=EOF)
	{
		getchar();
		int j=0,x,y;
		x=strlen(a);
		if(strstr(a,".")>0)
		{
			j=x-1;
			while(a[j]=='0'&&j>0)
			{
				a[j]='\0';
				j--;
				x--;
			}
		}
		if(a[x-1]=='.')
			a[x-1]='\0';
		j=0;
		y=strlen(b);
		if(strstr(b,".")>0)
		{
			j=y-1;
			while(b[j]=='0'&&j>0)
			{
				b[j]='\0';
				j--;
				y--;
			}
		}
		if(b[y-1]=='.')
			b[y-1]='\0';
		if(strcmp(a,b)==0)
			printf("YES");
		else
			printf("NO");
		printf("\n");

	}
	return 0;
}

