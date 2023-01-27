#include <stdio.h>
int main()
{
	int i, j, k, a, b;
	printf("  [ Type any number to display Cross pattern of numbers ]");
	printf("\n\n >>|");
	scanf("%d", &a);
	printf("\n || Here is your Pattern. ||\n");
	printf("\n");
	b = a;
	for (i = 1; i <= 2 * a - 1; ++i)
	{
		if (i <= a)
		{
			for (j = 1; j <= 2 * a - 1; ++j)
			{
				if ((j == i) || (j == 2 * a - i))
				{
					printf(" %d ", i);
				}
				else
				{
					printf("   ");
				}
			}
		}
		else if (i > a)
		{
			b = b - 1;
			for (j = 1; j <= 2 * a - 1; ++j)
			{
				if ((j == i) || (j == 2 * a - i))
				{
					printf(" %d ", b);
				}
				else
				{
					printf("   ");
				}
			}
		}
		printf("\n");
	}
	getchar();
	getchar();
}