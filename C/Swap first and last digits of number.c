#include <stdio.h>
int digit(int x)
{
	int i = 0;
	if (x > 0)
		i = 1 + digit(x / 10);
	return i;
}
int num_F_L_swap(int x)
{
	int a, b, c = 0, d, e = 1, i;
	a = digit(x);
	for (i = 1; i <= a; i++)
	{
		b = x % 10;
		x /= 10;
		if (i == a)
		{
			c = c * 10 + b;
			e *= 10;
		}
		else if (i == 1)
		{
			d = b;
		}
		else
		{
			c = c + b * e;
			e *= 10;
		}
	}
	c = c + d * e;
	return c;
}
int main()
{
	int a;
	printf("\t[ For swap first and last digit of the number ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\nHere is your swap number...");
	printf("\n=| %d |\n", num_F_L_swap(a));
	getchar();
	getchar();
}