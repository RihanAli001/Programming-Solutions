#include <stdio.h>
#include <math.h>
void main()
{
	int a, b, c, f;
	float d, e, root1, root2, rooti;
labl:
	printf(" Type quadratic equation's coefficient a, b and c.\n >>| ");
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		printf(" Roots are real...\n");
		e = sqrt(d);
		root1 = (-b + e) / 2.0 * a;
		root2 = (-b - e) / 2.0 * a;
		printf(" X1 = %.2f\n X2 = %.2f\n", root1, root2);
	}
	else
	{
		root1 = -b / 2.0 * a;
		root2 = -b / 2.0 * a;
		if (d == 0)
		{
			printf(" Roots are equal...\n");
			printf(" X1 = %.2f\n X2 = %.2f\n", root1, root2);
		}
		else
		{
			printf(" Roots are imaginary...\n");
			e = sqrt(-d);
			rooti = e / 2.0 * a;
			printf(" X1 =  %.0f + %.2fi\n X2 =  %.0f - %.2fi\n", root1, rooti, root2, rooti);
		}
	}
	getchar();
	getchar();
}