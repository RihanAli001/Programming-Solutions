#include <stdio.h> // header file for standard input and output
#include <conio.h> // header file for console input and output

int array_sum(int *, int);

// main function
int main()
{
	int a[10], i, sum;

	// message for user
	printf("\n\t[ CALCULATE THE SUM OF ARRAY ELEMENTS ]\n");
	printf("\n Type Any 10 Numbers >>| ");

	// taking input from user
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	fflush(stdin);

	// function calling
	sum = array_sum(a, 10);

	// display the result
	printf("\n Array Sum =| %d | ", sum);

	// for holding screen
	getch();
	return 0;
}

// function for array element sum
int array_sum(int *j, n)
{
	if (n > 0) // we use recursion here
	{
		return (*j + array_sum(j + 1, n - 1));
	}
	else
	{
		return 0;
	}
}