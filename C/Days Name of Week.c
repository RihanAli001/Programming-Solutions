#include <stdio.h>
int main()
{
	int a;
	printf("    [ Type Any Day Number (1 to 7) To Know The Day Name ]\n\n >>| ");
	scanf("%d", &a);
	printf("------------------------------------------------------------\n");
	printf(" Day %d is = ", a);
	switch (a)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Satarday");
		break;
	default:
		printf("<< Wrong Choise, Try Again >>");
	}
	printf("\n------------------------------------------------------------");
	getchar();
	getchar();
}