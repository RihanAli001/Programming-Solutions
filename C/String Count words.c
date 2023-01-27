#include <stdio.h>
#include <conio.h>
int count_word(char[]);
int main()
{
	char a[1024];
	int b;
	printf("Type Any Sentance >>| ");
	scanf("%[^\n]c", a);
	b = count_word(a);
	printf("\nTotal Words Are | %d |\n", b);
	getchar();
	getchar();
}
int count_word(char x[])
{
	int i, flag = 0, n = 0;
	for (i = 0; i >= 0; i++)
	{
		if (x[i] == '\0')
		{
			break;
		}
		else if (x[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			n = n + 1;
			flag = 1;
		}
	}
	return n;
}