#include <stdio.h>
int emptyinarray(int *, int);
int main()
{
	int a[10] = {0, 10, 0, 0, 4, 22, 5, 0, 0, 0}, b, c, d, i;
	printf("\n\t   [ FOR INSERTING ELEMENT IN AN ARRAY ]\n");
	b = emptyinarray(a, 10);
labl:
	printf("\t\t( Only %d places are  empty )\n\n", b);
	printf(" ARRAY >>| ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("|\n\n How many numbers do you want to insert >>| ");
	scanf("%d", &c);
	if (c > b)
		goto labl;
	printf(" Type any %d numbers >>| ", c);
	d = 0;
	for (i = 0; i < 10; i++)
	{
		if (a[i] == 0)
		{
			scanf("%d", &a[i]);
			printf("\n ( %d\thas stored at\t%d )", a[i], i + 1);
			d = d + 1;
			if (d >= c)
				break;
		}
	}
	fflush(stdin);
	printf("\n\n\n || Total Elements are..... ||\n\n ARRAY >>| ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	getchar();
	return 0;
}
int emptyinarray(int *i, int n)
{
	int j, k = 0;
	for (j = 0; j < n; j++)
	{
		if (*i == 0)
			k = k + 1;
		i = i + 1;
	}
	return k;
}