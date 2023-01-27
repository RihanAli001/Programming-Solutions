#include <stdio.h>
int reverse(int x);
int main()
{
	int a, b;
	printf("[ For checking Polindrome number ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Calculation.... ||\n\n");
	b = reverse(a);
	printf("<< Given number is ");
	if (b != a)
		printf("NOT ");
	printf("a Polindrome Number >>\n");
}
int reverse(int x)
{
	int y, z = 0;
	while (x > 0)
	{
		y = x % 10;
		z = z * 10 + y;
		x = x / 10;
	}
	return z;
}