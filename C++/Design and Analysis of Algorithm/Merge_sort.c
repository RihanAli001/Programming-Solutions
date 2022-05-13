// C program for Merge Sort
#include <stdio.h>
#include <conio.h>
  
void merge(int arr[], int const l, int const mid, int const r)
{
    int const subArr1 = mid - l + 1;
    int const subArr2 = r - mid;
    int lArr[subArr1], rArr[subArr2];
    int i,j;
    int indexArr1 = 0, indexArr2 = 0;
    int indexMergeArr = l;
  
    for (i = 0; i < subArr1; i++)
        lArr[i] = arr[l + i];
        
    for (j = 0; j < subArr2; j++)
        rArr[j] = arr[mid + 1 + j];
  
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
	int mid;
    if (begin >= end)
        return;
  
    mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}
  
void display(int a[], int n)
{
	int i;
    for (i = 0; i < n; i++)
        printf("%d ",a[i]);
}
  
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 }, n=6;
  
    printf("Given array is : ");
    display(arr, n);
  
    mergeSort(arr, 0, n - 1);
  
    printf("\nSorted array is : ");
    display(arr, n);
    
    getch();
    return 0;
}
