#include <stdio.h>
int main()
{
	int a, b, c, d, i, j;
	printf("[ For a given range whether a number is perfect number or not ]\n");
	printf("Type starting point >>| ");
	scanf("%d", &a);
	printf("Type ending point >>| ");
	scanf("%d", &b);
	printf("\n\n|| Calculation.... ||\n\n");
	for (j = a; j <= b; j++)
	{
		d = 0;
		for (i = 1; i < j; i++)
		{
			if (j % i == 0)
			{
				d = d + i;
			}
		}
		if ((d == j) && (d != 0))
		{
			d = 0;
			for (i = 1; i < j; i++)
			{
				if (j % i == 0)
				{
					d = d + i;
					printf("%d ", i);
					if (d == j)
						break;
					printf("+ ");
				}
			}
			printf(" = %d\n<< Perfect number >>\n", d);
			printf("\n");
		}
	}
}