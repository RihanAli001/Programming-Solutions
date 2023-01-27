#include <stdio.h>
int main()
{
	float a1, a2, b1, b2, c1, c2, x, y;
	printf("\t\t[ For Equation Solving ]\n\n");
	printf(" Enter the value of a1, b1, c1, a2, b2 and c2\n >>|");
	scanf("%f%f%f%f%f%f", &a1, &b1, &c1, &a2, &b2, &c2);
	x = (b2 * c1 - c2 * b1) / (a1 * b2 - a2 * b1);
	y = (a2 * c1 - a1 * c2) / (a2 * b1 - a1 * b2);
	printf("\n X = %.2f\n Y = %.2f\n", x, y);
	getchar();
	getchar();
}