#include <stdio.h>
int main()
{
	int a[100][100], b = 0, n, i, j;
	printf("[ For find sum of right diogonal of a matrix ]\n");
	printf("Type the size of the matrix >>| ");
	scanf("%d", &n);
	printf("\n|| Type matrix's %d elements ||\n\n", n * n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Type value for [%d][%d] >>| ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				b = b + a[i][j];
		}
	}
	printf("\nSum of right diogonal of a matrix =| %d |\n", b);
}