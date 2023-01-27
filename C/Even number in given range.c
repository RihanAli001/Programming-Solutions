#include <stdio.h>
int main()
{
	int a, b, i;
	printf("[ Even numbers in given range a to b ]\na >>| ");
	scanf("%d", &a);
	printf("b >>| ");
	scanf("%d", &b);
	printf("\n|| Here are even number in given range ||\n\n");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			printf("%d\t", i);
		if (i % 16 == 0)
			printf("\n");
	}
}