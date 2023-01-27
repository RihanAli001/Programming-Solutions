#include <stdio.h>
#include <conio.h>
int main()
{
	int a[100], b[100], c[200], i, j, l, m;
	printf("FOR MERGE TWO ARRAYS TO THIRD ARRAY.\n\n");
	printf("Enter 1st array limit : ");
	scanf("%d", &l);
	printf("Enter 2nd array limit : ");
	scanf("%d", &m);
	printf("Enter %d 1st array elements : ", l);
	for (i = 0; i < l; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter %d 2nd array elements : ", m);
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	fflush(stdin);
	for (i = 0; i < l + m; i++)
	{
		if (i < l)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i - l];
		}
	}
	printf("\n3rd array is here...\n");
	for (i = 0; i < l + m; i++)
	{
		printf("%d, ", c[i]);
	}
	getch();
}