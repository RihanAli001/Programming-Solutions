#include <stdio.h>
int n_sum(int);
int main()
{
	int a, b;
	printf("[ Sum of N numbers ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	b = n_sum(a);
	printf("\n1 to N numbers Sum =| %d |\n", b);
}
int n_sum(int n)
{
	if (n == 1)
		return 1;
	else
		return (n + n_sum(n - 1));
}