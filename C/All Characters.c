// c program for display alphabets
#include <stdio.h> // header file for standard input and output
int main()		   // main function
{
	int ch;
	// for loop for printing 0 to 255 characters
	for (ch = 0; ch <= 255; ch++)
		printf("%4d = %4c ||\n", ch, ch);
	// for holding screen
	getchar();
	return 0;
}