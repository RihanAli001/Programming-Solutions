#include <stdio.h>
int main()
{
	int a, b, c = 1, i;
	printf("\t\t[ Find HCF of two numbers ]\n\n");
	printf("Type any two numbers >>| ");
	scanf("%d%d", &a, &b);
	printf("\n|| Here is the result.... ||\n\n");
	for (i = 1; (i <= a) && (i <= b); i++)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			c = c * i;
			a = a / i;
			b = b / i;
			i = 1;
		}
	}
	printf("HCF is =| %d |", c);
}