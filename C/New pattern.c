#include <stdio.h>
void line(int x)
{
	int i;
	for (i = 1; i <= x; i++)
		printf("+");
	printf("\n");
}
void lineplus(int y)
{
	int i;
	for (i = 1; i <= y; i++)
		printf("-");
	printf("\n");
}
int main()
{
	int a, b, i, j;
	printf("[ Type first number for pattern frequency and second for pattern lines ]\n");
	lineplus(10);
	printf(">>|");
	scanf("%d %d", &a, &b);
	lineplus(2 * 60);
	printf("\n");
	for (i = 1; i <= a; i++)
	{
		for (j = b; j > 1; j--)
		{
			line(j * 2);
		}
		for (; j <= b; j++)
		{
			line(2 * j);
		}
		printf("\n");
	}
	lineplus(2 * 60);
}