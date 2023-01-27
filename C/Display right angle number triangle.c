#include <stdio.h>
int main()
{
	int i, j, a, b = 1, c;
	printf("\t\t[ RIGHT ANGLE NUMBER TRIANGLE ]\n\nType Any Number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your triangle... ||\n");
	for (i = 1; i <= a; ++i)
	{
		printf("\n");
		for (j = 1; j <= i; ++j)
		{
			if (b < 10)
			{
				printf(" %d ", b);
			}
			else
			{
				printf("%d ", b);
			}
			b++;
		}
	}
	getchar();
	getchar();
}