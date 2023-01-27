#include <stdio.h>
int facto(int x);
int main()
{
	int a, b, c = 0, d;
	printf("[ For checking Strong Number ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	b = a;
	while (b > 0)
	{
		d = b % 10;
		c = c + facto(d);
		b = b / 10;
	}
	printf("\n|| Calculation.... ||\n\n=| %d |\n", c);
	printf("\n<< Given number is ");
	if (c != a)
	{
		printf("NOT ");
	}
	printf("a STRONG NUMBER >>\n");
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