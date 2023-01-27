#include <stdio.h>
#include <conio.h>
void cpy(char *, char *);
int main()
{
	char a[50], b[50];
	printf("Type any sentence >>| ");
	gets(a);
	cpy(b, a);
	printf("\nSource String\t>>|| ");
	puts(a);
	printf("Target String\t>>|| ");
	puts(b);
}
void cpy(char *i, char *j)
{
	while (*j != '\0')
	{
		*i = *j;
		i++;
		j++;
	}
}