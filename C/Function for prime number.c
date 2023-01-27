#include <stdio.h>
void prime(int);
int main()
{
	int a;
	printf("\t   [ Whether a number is PRIME or not ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	prime(a);
	getchar();
	getchar();
}
void prime(int n)
{
	int i, j = 0;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			j = j + 1;
	}
	if ((j == 0) && (n > 1))
		printf("\n|| Given number %d is PRIME ||\n", n);
	else
		printf("\n|| Given number %d is not PRIME ||\n", n);
}