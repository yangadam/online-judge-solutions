#include<stdio.h>
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(x==0&&y==0)
			break;
		int flag=0;
		if(x<=41&&y>=41)
			flag=1;
		if(x<=42&&y>=42)
			flag=1;
		if(x<=44&&y>=44)
			flag=1;
		if(x<=49&&y>=49)
			flag=1;
		if(flag==0)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
}