#include <stdio.h>
void scan_matrix(int *, int);
void add_matrix(int *, int *, int *, int);
void print_matrix(int *, int);
int main()
{
	int a[3][3], b[3][3], c[3][3];
	printf("[ For Adding Two Matrics of same size ]\n");
	printf("Type First Matrix's 9 Elements  >>| ");
	scan_matrix(a, 3 * 3);
	printf("Type Second Matrix's 9 Elements >>| ");
	scan_matrix(b, 3 * 3);
	printf("\n|| Here is addition of two matrics... ||\n");
	add_matrix(a, b, c, 3 * 3);
	print_matrix(c, 3 * 3);
}
void scan_matrix(int *j, int n)
{
	if (n > 0)
	{
		scanf("%d", j);
		scan_matrix(j + 1, n - 1);
	}
}
void add_matrix(int *j, int *k, int *i, int n)
{
	if (n > 0)
	{
		*i = *j + *k;
		add_matrix(j + 1, k + 1, i + 1, n - 1);
	}
}
void print_matrix(int *k, int n)
{
	if (n > 0)
	{
		printf("%d  ", *k);
		print_matrix(k + 1, n - 1);
	}
}