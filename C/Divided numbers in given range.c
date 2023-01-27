#include <stdio.h>
int main()
{
	int a, b, c, d = 0, i;
	printf("[ Numbers which are divide by given number in given range ]\n");
	printf("\nDivide by >>| ");
	scanf("%d", &a);
	printf("Starting Point of range >>| ");
	scanf("%d", &b);
	printf("Ending Point of range   >>| ");
	scanf("%d", &c);
	printf("\n|| Result is.... ||\n\n");
	for (i = b; i <= c; i++)
	{
		if (i % a == 0)
		{
			d = d + i;
			printf("%d  ", i);
		}
	}
	printf("\n\nSum of results is =| %d |", d);
	getchar();
	getchar();
}