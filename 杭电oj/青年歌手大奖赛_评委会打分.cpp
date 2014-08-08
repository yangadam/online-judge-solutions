#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		float max=0,min=100,score,aver=0;
		int i=n;
		while(i--)
		{
			scanf("%f",&score);
			aver+=score;
			max=((max>score)?max:score);
			min=((min<score)?min:score);
		}
		aver-=(min+max);
		aver/=(n-2);
		printf("%.2f\n",aver);
	}
}