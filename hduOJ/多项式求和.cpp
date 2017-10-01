#include<stdio.h>
int main()
{
	int m,n[100],i,x,fu;
	float sum[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&n[i]);
	for(i=0;i<m;i++)
	{
		int j=0;
		fu=-1;
		while(n[i]--)
		{
			j++;
			fu*=-1;
			sum[i]+=1.0*fu/j;
		}
	}
	for(i=0;i<m;i++)
		printf("%.2f\n",sum[i]);
	return 0;
}