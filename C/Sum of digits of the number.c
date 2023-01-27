#include <stdio.h>
int num_digit_sum(int x)
{
	int i;
	if (x > 0)
		i = x % 10 + num_digit_sum(x / 10);
	else
		i = x % 10;
	return i;
}
int main()
{
	int a;
	printf("             [ For sum of digits of the number ]\n\nType any number >>| ");
	scanf("%d", &a);
	printf("\nDigit Sum =| %d |\n", num_digit_sum(a));
}