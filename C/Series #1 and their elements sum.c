#include <stdio.h>
int facto(int x);
int main()
{
	int a, i, b = 0;
	printf("[ To obtain a series #1 and their elements sum ]\nType any number >>| ");
	scanf("%d", &a);
	printf("\n------------------------------------------------------------\n");
	printf("|| Here is your series... ||\n");
	printf("------------------------------------------------------------\n");
	for (i = 1; i <= a; i++)
	{
		printf("%d!%d!", i, i + 1);
		b += facto(i) * facto(i + 1);
		if (i == a)
			break;
		printf(" + ");
	}
	printf("\n\nSum = %d", b);
	printf("\n------------------------------------------------------------\n");
}
int facto(int x)
{
	int c = 1, i;
	for (i = 1; i <= x; i++)
		c *= i;
	return c;
}