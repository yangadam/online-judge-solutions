#include<stdio.h>
int main()
{
	int m,n,a[101];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(m==0&&n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		a[n]=m;
		int temp;
		for(int i=n;i>0;i--)
			if(a[i]<a[i-1])
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("%d\n",a[n]);
	}
	return 0;
}