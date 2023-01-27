#include <stdio.h>
int sum(int a, int b);
int main()
{
	int a, b;
	printf("\t     [ TYPE ANY TWO NUMBERS TO ADD ]\n\n>>| ");
	scanf("%d%d", &a, &b);
	sum(a, b);
	getchar();
	getchar();
}
int sum(int a, int b)
{
	int c;
	c = a + b;
	printf("\nSUM = %d", c);
	return c;
}