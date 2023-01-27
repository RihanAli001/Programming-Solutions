#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
int puzzle[5][5];
int i = 3, j = 3, move = 0, freemove = 0, flag = 1;
const int row = 4, col = 4, puzz_l = 13, puzz_h = 9;
void puzz_zero();
void puzz_value();
void puzz();
void choise();
void action(int);
void check_puzz();
int rand_num();
void quit();
int main()
{
	gotoxy(20, 10);
	printf("[ WELCOME TO PUZZLE GAME ]");
	gotoxy(20, 13);
	printf("|| Hit ANY KEY to start ||\n");
	getch();
	puzz_value();
	puzz();
	choise();
}
void puzz_zero() //Storing zero value in pazzle
{
	register int y, z;
	for (y = 0; y < col; y++)
	{
		for (z = 0; z < row; z++)
		{
			puzzle[y][z] = 0;
		}
	}
}
void puzz_value() //Storing value in pazzle
{
	register int y, z;
	for (y = 0; y < col; y++)
	{
		for (z = 0; z < row; z++)
		{
			if ((y == col - 1) && (z == row - 1))
				break;
			puzzle[y][z] = rand_num();
		}
	}
}
void puzz() //Printing puzzle
{
	register int y, z;
	clrscr();
	gotoxy(42, 8);
	printf("POSITION = %d %d", i + 1, j + 1);
	gotoxy(42, 12);
	printf("MOVE = %d", move);
	gotoxy(42, 16);
	printf("FREE MOVE = %d", freemove);
	gotoxy(2, 2);
	printf("PUZZLE GAME");
	for (y = 0; y < col; y++)
	{
		for (z = 0; z < row; z++)
		{
			if (puzzle[y][z] == 0)
				continue;
			gotoxy(puzz_l + 6 * z, puzz_h + 3 * y);
			printf("%d", puzzle[y][z]);
		}
	}
}
void choise() //choise for move
{
	char a, b, c;
	gotoxy(12, 24);
	printf("[ UP ]>>| U |\t\t[ DOWN ]>>| D |");
	gotoxy(12, 26);
	printf("[ RIGHT ]>>| L |\t\t[ LEFT ]>>| A |");
	gotoxy(1, 22);
	printf("Choise >>| ");
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
				a = 85;
				break;
			case 66:
				a = 68;
				break;
			case 67:
				a = 76;
				break;
			case 68:
				a = 65;
				break;
			}
		}
	}
	switch (a)
	{
	case 85: // Up move
	case 117:
		if (i > 0)
		{
			action(1);
		}
		else
		{
			freemove++;
		}
		puzz();
		gotoxy(42, 20);
		printf("SHIFT = UP");
		break;
	case 68: // Down move
	case 100:
		if (i < col - 1)
		{
			action(2);
		}
		else
		{
			freemove++;
		}
		puzz();
		gotoxy(42, 20);
		printf("SHIFT = DOWN");
		break;
	case 76: // Right move
	case 108:
		if (j < row - 1)
		{
			action(3);
		}
		else
		{
			freemove++;
		}
		puzz();
		gotoxy(42, 20);
		printf("SHIFT = RIGHT");
		break;
	case 65: // Left move
	case 97:
		if (j > 0)
		{
			action(4);
		}
		else
		{
			freemove++;
		}
		puzz();
		gotoxy(42, 20);
		printf("SHIFT = LEFT");
		break;
	}
	check_puzz();
	if (flag == 0)
	{
		quit();
	}
	if (flag == 1)
	{
		choise();
	}
}
void action(int x) // Moves
{
	int a;
	switch (x)
	{
	case 1:
		a = puzzle[i][j];
		puzzle[i][j] = puzzle[i - 1][j];
		puzzle[i - 1][j] = a;
		i = i - 1;
		move++;
		break;
	case 2:
		a = puzzle[i][j];
		puzzle[i][j] = puzzle[i + 1][j];
		puzzle[i + 1][j] = a;
		i = i + 1;
		move++;
		break;
	case 3:
		a = puzzle[i][j];
		puzzle[i][j] = puzzle[i][j + 1];
		puzzle[i][j + 1] = a;
		j = j + 1;
		move++;
		break;
	case 4:
		a = puzzle[i][j];
		puzzle[i][j] = puzzle[i][j - 1];
		puzzle[i][j - 1] = a;
		j = j - 1;
		move++;
		break;
	}
}
void check_puzz()
{
	int m = 1;
	register int y, z;
	for (y = 0; y < col; y++)
	{
		for (z = 0; z < row; z++)
		{
			if ((y == col - 1) && (z == row - 1))
				break;
			if (puzzle[y][z] != m++)
			{
				flag = 1;
				break;
			}
			flag = 0;
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int rand_num()
{
	int flag2 = 1, value;
	register int y, z;
	srand(time(0));
	while (1)
	{
		value = rand() % (col * row - 1) + 1;
		for (y = 0; y < col; y++)
		{
			for (z = 0; z < row; z++)
			{
				if (value == puzzle[y][z])
				{
					flag2 = 0;
					break;
				}
				else
					flag2 = 1;
			}
			if (flag2 == 0)
				break;
		}
		if (flag2 == 1)
		{
			break;
		}
	}
	return value;
}
void quit()
{
	char a;
	gotoxy(20, 6);
	printf("YOU WIN");
	gotoxy(60, 1);
	getch();
	clrscr();
	gotoxy(10, 15);
	printf("Do you want to play again(Y/N) : ");
	scanf("%c", &a);
	if ((a == 'y') || (a == 'Y'))
	{
		flag = 1;
		move = freemove = 0;
		puzz_zero();
		puzz_value();
		puzz();
		choise();
	}
	else
	{
		clrscr();
		gotoxy(23, 15);
		printf("VISIT AGAIN...");
		gotoxy(1, 1);
	}
}