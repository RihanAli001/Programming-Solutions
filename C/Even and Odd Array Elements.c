#include <stdio.h>
int main()
{
	int a[10], odd[10], even[10], i;
	printf("[ Separating EVEN and ODD elements of an Array ]\n\n");
	printf("Type any 10 numbers >>| ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
			even[i] = a[i];
		else if (a[i] % 2 != 0)
			odd[i] = a[i];
	}
	printf("\n|| EVEN Elements...... ||\n\n");
	for (i = 0; i < 10; i++)
	{
		if (even[i] != 0)
			printf("%d\n", even[i]);
	}
	printf("\n|| ODD Elements...... ||\n\n");
	for (i = 0; i < 10; i++)
	{
		if (odd[i] != 0)
			printf("%d\n", odd[i]);
	}
}