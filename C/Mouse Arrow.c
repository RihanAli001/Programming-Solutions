#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 1, j = 2;
	char a, b, c;
	printf("\e[?25l");
	do
	{
		clrscr();
		gotoxy(1, 1);
		printf("————————————————————————————————————————————————————————————\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n————————————————————————————————————————————————————————————");
		gotoxy(i, j);
		printf("@");
		a = getch();
		if (a == 27)
		{
			b = getch();
			if (b == 91)
			{
				c = getch();
				switch (c)
				{
				case 65:
					if (j > 2)
						j--;
					break;
				case 66:
					if (j < 28)
						j++;
					break;
				case 67:
					if (i < 60)
						i += 2;
					break;
				case 68:
					if (i > 1)
						i -= 2;
					break;
				}
			}
		}
	} while (1);
}