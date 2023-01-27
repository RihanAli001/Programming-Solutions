#include <stdio.h>
void main()
{
	int a;
labl:
	printf("Type any month number >>| ");
	scanf("%d", &a);
	if (a <= 12 && a >= 1)
		printf("Number of days for this month is =| ");
	switch (a)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31|");
		break;
	case 2:
		printf("28 or 29 |");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30 |");
		break;
	default:
		printf("\n<< There are only 12 months in the year >>\n\n");
		goto labl;
		break;
	}
}