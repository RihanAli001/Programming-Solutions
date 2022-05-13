// C++ program for Merge Sort
#include <iostream>
#include <conio.h>
using namespace std;
  
void merge(int arr[], int const l, int const mid, int const r)
{
    int const subArr1 = mid - l + 1;
    int const subArr2 = r - mid;
  
    auto *lArr = new int[subArr1], *rArr = new int[subArr2];
  
    for (int i = 0; i < subArr1; i++)
        lArr[i] = arr[l + i];
        
    for (int j = 0; j < subArr2; j++)
        rArr[j] = arr[mid + 1 + j];
  
    int indexArr1 = 0, indexArr2 = 0;
    int indexMergeArr = l;
  
    while (indexArr1 < subArr1 && indexArr2 < subArr2) {
        if (lArr[indexArr1] <= rArr[indexArr2])
		{
            arr[indexMergeArr] = lArr[indexArr1];
            indexArr1++;
        }
        else
		{
            arr[indexMergeArr] = rArr[indexArr2];
            indexArr2++;
        }
        indexMergeArr++;
    }
    
    while (indexArr1 < subArr1)
	{
        arr[indexMergeArr] = lArr[indexArr1];
        indexArr1++;
        indexMergeArr++;
    }
    
    while (indexArr2 < subArr2)
	{
        arr[indexMergeArr] = rArr[indexArr2];
        indexArr2++;
        indexMergeArr++;
    }
}
  
void mergeSort(int arr[], int const begin, int const end)
{
    if (begin >= end)
        return;
  
    int mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}
  
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
  
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 }, n=6;
  
    cout << "Given array is : ";
    display(arr, n);
  
    mergeSort(arr, 0, n - 1);
  
    cout << "\nSorted array is : ";
    display(arr, n);
    
    getch();
    return 0;
}
