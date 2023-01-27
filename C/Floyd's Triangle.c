#include <stdio.h>
int main()
{
	int a, i, j;
	printf("[ Floyd's Triangle ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your Floyd's Triangle ||\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if ((i % 2 != 0) && (j % 2 != 0) || (j % 2 == 0) && (i % 2 == 0))
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}