#include <stdio.h>
int main()
{
	int a, b, i;
	printf("[ Odd number in given range a to b ]\n a >>| ");
	scanf("%d", &a);
	printf(" b >>| ");
	scanf("%d", &b);
	printf("\n|| Here are odd number in given range ||\n\n");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 1)
			printf("%d\t", i);
		if (i % 16 == 0)
			printf("\n");
	}
}