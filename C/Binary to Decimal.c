#include <stdio.h>
void main()
{
	int a, c = 0, d = 1;
	printf("      [ Type any number to convert in decimal number ]\n\n>>|");
	scanf("%d", &a);
	printf("\nBinary to Decimal conversion is =| ");
	while (a > 0)
	{
		c = c + (a % 10) * d;
		d = d * 2;
		a = a / 10;
	}
	printf("%d |", c);
	getchar();
	getchar();
}