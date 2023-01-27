#include <stdio.h>
int main()
{
	int a, b = 0, i;
	printf("[ Even numbers and their sum in given 1 to a ]\na >>| ");
	scanf("%d", &a);
	printf("\n|| Here is even numbers and thier sum ||\n\n");
	for (i = 2; i <= a; i = i + 2)
	{
		printf("%d\t", i);
		b += i;
		if (i % 16 == 0)
			printf("\n");
	}
	printf("\n\nSum =| %d |", b);
}