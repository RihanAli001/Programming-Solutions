#include <stdio.h>
void main()
{
	int a, b;
	float c;
	printf("TYPE VALUE WHICH YOU WANT TO BE DIVIDE >>| ");
	scanf("%d", &a);
	printf("TYPE VALUE OF DIVIDER >>| ");
	scanf("%d", &b);
	if (a % b == 0)
	{
		printf("\n<< %d CAN be divide by %d completely >>\n", a, b);
	}
	else
	{
		printf("\n<< %d CAN NOT be divide by %d completely >>\n", a, b);
	}
	c = (float)a / b;
	printf("This is the answer = %.2f\n", c);
	getchar();
	getchar();
}