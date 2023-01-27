#include <stdio.h>
void main()
{
	int a, b, c, d;
	float e;
	printf("[ Type your marks of three subject out of 100 one by one ]\n\n>>| ");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	e = (a + b + c) / 3;
	printf("\nTotal Marks\t= | %d/300", d);
	printf("\nPercentage\t= | %.1f %c ", e, 37);
	printf("\nDivision\t= | ");
	if (e >= 60)
	{
		printf("1st");
	}
	else if (e >= 45 && e < 60)
	{
		printf("2nd");
	}
	else if (e >= 33 && e < 45)
	{
		printf("3rd");
	}
	else
	{
		printf("You are fail in EXAM.");
	}
	getchar();
	getchar();
}