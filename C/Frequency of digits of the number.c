#include <stdio.h>
int one_digit_freq(int z, int y)
{
	int m = 0;
	while (z > 0)
	{
		if (z % 10 == y)
			m++;
		z /= 10;
	}
	return m;
}
void num_digit_freq(int x)
{
	int i, k;
	for (i = 0; i <= 9; i++)
	{
		k = one_digit_freq(x, i);
		if (k > 0)
			printf("%3d\t\t%5d\n", i, k);
	}
}
int main()
{
	int a;
	printf("\t  [ Frequency of digits in given number ]\n\t    (This is valid for 9 digit numbers)\n\nType any number >>| ");
	scanf("%d", &a);
	printf("————————————————————————————————————————————————————————————");
	printf("\n// Here is the frequency...");
	printf("\n————————————————————————————————————————————————————————————");
	printf("\nDigits\t\tFrequency\n");
	num_digit_freq(a);
	printf("————————————————————————————————————————————————————————————");
	getchar();
	getchar();
}