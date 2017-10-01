#include <stdio.h>
int main()
{
	int mon[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	int sum;
	int y,m,d;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		sum=0;
		getchar();
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			mon[2]=29;
			for(int i=1;i<m;i++)
				sum+=mon[i];
		}
		else
		{
			mon[2]=28;
			for(int i=1;i<m;i++)
				sum+=mon[i];
		}
		sum+=d;
		printf("%d\n",sum);
	}
	return 0;
}
