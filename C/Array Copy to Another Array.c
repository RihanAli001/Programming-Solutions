// c program for copy from an array to another array
#include <stdio.h>
#include <conio.h>
int main()
{
	int a[10], b[10], i;
	// message for user
	printf("\t[ FOR COPY ONE ARRAY ELEMENT TO ANOTHER ARRAY ]\n");
	printf("\nType any 10 numbers >>| ");
	// take input from user
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	fflush(stdin);
	// copy the array
	for (i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	// display both arrays
	printf("\n|| First Array ||\t|| Second Array ||\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("\t%d\t\t\t%d\n", a[i], b[i]);
	}
	// for holding the screen
	getch();
	return 0;
}