#include <stdio.h>
int main()
{
	int year;
	printf("\t\t   [ LEAP YEAR OR NOT ]\n\nType any year >>| ");
	scanf("%d", &year);
	if ((year % 4 == 0) && (year % 400 <= 99))
	{
		printf("\n<< This year is a LEAP YEAR... >>");
	}
	else
	{
		printf("\n<< This year is NOT a LEAP YEAR... >>");
	}
	getchar();
	getchar();
}