#include <stdio.h>
void swap(int, int);
int main()
{
	int a, b;
	printf("\t\t[ Swaping of two numbers ]\n\n");
	printf("Type first number  >>| ");
	scanf("%d", &a);
	printf("Type second number >>| ");
	scanf("%d", &b);
	printf("\n|| Result is here.... ||\n\n");
	swap(a, b);
	getchar();
	getchar();
}
void swap(int m, int n)
{
	int i;
	i = m;
	m = n;
	n = i;
	printf("  First number  =| %d |\n  Second number =| %d |", m, n);
}