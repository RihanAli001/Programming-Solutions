#include <stdio.h>
void increment();
int main()
{
	increment();
	increment();
	increment();
}
void increment()
{
	static int i = 1;
	printf("%d\n", i);
	i = i + 1;
}