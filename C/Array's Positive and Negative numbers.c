#include <stdio.h>
int main()
{
	int a[10], i, n;
	printf("\t[ Positive & Negative Numbers of the Array ]\n\n");
	printf(" Enter elements limit >>| ");
	scanf("%d", &n);
	printf(" Type any %d numbers >>| ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Negative numbers.....\n");
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
			printf(" %02d =>  %d\n", i + 1, a[i]);
	}
	printf("\n Positive numbers.....\n");
	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
			printf(" %02d =>  %d\n", i + 1, a[i]);
	}
}