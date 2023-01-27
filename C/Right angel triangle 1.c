#include <stdio.h>
int main()
{
	int i, j, a;
	printf("[ Type any number to display right angle triangle ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Here is your triangle ||\n\n");
	for (i = 1; i <= a; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}