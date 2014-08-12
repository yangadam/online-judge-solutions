#include<stdio.h>
#include<string.h>

int t,n,i,j,s,e,ans,k,z,max,m,a[100010];

int main()
{
	scanf("%d",&m);
	for (k=1;k<=m;k++)
	{
		t=0; ans=-1001; max=-1001;
		s=e=1; j=0;
		scanf("%d",&n);
		for (i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if (t<0) t=0;
			if (max<a[i]) {max=a[i]; z=i;}
			if (a[i]<=0) j++;
			t+=a[i];
			if (t>ans) {ans=t; e=i;}
		}
		t=ans; s=e+1;
		while ((t)||(a[s-1]==0))
		{
			t-=a[s-1]; s--;
		}
		
		if (j==n) {ans=max; e=s=z;}
		printf("Case %d:\n",k);
		printf("%d %d %d\n",ans,s,e);
		if (k!=m) printf("\n");
	}
	
	return 0;
}
