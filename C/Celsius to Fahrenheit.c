#include <stdio.h>
void main()
{
	float f, c, k;
	printf("[ For convert Temparature Centigrate to Fehranhite ]\nType Temparature in Centigrate >>| ");
	scanf("%f", &c);
	f = 9 * c / 5 + 32;
	k = c + 273.15;
	printf("------------------------------------------------------------\n");
	printf(" 1) Feranhite Temparature is\t=>\t%.3f \n 2) Kelvin Temparature is\t=>\t%.3f", f, k);
	printf("\n------------------------------------------------------------\n");
}