#include <stdio.h>
int digit_product(int x)
{
	int i = 1;
	if (x > 0)
		i = (x % 10) * digit_product(x / 10);
	return i;
}
int main()
{
	int a;
	printf("[ Product of digits of the given number ]\nType any number >>| ");
	scanf("%d", &a);
	printf("\nProduct of digits =| %d |\n", digit_product(a));
}