#include <stdio.h>
int main()
{
	long int a;
	short int i = 0;
	printf("\t\t[ HOW MANY DIGITS IN A NUMBER ]\n");
	printf("\n Type Any Number >>| ");
	scanf("%ld", &a);
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	printf("\n Here Is The Answer...");
	printf("\n Digits >>| %d |", i);
	getchar();
	getchar();
}