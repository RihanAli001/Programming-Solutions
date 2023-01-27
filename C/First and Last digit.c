#include <stdio.h>
int main()
{
	int a, b, c;
	printf("\t  [ FIRST AND LAST DIGITS OF A NUMBER ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	c = a % 10;
	while (a > 0)
	{
		b = a % 10;
		a /= 10;
	}
	printf("\nFirst digit =| %d |", b);
	printf("\nLast digit  =| %d |", c);
	getchar();
	getchar();
}