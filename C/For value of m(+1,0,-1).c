#include <stdio.h>
int main()
{
	int a;
	printf("[ For value of m(-1,0,+1) ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("m = 1");
	}
	else
	{
		if (a == 0)
		{
			printf("m = 0");
		}
		else
		{
			printf("m = -1");
		}
	}
}