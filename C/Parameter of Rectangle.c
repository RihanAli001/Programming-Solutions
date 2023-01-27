#include <stdio.h>
int main()
{
	int h, w, parameter;
	printf("Hieght and Width >>| ");
	scanf("%d%d", &h, &w);
	parameter = 2 * (h + w);
	printf("Parameter of Rectangular is =| %d |\n", parameter);
}