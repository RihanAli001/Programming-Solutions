#include <stdio.h>
#include <conio.h>

// main function
int main()
{
	int a[10], i, j = 0, k = 0;

	// message for user
	printf("\n\t\t[ COUNT EVEN AND ODD NUMBERS ]\n\n");
	printf("\n Type any 10 numbers >>| ");

	// take inputs from user
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	fflush(stdin);

	// count even and odd numbers
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
			j = j + 1;
		else
			k = k + 1;
	}

	// display the result
	printf("\n Even Numbers =| %d |\n Odd Numbers  =| %d |", j, k);

	// for holding the screen
	getch();
	return 0;
}