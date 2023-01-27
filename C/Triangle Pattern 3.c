#include <stdio.h>
void line(int x)
{
	int i;
	for (i = 1; i <= x; i++)
		printf("-");
}
int main()
{
	int a, i, j;
	printf("[ Triangle pattern 3 ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	line(60);
	printf("\n|| Here is your Pattern ||\n");
	line(60);
	printf("\n");
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == a)
			{
				printf("1 ");
			}
			else if ((i == j) || (j == 1))
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	line(60);
}