#include <stdio.h>
int main()
{
	int a[100], b, i, j, k, o;
	printf("\n      [ FOR ASCENDING ORDER OF ELEMENTS OF AN ARRAY ]\n");
	do
	{
		printf("\n Quantity Of Inputs >>| ");
		scanf("%d", &b);
		fflush(stdin);
		if ((b <= 100) && (b > 0))
		{
			printf(" Type Any %d Numbers >>| ", b);
			for (i = 0; i < b; i++)
				scanf("%d", &a[i]);
			fflush(stdin);
			for (o = 0; o < b; o++)
			{
				j = a[0];
				for (i = 0; i < b; i++)
				{
					if (j <= a[i])
						j = a[i];
					else if (j > a[i])
					{
						k = a[i];
						a[i] = a[i - 1];
						a[i - 1] = k;
					}
				}
			}
			printf("\n || Ascending order... ||\n\n");
			for (i = 0; i < b; i++)
			{
				printf(" %d} %d\n", i + 1, a[i]);
			}
			printf("\n\n");
		}
		else if (b != 0)
			printf("\n << Input only less than or equal to 100 >>\n\n");
		else
			printf("\n\n VISIT AGAIN...");
	} while (b != 0);
	getchar();
	return 0;
}