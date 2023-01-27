#include <stdio.h>
int main()
{
	int a;
	printf("\t[ TYPE ANY NUMBER TO DISPLAY N TO 1 NUMBERS ]\n\n>>|");
	scanf("%d", &a);
	printf("\n|| Here is your reverse natural numbers ||\n\n");
	while (a > 0)
	{
		if (a % 10 == 0)
			printf("\n");
		printf("%5d ", a);
		a = a - 1;
	}
	getchar();
	getchar();
}