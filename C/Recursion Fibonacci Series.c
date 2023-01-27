#include <stdio.h>
void fibonacci(int, int, int);
int main()
{
	int a;
	printf("[ For display the FIBONACCI series ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	printf("\n|| Here is the Series....... ||\n\n");
	fibonacci(a, 0, 1);
}
void fibonacci(int n, int j, int k)
{
	j = j + k;
	k = j - k;
	if (n > 1)
	{
		printf("%d + ", j);
		fibonacci(n - 1, j, k);
	}
	else
	{
		printf("%d", j);
	}
}