#include <stdio.h>
void main()
{
	int a, b, c = 0, d = 1;
	printf("      [ Type any number to convert in binary number ]\n\n>>|");
	scanf("%d", &a);
	printf("\nDecimal to Binary conversion is =| ");
	while (a >= 1)
	{
		b = a % 2;
		c = c + b * d;
		d = d * 10;
		a = a / 2;
	}
	printf("%d |", c);
	getchar();
	getchar();
}