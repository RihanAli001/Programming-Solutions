#include <stdio.h>
void main()
{
	int h, m, i;
	printf("Enter The Minutes Value >>| ");
	scanf("%d", &i);
	h = i / 60;
	m = i - h * 60;
	printf("\n\n|| The Minute Convertion In... ||\n");
	printf("\nHOURS =| %d | and MINUTES =| %d |", h, m);
	getchar();
	getchar();
}