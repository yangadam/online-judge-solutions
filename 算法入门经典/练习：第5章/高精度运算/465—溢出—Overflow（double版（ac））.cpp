#include<stdio.h>
#include<stdlib.h>
#define MAX_INT  (1<<31)-1
char num1[300],num2[300];
int main()
{
	char  c;
	while (scanf("%s %c %s", num1, &c, num2)==3)
	{
		printf("%s %c %s\n", num1, c, num2);
		double a, b;
		a = atof(num1);
		b = atof(num2);
		if (a > MAX_INT)
			printf("first number too big\n");
		if (b > MAX_INT)
			printf("second number too big\n");
		if (c=='+' && a+b > MAX_INT)
			printf("result too big\n");
		if (c=='*' && a*b > MAX_INT)
			printf("result too big\n");
	}
	return 0;
}