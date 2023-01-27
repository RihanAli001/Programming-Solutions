#include <stdio.h>
int main()
{
	int a = 1, b, c;
	printf("[ Type number which number's table you want ]\n>>|");
	scanf("%d", &b);
	printf("\n||Here is your table ||\n\n");
	while (a <= 10)
	{
		c = b * a;
		printf("%d * %d = %d\n", b, a, c);
		a = ++a;
	}
}