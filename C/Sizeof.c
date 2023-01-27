#include <stdio.h>
#include <conio.h>
typedef struct info
{
	int page;
	char edision[15], date[10];
} INFO;
INFO j;
typedef struct book
{
	char name[50], writer[50], publisher[50];
	INFO i;
} BOOK;
BOOK b;
int main()
{
	printf("int\t%lu\n", sizeof(int));
	printf("char\t%lu\n", sizeof(char));
	printf("float\t%lu\n", sizeof(float));
	printf("double\t%lu\n", sizeof(double));
	printf("j\t%lu\n", sizeof(j));
	printf("b\t%lu\n", sizeof(b));
	printf("info\t%lu\n", sizeof(INFO));
	printf("book\t%lu\n", sizeof(BOOK));
}