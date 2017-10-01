#include<stdio.h>
#include<string.h>
int main()
{
	int len,n,flag;
	char a[101];
	scanf("%d",&n);
	for(int k=0;k<n;k++)
	{
		flag=0;
		if(k==0)
			getchar();
		gets(a);
		len=strlen(a);
		for(int i=0;i<=len/2;i++)
		{
			if(a[i]!=a[len-i-1])
			{
				printf("no\n");
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("yes\n");
	}
	return 0;
}