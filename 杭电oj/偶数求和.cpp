#include<stdio.h>
int main()
{
	int n,m;
	int j=0,sum;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		sum=0,j=0;
		if(m==n)
		{
			for(int i=2;i<=2*m;i+=2)
				sum+=i;
			printf("%d",sum/m);
		}
		else
		{
			for(int i=2;i<=2*n;i+=2)
			{
				sum+=i;
				j++;
				if(j==n&&n%m!=0)
				{
					printf(" %d",(n/m*m*2+2+2*n)*(n%m)/2);
					break;
				}
				if(j%m==0)
				{
					if(j/m==1)
						printf("%d",sum/m);
					else
						printf(" %d",sum/m);
					sum=0;
				}
			}
		}
		putchar('\n');
	}
	return 0;
}