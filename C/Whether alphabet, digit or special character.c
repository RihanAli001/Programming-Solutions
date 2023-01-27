#include <stdio.h>
void main()
{
	char ch;
	printf("     [ FIND WHETHER A CHARACTER IS DIGIT OR ALPHABET ]");
	printf("\n\nType Any Character >>| ");
	scanf("%c", &ch);
	if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
	{
		printf("\n|| This is an alphabet ||\n");
	}
	else if ((ch >= '0') && (ch <= '9'))
	{
		printf("\n|| This is a digit ||\n");
	}
	else
	{
		printf("\n<< This is a special character >>\n");
	}
	getchar();
	getchar();
}