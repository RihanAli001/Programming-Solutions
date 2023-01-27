#include <stdio.h>
int main()
{
	int a, b, c = 1;
	printf("   [ Type any number to find factorial of that number ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n// Here is your Factorial...\n=");
	for (b = a; b > 0; --b)
	{
		c = b * c;
		if (b > 1)
			printf(" %d *", b);
	}
	printf(" 1\n=| %d |", c);
	getchar();
	getchar();
}