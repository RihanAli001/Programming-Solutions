#include <stdio.h>
int main()
{
	int area, h, w;
	printf("Rectangle Height >>| ");
	scanf("%d", &h);
	printf("Rectangle Width  >>| ");
	scanf("%d", &w);
	area = h * w;
	printf("\nArea >>| %d |\n\n\n\n", area);
	main();
}