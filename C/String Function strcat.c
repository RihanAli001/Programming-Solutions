#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char name[40], file[] = ".txt";
	printf("Enter File Name >>| ");
	gets(name);
	strcat(name, file);
	printf("\n\nNAME =| %s\n\nFILE EXTENTION =| %s\n\n", name, file);
}