#include<stdio.h>
void print(int n,char c)
{
int i;
for(i=0;i<n;i++)
printf("%c",c);
}
int main()
{
	int i,j,n,len,wid,a[100],_a;
	char b[100],_b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%c%d",&_b,&_a);
	b[i]=_b;a[i]=_a;}
	for(i=0;i<n;i++)
	{	
		wid=a[i]/6+1;
		len=(a[i]-2)/2;
		for(j=1;j<=a[i];j++)
		{
			if(j==1||j==(a[i]+1)/2) {print(wid,' ');print(len,b[i]);printf("\n");}
			else if(j==a[i]) {print(wid,' ');print(len,b[i]);printf("\n");}
			else {print(wid,b[i]);print(len,' ');print(wid,b[i]);printf("\n");}
		}
		if(i!=n-1) printf("\n");
	}
	scanf("%d",n);
	return 0;
}