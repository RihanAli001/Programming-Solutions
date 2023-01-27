#include <stdio.h>
int pow(int x, int y);
int facto(int x);
int main()
{
	int a, i, x, e;
	float b = 0, c, d;
	printf("\t\t[ Sum of (sinx)^-1 series ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("Enter the value of X >>| ");
	scanf("%d", &x);
	printf("\n|| Here is your series.... ||\n\n= 1");
	for (i = 0; i <= 2 * a; i = i + 2)
	{
		c = pow(-1, i / 2);
		d = pow(x, i);
		b = b + (c * d) / facto(i);
		if (i == 2 * a)
			break;
		if ((i / 2) % 2 == 0)
			printf(" - ");
		else
			printf(" + ");
		printf("X^%d/%d!", i + 2, i + 2);
	}
	printf("\n\nSum =| %f |\n", b);
}
int facto(int x)
{
	int i, j = 1;
	for (i = 1; i <= x; i++)
	{
		j = j * i;
	}
	return j;
}
int pow(int x, int y)
{
	int i, j = 1;
	for (i = 1; i <= y; i++)
	{
		j = j * x;
	}
	return j;
}