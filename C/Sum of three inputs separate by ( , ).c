#include <stdio.h>

int main()
{
	int a, b, c, sum;
	printf("Type any three numbers separate by comma >>| ");
	scanf("%d,%d,%d", &a, &b, &c);
	sum = a + b + c;
	printf("\nThe sum of inputs is =| %d |\n", sum);
}
