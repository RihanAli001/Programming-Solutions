#include <stdio.h>
int main()
{
	int a;
	printf("\t\t[ CHECK ELIGIBILITY FOR VOTE ]\n\n");
	printf("ENTER YOUR AGE >>| ");
	scanf("%d", &a);
	if (a >= 18)
	{
		printf("( YOU ARE 'ELIGIBLE' FOR VOTE )");
	}
	else
	{
		printf("( YOU ARE 'NOT ELIGIBLE' FOR VOTE )");
	}
	getchar();
	getchar();
}