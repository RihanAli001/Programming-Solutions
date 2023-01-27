#include <stdio.h>
void scan_array(int[], int);
int max(int[], int);
int main()
{
	int a[5], m;
	printf("\n\t\t[ Largest Element Of An Array ]\n");
	printf("\n Type 5 array elements >>| ");
	scan_array(a, 5);
	m = max(a, 5);
	printf("\n | MAXIMUM NUMBER IS >>| %d |\n", m);
	getchar();
	return 0;
}
void scan_array(int x[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	fflush(stdin);
}
int max(int x[], int n)
{
	int t, i;
	t = x[0];
	for (i = 1; i < n; i++)
	{
		if (x[i] > t)
			t = x[i];
	}
	return t;
}
