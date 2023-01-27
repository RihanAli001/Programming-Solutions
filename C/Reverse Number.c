#include <stdio.h>
int main()
{
	int a, b;
	printf("[ To display the reverse of the given number ]\nType any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is your reverse number ||\n\n>>| ");
	while (a > 0)
	{
		b = a % 10;
		printf("%d", b);
		a = a / 10;
	}
}