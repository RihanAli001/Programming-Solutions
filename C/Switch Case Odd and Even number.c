#include <stdio.h>
int main()
{
	int a;
	printf("\t[ ODD AND EVEN NUMBER USING SWITCH CASE ]\n\n");
	printf("Type Any Number >>| ");
	scanf("%d", &a);
	printf("\n------------------------------------------------------------\n");
	switch (a % 2)
	{
	case 0:
		printf("%d Is Even Number", a);
		break;
	case 1:
		printf("%d Is Odd Number", a);
		break;
	}
	printf("\n------------------------------------------------------------");
	getchar();
	getchar();
}