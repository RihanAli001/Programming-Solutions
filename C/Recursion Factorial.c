#include <stdio.h>
int facto(int);
int main()
{
	int a, b;
	printf("[ For Factorial Calculation ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	b = facto(a);
	printf("\nFactorial =| %d |\n", b);
}
int facto(int n)
{
	if ((n == 1) || (n == 0))
	{
		return 1;
	}
	else
	{
		return (n * facto(n - 1));
	}
}