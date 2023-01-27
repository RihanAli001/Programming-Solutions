#include <stdio.h>
int main()
{
	int a, i, j;
	printf("[ Type any number to obtain pattern #3 ]\n\n>>| ");
	scanf("%d", &a);
	if (a % 2 == 0)
		a = a + 1;
	printf("\n|| Here is your pattern.... ||\n\n");
	printf("__________________________________________________________\n\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if ((i == 1) || (j == i) || (j == a - i + 1) || (i == a) || (j == 1) || (j == a))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("__________________________________________________________\n\n");
}