#include <stdio.h>
int main()
{
	int a[100], b, i, j, k, o;
	printf("\n     [ FOR DESCENDING ORDER OF ELEMENTS OF AN ARRAY ]");
	do
	{
		printf("\n\n Quantity Of Elements >>| ");
		scanf("%d", &b);
		fflush(stdin);
		if ((b > 0) && (b <= 100))
		{
			printf(" Type Any %d Numbers >>| ", b);
			for (i = 0; i < b; i++)
			{
				scanf("%d", &a[i]);
			}
			fflush(stdin);
			for (o = 0; o < b; o++)
			{
				j = a[0];
				for (i = 0; i < b; i++)
				{
					if (j >= a[i])
					{
						j = a[i];
					}
					else if (j < a[i])
					{
						k = a[i];
						a[i] = a[i - 1];
						a[i - 1] = k;
					}
				}
			}
			printf("\n || Descending Order... ||\n\n");
			for (i = 0; i < b; i++)
			{
				printf(" %d\n", a[i]);
			}
		}
		else if (b > 100)
			printf("\n << Input only less than or equal to 100 >>\n");
		else
			printf("\n\n VISIT AGAIN...");
	} while (b > 0);
	getchar();
	return 0;
}