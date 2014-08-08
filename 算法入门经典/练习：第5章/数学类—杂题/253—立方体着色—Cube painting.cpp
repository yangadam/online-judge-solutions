#include<stdio.h>
int main()
{
	char cube[13];
	while(scanf("%s", cube) != EOF)
	{
		char cube1[6], cube2[6];
		for(int i = 0; i < 6; i++)
			cube1[i] = cube[i];
		char *temp = &cube[6];
		for(int i = 0; i < 6; i++)
			cube2[i] = temp[i];
		int found;
		for(int i = 0; i < 3; i++)
		{
			found = 0;
			for(int j = 0; j < 6; j++)
			{
				if(cube1[i] == cube2[j] && cube1[5-i] == cube2[5-j])
				{
					found++;
					cube2[j] = '0';
					cube2[5-j] = '0';
					break;
				}
			}
			if(!found)
				break;
		}
		if(!found)
		{
			printf("FALSE\n");
			continue;
		}
		printf("TRUE\n");
	}
	return 0;
}