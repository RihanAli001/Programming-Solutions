// cpp program for quick sort
#include <iostream>
#include <conio.h>
using namespace std;

// function declaration
void display(int *, int);
void quick_sort(int *, int, int);
int partition(int *, int, int);

// main function
int main()
{
	int a[10], n;
	cout << "\n\t\t\t[ QUICK SORT ]\n";
	cout << "\n Enter elements limit >>| ";
	cin >> n;
	fflush(stdin);

	for (int i = 0; i < n; i++)
	{
		cout << "\tEnter element " << i + 1 << " >>| ";
		cin >> a[i];
	}
	fflush(stdin);

	cout << "\nBefore Sorting >>| ";
	display(a, n);
	quick_sort(a, 0, n - 1);
	cout << "\n\nAfter  Sorting >>| ";
	display(a, n);

	// for holding screen
	getch();
	return 0;
}

// display function definition
void display(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i] << ",";
	}
}

// quick sort function definition
void quick_sort(int *a, int low, int high)
{
	int pivort;
	if (low < high)
	{
		cout << "\n";
		display(a, 4);
		pivort = partition(a, low, high);
		quick_sort(a, pivort + 1, high);
		quick_sort(a, low, pivort - 1);
	}
}

// partition function definition
int partition(int *a, int low, int high)
{
	int i = low + 1, j = high, temp;
	if (low < high)
	{
		do
		{
			while (a[i] < a[0])
			{
				i++;
			}

			while (a[0] < a[j])
			{
				j--;
			}

			if (i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		} while (i <= j);

		temp = a[j];
		a[j] = a[0];
		a[0] = temp;
		return j;
	}
}