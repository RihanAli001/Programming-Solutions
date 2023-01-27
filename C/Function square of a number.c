#include <stdio.h>
int square(int);
int main()
{
	int a, b;
	printf("\t\t[ FOR SQUARE OF ANY NUMBER ]\n");
	printf("\nType any number >>| ");
	scanf("%d", &a);
	b = square(a);
	printf("\nSquare =| %d |", b);
	getchar();
	getchar();
}
int square(int n)
{
	int i;
	i = n * n;
	return i;
}