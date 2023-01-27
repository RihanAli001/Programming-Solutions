#include <stdio.h>
int main()
{
	int a[10] = {0}, b[10] = {0}, c[10] = {0}, i;
	printf("FOR STORE ODD AND EVEN ELEMENTS OF AN ARRAY IN TWO SEPARATE ARRAY.\n");
	printf("Type any 10 numbers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[i] = a[i];
		}
		else
		{
			c[i] = a[i];
		}
	}
	printf("\nEven Array......\n");
	for (i = 0; i < 10; i++)
	{
		if (b[i] != 0)
			printf("%d\n", b[i]);
	}
	printf("\nOdd Array......\n");
	for (i = 0; i < 10; i++)
	{
		if (c[i] != 0)
			printf("%d\n", c[i]);
	}
}