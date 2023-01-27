#include <stdio.h>
void armstrong(int);
int digits(int);
int pow(int, int);
int main()
{
	int a;
	printf("[ For whether a number is armstrong or not ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	armstrong(a);
}
void armstrong(int n)
{
	int i, j = 0, k;
	k = n;
	i = digits(n);
	while (k > 0)
	{
		j = j + pow(k % 10, i);
		k = k / 10;
	}
	printf("\n|| Given number is ");
	if (j != n)
	{
		printf("not");
	}
	printf(" ARMSTRONG ||\n");
}
int digits(int m)
{
	int i = 0;
	while (m > 0)
	{
		i = i + 1;
		m = m / 10;
	}
	return i;
}
int pow(int q, int r)
{
	int i, j = 1;
	for (i = 1; i <= r; i++)
	{
		j = j * q;
	}
	return j;
}