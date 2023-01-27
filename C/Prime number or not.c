#include <stdio.h>
int main()
{
	int a, i;
	printf("[ For check whether a given number is prime or not ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Result... ||\n\n");
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("<< Given number is not prime number >>\n");
			break;
		}
	}
	if (i == a)
		printf("<< Given number is a prime number >>\n");
}