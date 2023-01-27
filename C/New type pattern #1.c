#include <stdio.h>
int main()
{
	int a, i, j, k;
	printf("\t\t[ New type pattern #1 ]\n\nType any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your pattern ||\n\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for (k = a - i + 1; k >= 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = a - 1; i >= 1; i--)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for (k = a - i + 1; k >= 1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}