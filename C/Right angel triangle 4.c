#include <stdio.h>
int main()
{
	int i, j, a;
	char b;
	printf("[ Type any number to display * right angle teiangle ]\n\n>>| ");
	scanf("%d", &a);
	printf("\n|| Here is your triangle ||\n\n");
	for (i = 1; i <= a; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			b = 'a';
			printf("  %c", b);
			b = ++b;
		}
		printf("\n");
	}
}