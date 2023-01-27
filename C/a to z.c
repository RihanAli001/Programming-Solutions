// c program for display alphabets
#include <stdio.h> // header file for standard input and output
#include <conio.h> // header file for console input and output
int main()		   // main function
{
	char ch;
	// message for user
	printf("\n Type any character >>| ");
	// take charecter from user
	ch = getchar();
	fflush(stdin);
	if (ch >= 'a') // for small alphabets
	{
		printf(" %c to z alphabets... \n\n", ch);
		for (; ch <= 'z'; ch++)
		{
			printf(" %c ", ch);
		}
	}
	else if (ch >= 'A') // for capital alphabets
	{
		printf(" %c to Z alphabets... \n\n", ch);
		for (; ch <= 'Z'; ch++)
		{
			printf(" %c ", ch);
		}
	}
	// for holding screen
	getch();
}