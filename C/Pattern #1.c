#include <stdio.h>
int main()
{
	int a, i, j;
	printf("\t [ Type any number to obtain pattern #1 ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Here is your pattern.... ||\n");
	printf("____________________________________________________________\n\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("____________________________________________________________\n\n");
}