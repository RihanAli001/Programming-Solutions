#include <stdio.h>
int main()
{
	int a, i;
	long double sum = 0, b = 1;
	printf("Enter any number >>| ");
	scanf("%d", &a);
	if (a > 0)
	{
		sum = 1;
		printf("\n%Lf", b);
	}
	for (i = 2; i <= a; i++)
	{
		b = b * 2;
		printf("\n%Lf", b);
		sum = sum + b;
	}
	printf("\n\nSum = %Lf", sum);
	getchar();
}