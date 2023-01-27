#include <stdio.h>
int main()
{
	int a, b, c = 0;
	float d, e = 0;
	printf("[ Type numbers then type 0 and get sum and average of them ]\n\n>>| ");
	for (a = 1; a >= 0; a++)
	{
		scanf("%d", &b);
		if (b > 0)
		{
			c = c + b;
			e = ++e;
		}
		else if (b == 0)
		{
			break;
		}
	}
	printf("\n// Here is your Result...\n");
	printf("sum is = %d\n", c);
	d = c / e;
	printf("Average is = %.2f", d);
	getchar();
	getchar();
}