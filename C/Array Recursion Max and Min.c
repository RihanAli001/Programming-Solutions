#include <stdio.h>
void arr_max_min(int *, int *, int *, int);
int main()
{
	int a[100], n, i, j = 0, k;
	printf("\t     [ FIND MAX AND MIN INTO AN ARRAY ]\n\n");
labl:
	printf(" Enter elements limit >>| ");
	scanf("%d", &n);
	if (n > 100)
	{
		printf("\n << Type less or equal to 100 only.... >>\n");
		goto labl;
	}
	printf(" Enter any %d numbers >>| ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	fflush(stdin);
	k = a[0];
	arr_max_min(a, &j, &k, n);
	printf("\n Max = %d\n Min = %d", j, k);
	getchar();
}
void arr_max_min(int *x, int *y, int *z, int n)
{
	if (n > 0)
	{
		if (*x > *y)
		{
			*y = *x;
		}
		if (*x < *z)
		{
			*z = *x;
		}
		arr_max_min(x + 1, y, z, n - 1);
	}
}