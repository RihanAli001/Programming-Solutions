#include <stdio.h> // header file for standard  input and output
#include <conio.h> // header file for console input and output

void freq(int *, int);

// main function
int main()
{
	int a[100], b, i;

	// message for user
	printf("\t[ FOR CKECKING FREQUENCY OF ARRAY ELEMENTS ]\n");

	do
	{
		// taking input from user
		printf("\n Quantity Of Elements >>| ");
		scanf("%d", &b);
		fflush(stdin);

		// for checking valid input from user
		if ((b > 0) && (b <= 100))
		{
			// message from user
			printf(" Type any %d numbers >>| ", b);

			// taking element from user
			for (i = 0; i < b; i++)
			{
				scanf("%d", &a[i]);
			}
			fflush(stdin);

			// display result to the screen
			printf("\n || Result..... ||\n\n");
			freq(a, b);
		}
		else if (b > 100) // for invalid input from user
		{
			printf(" << Input only less than or equal to 100 numbers only >>\n\n");
		}
		else // message for user in exit
			printf("\n\n VISIT AGAIN...");
	} while (b > 0);

	// for holding screen
	getch();
	return 0;
}

// frequency calculating function
void freq(int *k, int n)
{
	int i, j, flag, m[n], l[n];

	// for initializing 0 to arrays
	for (i = 0; i < n; i++)
	{
		m[i] = 0;
		l[i] = 0;
	}

	// checking frequencies
	for (i = 0; i < n; i++)
	{
		flag = 0;
		for (j = 0; j < n; j++)
		{
			if ((m[j] == *k) && (*k != 0))
			{
				l[j] = l[j] + 1;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			m[i] = *k;
			l[i] = l[i] + 1;
		}
		k = k + 1;
	}

	// display frequencies
	for (i = 0; i < n; i++)
	{
		if (m[i] != 0) // if frequency is 0
		{
			printf("%3d element's frequency is >>| %d |\n", m[i], l[i]);
		}
	}
}