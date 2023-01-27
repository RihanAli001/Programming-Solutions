#include <stdio.h>
int main()
{
	int a, b, c;
	printf("\t[ For compare three values for greatest one ]\n");
	printf("\n Type any three numbers >>| ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n");
	if ((a > b) && (a > c))
	{
		printf(" << '%d' is greatest >>", a);
	}
	else
	{
		if (b > c)
		{
			printf(" << '%d' is greatest >>", b);
		}
		else
		{
			printf(" << '%d' is greatest >>", c);
		}
	}
	getchar();
	getchar();
}