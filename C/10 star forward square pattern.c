// c program for display Star Forward Pattern
#include <stdio.h> // header file
int main()		   // main function
{
	int a, b, i, j;
	// message for user
	printf("\n     [ TYPE ANY NUMBER TO OBTAIN A FORWARD $ PATTERN ]\n\n>>| ");
	// take input from user
	scanf("%d", &a);
	fflush(stdin);
	printf("\n || Here is your pattern... ||\n");
	// print pattern
	for (i = 1; i <= a; ++i)
	{
		if (i % 30 == 1) // message after every 30 lines
		{
			b = 1;
			printf("\n TURN >>| %d |\n", i / 30 + 1);
		}
		printf(" ");
		for (j = 2; j <= b; ++j)
		{
			printf(" ");
		}
		for (j = 1; j <= b; ++j)
		{
			printf("$");
		}
		printf("\n");
		b++;
	}
	// for holding screen
	getchar();

	return 0;
}