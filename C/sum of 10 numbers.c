#include <stdio.h>
void main()
{
	int a = 1, b, c = 0, e;
	float d;
	printf("[ Type 10 numbers and get sum and average of them ]\n\n>>| ");
	for (; a <= 10; a++)
	{
		scanf("%d", &b);
		c = c + b;
	}
	printf("\nsum is =| %d |\n\n", c);
	d = c / 10.0;
	printf("Average is =| %.2f |\n", d);
}