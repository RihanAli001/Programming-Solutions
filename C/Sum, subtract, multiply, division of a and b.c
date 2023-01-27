#include <stdio.h>
void main()
{
	float a, b, c, d, e, f;
	printf("\t[ Sum, Subtract, Multiply and Sivision ]\n\nType any two numbers >>| ");
	scanf("%f%f", &a, &b);
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	printf("\nThe Sum Of a And b Is\t =  %.2f\nSubtraction Is\t\t =  %.2f\nMultiply Is\t\t =  %.2f\nAnd Division Is\t\t =  %.2f", c, d, e, f);
}