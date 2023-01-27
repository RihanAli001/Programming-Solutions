#include <stdio.h>
int sum_of_n(int);
int main()
{
	int a, b;
	printf("[ Sum of N numbers ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	b = sum_of_n(a);
	printf("\nSum =| %d |", b);
}
int sum_of_n(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else
	{
		return (n + sum_of_n(n - 1));
	}
}