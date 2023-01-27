#include <stdio.h>
int swap(int a, int b, int c);
int main()
{
	int a, b, c;
	printf("Type any three digits >>| ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n|| Here is your result ||\n");
	swap(a, b, c);
	printf("\n\n%d , %d , %d", a, b, c);
	getchar();
	getchar();
}
int swap(int a, int b, int c)
{
	a = a + b + c;
	c = a - b - c;
	b = a - b - c;
	a = a - b - c;
	printf("\n%d , %d , %d", a, b, c);
}