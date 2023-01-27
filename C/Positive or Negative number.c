#include <stdio.h>
int main()
{
	int a;
	printf("[ For checking Positive or Negative number ]\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	if (a >= 0)
	{
		printf("\n<< Given number is Positive number >>\n");
	}
	else
	{
		printf("\n<< Given number is Negative number >>\n");
	}
}