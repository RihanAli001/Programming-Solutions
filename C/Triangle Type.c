#include <stdio.h>
void main()
{
	int a, b, c;
	printf("[ For find the type of the Triangle ]\n(EQUILATERAL, ISOSCELES ANSCALENE)\n\nType the length of every side of triangle >>| ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\nThe triangle is ");
	if ((a == b) && (b == c))
	{
		printf("EQUILATERAL");
	}
	else if ((a == b) && (b != c) || (b == c) && (c != a) || (c == a) && (a != b))
	{
		printf("ISOSCELES");
	}
	else if ((a != b) && (b != c) && (c != a))
	{
		printf("SCALENE");
	}
}