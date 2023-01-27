#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "Hello Rihan";
	char t[20];
	strcpy(t, s);
	printf("Source string =| %s |\n", s);
	printf("Target string =| %s |\n", t);
}