#include <stdio.h>
int main()
{
	int a, i, j;
	printf("Plus Pattern.\n");
	printf("Type any number : ");
	scanf("%d", &a);
	printf("\nHere is your pattern.....\n\n");
	for (i = 1; i <= (2 * a) - 1; i++)
	{
		for (j = 1; j <= (2 * a) - 1; j++)
		{
			if ((j == a) || (i == a) || (j == 2 * a - i) || (i == j) || (j == 1) || (j == 2 * a - 1) || (i == 1) || (i == 2 * a - 1))
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}
}