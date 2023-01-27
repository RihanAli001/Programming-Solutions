#include <stdio.h>
void scan_array(int *, int);
void print_array(int *, int);
int main()
{
	int a[10];
	printf("\t[ For scan and print elements in an array ]\n");
	printf("\n Type any 10 numbers >>| ");
	scan_array(&a[0], 10);
	printf(" Elements are.....\n");
	print_array(&a[0], 10);
	printf("\n\n Completed....\n");
}
void scan_array(int *j, int n)
{
	int i;
	if (n > 0)
	{
		scanf("%d", j);
		scan_array(j + 1, n - 1);
	}
}
void print_array(int *j, int n)
{
	if (n > 0)
	{
		printf(" %d", *j);
		print_array(j + 1, n - 1);
	}
}