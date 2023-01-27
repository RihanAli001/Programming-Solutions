#include <stdio.h>
void main()
{
	int a, b, c;
	printf("[ Find third angel if two angels are given ]\n\n");
labl:
	printf("Enter first and second angel >>| ");
	scanf("%d%d", &a, &b);
	c = 180 - a - b;
	if ((c >= 0) && (a >= 0) && (b >= 0))
	{
		printf("\nThird angel is =| %d |", c);
	}
	else
	{
		printf("\n<< One of them or both inputs are wrong >>\n");
		goto labl;
	}
}