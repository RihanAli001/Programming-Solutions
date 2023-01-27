#include <stdio.h>
void space_line(int, int);
int main()
{
	int a, b, c = 1;
	printf("Type Any Number N And See 1 To N Number >>| ");
	scanf("%d", &a);
	space_line(0, 60);
	printf("\nThis Is Your 1 To N Numbers.\n");
	space_line(0, 60);
	printf("\n    ");
	for (b = 1; b <= a; b++)
	{
		printf("%4d ", b);
		if ((b % 10 == 0) && (b != a) && (b % 100 != 0))
		{
			printf("\n");
			space_line(3, 51);
			printf("\n    ");
		}
		if (b % 100 == 0)
		{
			printf("\n");
			space_line(3, 51);
			printf("\n[ CENTURY %d COMPLETED ]", c);
			c += 1;
			if (b != a)
			{
				printf("\n");
				space_line(3, 51);
				printf("\n    ");
			}
		}
	}
	printf("\n");
	space_line(0, 60);
	getchar();
	getchar();
}
void space_line(int m, int n)
{
	if (n == 1)
		printf("—");
	else
	{
		if (m > 0)
		{
			printf(" ");
			space_line(m - 1, n);
		}
		else
		{
			printf("—");
			space_line(m, n - 1);
		}
	}
}