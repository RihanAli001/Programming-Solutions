#include <stdio.h>
int main()
{
	int i, a, *p, *q;
	printf("How much numbers you want to enter >>| ");
	scanf("%d", &a);
	p = (int *)malloc(a * sizeof(int));
	q = p;
	printf("Type %d numbers >>| ", a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", p);
		p++;
	}
	for (i = 0; i < a; i++)
	{
		printf("%d\n", *q);
		q++;
	}
}