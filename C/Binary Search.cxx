#include <iostream>
#include <conio.h>
using namespace std;

int binary_search(int *, int, int, int);

int main(int argc, char *argv[])
{
	int number[10] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9}, ele, posi;
	for (int i = 0; i < 10; i++)
		cout << " " << number[i] << ",";

	cout << "\n Which element do you want to search >>| ";
	cin >> ele;
	fflush(stdin);
	cout << "\n";

	posi = binary_search(number, ele, 0, 9);
	if (posi != -1)
	{
		cout << "\n Element " << ele << " found at >> " << posi;
	}
	else
	{
		cout << "\n >> Element not found...";
	}

	getch();
	return 0;
}

int binary_search(int *arr, int ele, int min, int max)
{
	int mid;
	mid = (min + max) / 2;
	cout << " Min = " << min + 1 << "  Mid = " << mid + 1 << "  Max = " << max + 1 << "\n";
	for (int i = min; i <= max; i++)
		cout << " " << arr[i] << ",";
	cout << "\n\n";

	if (arr[mid] == ele)
	{
		return mid + 1;
	}
	else if (min >= max)
	{
		return -1;
	}
	if (arr[mid] > ele)
	{
		return binary_search(arr, ele, min, mid);
	}
	else if (arr[mid] < ele)
	{
		return binary_search(arr, ele, mid + 1, max);
	}
}