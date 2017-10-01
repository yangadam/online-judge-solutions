#include<stdio.h>
int circle(long n)
{
	int sum=1;
	while(1)
	{
		if(n==1)
			return sum;
		else
		{
			if(n%2==1)
				n=3*n+1;
			else
				n/=2;
			sum++;
		}
	}
}
int main()
{
	long i,j;
	while(scanf("%d%d",&i,&j)!=EOF)
	{
		int max=0,flag=0;
		long temp;
		if(i>j)
		{
			temp=i;
			i=j;
			j=temp;
			flag=1;
		}
		for(int k=i;k<=j;k++)
		{
			temp=circle(k);
			max=((max>temp)?max:temp);
		}
		if(flag==0)
			printf("%d %d %d\n",i,j,max);
		else
			printf("%d %d %d\n",j,i,max);
	}
	return 0;
}