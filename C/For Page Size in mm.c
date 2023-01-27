#include <stdio.h>
int main()
{
	int a = 1682, b = 1189, c, i, j, k;
	printf("\t       [ Type Page size name number ]\n\n>>| A");
	scanf("%d", &c);
	printf("\n");
	for (i = 0; i <= c; ++i)
	{
		j = b;
		k = a / 2;
		printf("  A%-2d =| %4d mm  X  %3d mm |\n", i, j, k);
		a = j;
		b = k;
	}
	printf("\n\n|| Here is your A%d page size ||\n\n   A%d =| %d mm  X  %d mm |\n", c, i - 1, j, k);
}