#include <stdio.h>
void digit_name(int z)
{
	switch (z)
	{
	case 0:
		printf("Zero ");
		break;
	case 1:
		printf("One ");
		break;
	case 2:
		printf("Two ");
		break;
	case 3:
		printf("Three ");
		break;
	case 4:
		printf("Four ");
		break;
	case 5:
		printf("Five ");
		break;
	case 6:
		printf("Six ");
		break;
	case 7:
		printf("Seven ");
		break;
	case 8:
		printf("Eight ");
		break;
	case 9:
		printf("Nine ");
		break;
	}
}
void num_digit_name(int y)
{
	int i, j = 0, a[20];
	while (y > 0)
	{
		a[j++] = y % 10;
		y /= 10;
	}
	for (i = j; i > 0; i--)
		digit_name(a[i - 1]);
	printf("\n");
}
void line(int v)
{
	int i;
	for (i = 1; i <= v; i++)
		printf("-");
	printf("\n");
}
int main()
{
	int a;
	printf("\t[ FOR DISPLAY DIGITS OF A NUMBER IN ENGLISH ]\n");
	printf("\t\t<< Valid upto 9 digis >>\n\nType Any Number >>| ");
	scanf("%d", &a);
	line(60);
	num_digit_name(a);
	line(60);
	getchar();
	getchar();
}