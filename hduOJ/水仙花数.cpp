#include<stdio.h>
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		int a[5],i=1;
		if(m<=153&&n>=153)
		{
			a[i]=153;
			i++;
		}
		if(m<=370&&n>=370)
		{
			a[i]=370;
			i++;
		}
		if(m<=371&&n>=371)
		{
			a[i]=371;
			i++;
		}
		if(m<=407&&n>=407)
		{
			a[i]=407;
			i++;
		}
		if(i==1)
			printf("no\n");
		else
		{
			for(int j=1;j<=i-2;j++)
				printf("%d ",a[j]);
			printf("%d",a[i-1]);
			printf("\n");
		}
	}
}