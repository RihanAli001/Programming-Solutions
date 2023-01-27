#include <stdio.h>
int main()
{
	int i, j, a;
	printf("[ Type any number to display left angle number triangle ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Here is your triangle ||\n\n");
	for (i = 1; i <= a; ++i)
	{
		for (j = a; j > i; --j)
		{
			printf("   ");
		}
		for (j = 1; j <= i; ++j)
		{
			if (j < 10)
			{
				printf(" %d ", j);
			}
			else
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}