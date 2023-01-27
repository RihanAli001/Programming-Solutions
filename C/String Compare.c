#include <stdio.h>
#include <conio.h>
int cmp(char[], char[]);
int main()
{
	char a[50], b[50];
	int c;
	printf("Type first sentance >>| ");
	gets(a);
	printf("\nType second sentance >>| ");
	gets(b);
	c = cmp(b, a);
	printf("\n%d\n", c);
}
int cmp(char x[], char y[])
{
	int i = 0, flag = 0;
	while ((x[i] != '\0') || (y[i] != '\0'))
	{
		if (x[i] != y[i])
		{
			flag = x[i] - y[i];
			break;
		}
		i = i + 1;
	}
	return flag;
}
