#include <stdio.h>
int main()
{
	int a, b, c, i;
	printf("[ For whether a given number is perfect number or not ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Calculation... ||\n\n");
	b = a;
	c = 0;
	for (i = 1; i < b; i++)
	{
		if (b % i == 0)
		{
			c = c + i;
			printf("%d ", i);
			if (c == a)
				break;
			printf("+ ");
		}
	}
	if (c == a)
		printf(" =| %d |\n\n<< Given number is Perfect number >>\n", c);
	else
		printf(" =| %d |\n\n<< Given number is not Perfect number >>\n", c);
}