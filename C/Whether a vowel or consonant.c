#include <stdio.h>
int main()
{
	char ch;
	printf("[ Whether an Alphabet is consonant or vowel ]\n\nType any alphabet >>| ");
	scanf("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
	{
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
		{
			printf("\n|| %c is a vowel ||\n", ch);
		}
		else
		{
			printf("\n|| %c is a consonant ||\n", ch);
		}
	}
	else
	{
		printf("\n<< %c is not an alphabet >>\n", ch);
	}
}
