#include <stdio.h>
int main()
{
	int a[10], b[10], i, n;
	printf("\t\t[ REVERSE ELEMENTS OF AN ARRAY ]\n\n");
	printf(" Enter elements limit >>| ");
	scanf("%d", &n);
	printf(" Type any %d numbers >>| ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		b[n - i - 1] = a[i];
	}
	printf("\n Reverse Array....\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d", b[i]);
	}
}