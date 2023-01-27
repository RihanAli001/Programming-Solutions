#include <stdio.h>
int main()
{
	int a[10], i, sum = 0;
	printf("For Sum of Array Elements.\n");
	printf("Type 10 numbers : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	printf("Sum = %d", sum);
}