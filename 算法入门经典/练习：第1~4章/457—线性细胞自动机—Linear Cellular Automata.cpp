#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int dna[10];
		for(int i = 0; i < 10; i++)
			scanf("%d", &dna[i]);
		int dish[42] = {0};
		dish[20] = 1;
		for(int i = 0; i <50; i++)
		{
			for(int j = 1; j < 41; j++)
				switch(dish[j])
				{
					case 0: printf(" ");break;
					case 1: printf(".");break;
					case 2: printf("x");break;
					case 3: printf("W");break;
				}
			printf("\n");
			int temp[42] = {0};
			for(int j = 1; j < 41; j++)
				temp[j] = dish[j-1] + dish[j] + dish[j+1];
			for(int j = 1; j < 41; j++)
				dish[j] = dna[temp[j]];
		}
		if(n)
			printf("\n");
	}
	return 0;
}