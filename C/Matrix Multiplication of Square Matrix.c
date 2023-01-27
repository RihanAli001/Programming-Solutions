#include <stdio.h>
void zero_value(int *, int);
void scan_matrix(int *, int);
int main()
{
	int a[3][3], b[3][3], c[3][3], x, y, z;
	zero_value(c, 3 * 3);
	printf("[ Multiplication Of The Square Matrix ]\n");
	printf("Type the first matrix's 9 elements\n>>| ");
	scan_matrix(a, 3 * 3);
	printf("Type the second matrix's 9 elements\n>>|");
	scan_matrix(b, 3 * 3);
	printf("\n|| Here is multiplication of matrix... ||\n\n");
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			for (z = 0; z < 3; z++)
			{
				c[x][y] = c[x][y] + a[x][z] * b[z][y];
			}
			printf("%d  ", c[x][y]);
		}
		printf("\n");
	}
}
void zero_value(int *i, int n)
{
	if (n > 0)
	{
		*i = 0;
		zero_value(i + 1, n - 1);
	}
}
void scan_matrix(int *i, int n)
{
	if (n > 0)
	{
		scanf("%d", i);
		scan_matrix(i + 1, n - 1);
	}
}