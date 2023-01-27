#include <stdio.h>
void prime(int);
int main()
{
	int a;
	printf("[ For a given range 1 to N check whether a number is prime ]\n\n");
	printf("Type ending point N >>| ");
	scanf("%d", &a);
	printf("\n// Result...\n");
	prime(a);
	getchar();
	getchar();
}
void prime(int x)
{
	int i, j;
	for (i = 2; i <= x; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
			printf("%d, ", i);
	}
}