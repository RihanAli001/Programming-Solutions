#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("Type any two numbers >>| ");
	scanf("%d%d", &a, &b);
	printf("\n|| Type 1 for + , 2 for - , 3 for * and 4 for / ||\n\n");
labl:
	scanf("%d", &c);
	if (c > 4 || c < 1)
	{
		printf("\n<< Wrong Choise. Try Again >>\n\n");
		goto labl;
	}
	printf("\n|| Here is your answer ||\n\n");
	switch (c)
	{
	case 1:
		d = a + b;
		printf("%d", d);
		break;
	case 2:
		d = a - b;
		printf("%d", d);
		break;
	case 3:
		d = a * b;
		printf("%d", d);
		break;
	case 4:
		d = a / b;
		printf("%d", d);
		break;
	}
}