#include <stdio.h>
int main()
{
	int a[10], i, j, k;
	printf("\t\t[ To find maximum and minmum ]\n\n");
	printf("Type any 10 numbers >>| ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		j = k = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > j)
		{
			j = a[i];
		}
		if (a[i] < k)
		{
			k = a[i];
		}
	}
	printf("Max =| %d |\nMin =| %d |", j, k);
}