#include <stdio.h>
#include <math.h>
int main()
{
	int num, original, n = 0, r, armstrong = 0;
	printf("[ Whether a given number is armstrong number ]\n\n");
	printf("Type any number >>| ");
	scanf("%d", &num);
	original = num;
	while (original > 0)
	{
		n++;
		original = original / 10;
	}
	original = num;
	while (original > 0)
	{
		r = original % 10;
		armstrong = armstrong + pow(r, n);
		original = original / 10;
	}
	printf("\n<< Given number is ");
	if (num != armstrong)
		printf("NOT ");
	printf("Armstrong number >>\n");
}