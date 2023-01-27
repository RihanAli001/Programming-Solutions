#include <stdio.h>
int digit(int x)
{
	int i = 0;
	if (x > 0)
		i = 1 + digit(x / 10);
	return i;
}
int main()
{
	int a;
	printf("      [ For getting know how many digits in a number ]\n");
	printf("\nType any number >>| ");
	scanf("%d", &a);
	printf("\n// Here is the answer...");
	printf("\n   Digits >>| %d |\n", digit(a));
	getchar();
	getchar();
}