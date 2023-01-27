#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0;
	char password[100], username[100], ch;
	printf("Enter User name : ");
	gets(username);
	printf("Enter password  : ");
	do
	{
		ch = getch();
		password[i] = ch;
		if (ch != 10)
			printf("*");
		i++;
	} while (ch != 10);
	password[i] = '\0';
	printf("\n\nUserName is : %s", username);
	printf("\nPassword is : %s", password);
}