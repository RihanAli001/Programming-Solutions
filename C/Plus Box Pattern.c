#include <stdio.h>
int main()
{
	int a, i, j;
	printf("[ Plus Pattern ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your pattern..... ||\n\n");
	for (i = 1; i <= (2 * a) - 1; i++)
	{
		for (j = 1; j <= (2 * a) - 1; j++)
		{
			if ((j == a) || (i == a) || (j == a + 1 - i) || (j == a + i - 1) || (i == a - 1 + j) || (i == 3 * a - j - 1))
				printf("+ ");
			else
				printf("  ");
		}
		printf("\n");
	}
}