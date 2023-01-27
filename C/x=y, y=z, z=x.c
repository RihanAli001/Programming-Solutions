#include <stdio.h>
int main()
{
	int a, b, c;
	printf("[ For swaping three numbers without using forth variable ]\n\n");
	printf("Type First Numbers  >>| ");
	scanf("%d", &a);
	printf("Type Second Numbers >>| ");
	scanf("%d", &b);
	printf("Type Third Numbers  >>| ");
	scanf("%d", &c);
	a = a + b + c;
	c = a - b - c;
	b = a - b - c;
	a = a - b - c;
	printf("\nType First Numbers  >>| %d", a);
	printf("\nType Second Numbers >>| %d", b);
	printf("\nType Third Numbers  >>| %d", c);
	getchar();
	getchar();
}