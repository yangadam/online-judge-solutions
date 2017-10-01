#include<stdio.h>
int main()
{
	float a[21];
	int C;
	scanf("%d",&C);
	a[1]=0;a[2]=0.5;
	for(int i=3;i<=20;i++)
		a[i]=((i-1)*a[i-1]+a[i-2])/i;
	while(C--)
	{
		int n;
		scanf("%d",&n);
		printf("%.2f%%\n",a[n]*100);
	}
	return 0;

}