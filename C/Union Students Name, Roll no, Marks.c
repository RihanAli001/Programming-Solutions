#include <stdio.h>
union student {
	char name[20];
	char roll[11];
	int marks;
	float per;
};
int main()
{
	int i = 0, j;
	char b;
	union student a1[10][4];
	printf("\t\t[STUDENTS INFORMATION]\n");
	do
	{
		printf("\nStudent Name\t\t>>| ");
		scanf("%[^\n]c", a1[i][0].name);
		printf("Student Enrollment No.\t>>| ");
		scanf("%s", a1[i][1].roll);
		printf("Students Marks(in 1000)\t>>| ");
		scanf("%d", &a1[i][2].marks);
		a1[i][3].per = (a1[i][2].marks / 1000.0) * 100;
		i++;
		printf("\n\nADD MORE INFO (Y/N) >>| ");
		getchar();
		b = getchar();
		getchar();
	} while ((b == 'Y') || (b == 'y'));
	printf("\n\n------------------------------------------------------------\n");
	printf("S.No.\tNAME\t\tENROLLMENT\tMARKS\tPERCENTAGE");
	printf("\n------------------------------------------------------------\n");
	for (j = 0; j < i; j++)
		printf("%2d\t%-15s\t%-15s\t%4d\t%-3.2f\n", j + 1, a1[j][0].name, a1[j][1].roll, a1[j][2].marks, a1[j][3].per);
	getchar();
}