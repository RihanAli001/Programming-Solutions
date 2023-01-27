#include <stdio.h>
int main()
{
	int a[3][3], b[3][3], i, j;
	printf("[ Transpose Of a Matrix ]\n");
	printf("Type matrix's 9 elements\n>>| ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n|| Here is transpose of the matrix... ||\n\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}