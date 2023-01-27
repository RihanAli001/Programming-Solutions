#include <stdio.h>
int main()
{
	int a, i, sum = 0;
	printf("[ Series sum 2 + 4 + 6 + ..... + n ]");
	printf("\nType any number >>| ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("\n\nSum =| %d |\n", sum);
}