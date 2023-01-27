#include <stdio.h>
void n_to_one(int);
int main()
{
	int a;
	printf("[ To display n to one numbers ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	n_to_one(a);
}
void n_to_one(int n)
{
	if ((n == 1) || (n == 0))
	{
		printf("%d", n);
	}
	else
	{
		printf("%d\n", n);
		n_to_one(n - 1);
	}
}