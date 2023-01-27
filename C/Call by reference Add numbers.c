#include <stdio.h>
int add(int *n, int *m);
int main()
{
	int a, b = 0;
	printf("    [ Type numbers and then type 0 to get sum of them ]\n\n >>|");
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
			break;
		add(&a, &b);
	}
	printf("\n Sum =| %d |", b);
	getchar();
	getchar();
}
int add(int *n, int *m)
{
	*m = *m + *n;
}