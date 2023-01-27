#include <stdio.h>
int main()
{
	int a, i, j;
	printf("[ Type any number to obtain pattern #2 ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Here is your pattern.... ||\n\n");
	printf("__________________________________________________________\n\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if ((i == 1) || (i == a) || (j == 1) || (j == a))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("__________________________________________________________\n\n");
}