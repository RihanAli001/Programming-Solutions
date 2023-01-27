#include <stdio.h> // header file for standard input and output
#include <conio.h> // header file for console input and output

// global variable
int a[] = {5, 10, 4, 2, 7, 20, 55, 2, 32, 10, 0}; // int array

// main function
int main()
{
	int i, b;

	// display element list
	do
	{
		clrscr();
		for (i = 0; i < 11; i++)
		{
			if (a[i] == 0) // if element is 0 then prinf function will not execute
			{
				continue;
			}
			printf("\n %2d}  %d", i + 1, a[i]);
		}

		// display message foe user
		gotoxy(1, 20);
		printf(" [ Which element do you want to delete ]\n Type position in number >>| ");
		// take input from user for deleting element
		scanf("%d", &b);

		// deleting an element
		if ((b <= 10) && (a[b - 1] != 0) && (b != 0))
		{
			for (i = b; i < 11; i++)
			{
				a[i - 1] = a[i];
			}
		}

	} while (b != 0);

	// for holding screen
	getch();
	return 0;
}