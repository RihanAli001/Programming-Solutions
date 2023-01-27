#include <stdio.h>
int main()
{
	int a, b = 0, c = 1, i;
	printf("\t\t    [ Fibonacci Series ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your series ||\n\n");
	for (i = 1; i <= a; i++)
	{
		b = b + c;
		c = b - c;
		printf("%d", b);
		if (i == a)
		{
			break;
		}
		printf(" + ");
	}
	getchar();
	getchar();
}