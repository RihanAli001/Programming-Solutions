#include <stdio.h>
int main()
{
	int a;
	printf("\t     [ For checking even or odd number ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("\n|| Given number is even number ||");
	}
	else
	{
		printf("\n|| Given number is odd number ||");
	}
	getchar();
	getchar();
}