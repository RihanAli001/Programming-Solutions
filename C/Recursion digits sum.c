#include <stdio.h>
int digit_sum(int);
int main()
{
	int a, b;
	printf("[ For digits sum ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	b = digit_sum(a);
	printf("\nDigits Sum =| %d |", b);
}
int digit_sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 10 + digit_sum(n / 10));
	}
}