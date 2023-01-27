#include <stdio.h>
int main()
{
	int a[10], i, j, k, l = 0;
	printf("\t[ FIRST AND SECOND MAX ELEMENT IN AN ARRAY ]\n\n");
	printf("Type any 10 numbers >>| ");

	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	k = a[0];

	for (i = 0; i < 10; i++)
		if (a[i] > k)
			k = a[i];
		else if (a[i] < k)
			j = a[i];

	for (i = 0; i < 10; i++)
		if (k == a[i])
			l++;

	if (l > 1)
		j = k;
	else
	{
		for (i = 0; i < 10; i++)
			if ((a[i] > j) && (a[i] < k))
				j = a[i];
	}
	printf("\n| First Max  =| %d |\n\n| Second Max =| %d |", k, j);
	getchar();
	getchar();
}