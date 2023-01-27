#include <stdio.h>
struct student
{
	char name[14];
	char roll[14];
	int marks;
	float per;
};
int main()
{
	struct student a1[10];
	int i = 0, j;
	char a;
	printf("\t\t[STUDENTS INFORMATION ]\n");
	do
	{
		printf("\nStudent's Name\t\t\t>>| ");
		scanf("%[^\n]s", a1[i].name);
		printf("Student's Enrollment No.\t>>| ");
		scanf("%s", a1[i].roll);
		printf("Student's Marks (in 1000)\t>>| ");
		scanf("%d", &a1[i].marks);
		a1[i].per = (float)(a1[i].marks * 100) / 1000;
		i++;
		if (i == 10)
			break;
		printf("\nADD MORE (Y/N) >>| ");
		getchar();
		a = getchar();
		getchar();
	} while ((a == 'y') || (a == 'Y'));
	printf("\n\n------------------------------------------------------------\n");
	printf("S.No.\tNAME\t\tENROLLMENT\tMARKS\tPERCENTAGE");
	printf("\n------------------------------------------------------------\n");
	for (j = 0; j < i; j++)
	{
		printf("%2d)\t%-10s\t%-10s\t%4d\t%8.2f\n", j + 1, a1[j].name, a1[j].roll, a1[j].marks, a1[j].per);
	}
	getchar();
	getchar();
}