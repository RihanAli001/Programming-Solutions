#include <stdio.h>
struct student
{
	char name[14];
	char rollno[14];
	int marks;
};
int main()
{
	struct student btech[10];
	int i = 0, j;
	char a;
	printf("\t\t[STUDENTS INFORMATION ]\n");
	do
	{
		printf("\nStudent's Name >>| ");
		scanf("%[^\n]s", btech[i].name);
		printf("Student's Enrollment No. >>| ");
		scanf("%s", btech[i].rollno);
		printf("Student's Marks >>| ");
		scanf("%d", &btech[i].marks);
		i++;
		printf("\nADD MORE (Y/N) >>| ");
		getchar();
		a = getchar();
		getchar();
	} while ((a == 'y') || (a == 'Y'));
	printf("\n\n------------------------------------------------------------\n");
	printf("S.No.\tNAMES\t\tENROLLMENT\t\tMARKS");
	printf("\n------------------------------------------------------------\n");
	for (j = 0; j < i; j++)
	{
		printf("%2d\t%-14s  %-14s  %12d\n", j + 1, btech[j].name, btech[j].rollno, btech[j].marks);
	}
	getchar();
	getchar();
}