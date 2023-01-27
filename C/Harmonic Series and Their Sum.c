#include <stdio.h>
int main()
{
	int a, i;
	float b;
	printf("\t     [ Harmonic Series and their sum ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\nHere is your Series and their sum...\n");
	b = 0;
	for (i = 1; i <= a; ++i)
	{
		printf("1/%d", i);
		b = b + 1.0 / i;
		if (i < a)
			printf(" + ");
	}
	printf("\n=| %f |\n", b);
	getchar();
	getchar();
}