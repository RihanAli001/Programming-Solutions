#include <stdio.h>
int main()
{
	char a[1024];
	int i = 0;
	printf("\t\t      [ NAME LENGHT ]\n\n");
	printf("Type your name >>| ");
	scanf("%[^\n]c", &a);
	while (1)
	{
		if (a[i] == '\0')
			break;
		i++;
	}
	printf("\n|| Your name lenght is || >>| %d |\n", i);
}