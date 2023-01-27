#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
	int i;
a:
	i = 0;
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	gotoxy(19, 15);
	printf("\e[?25lnow: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	while (i < 1000000)
		i++;
	clrscr();
	goto a;
}