// c program for quick sort

#include <stdio.h>
#include <conio.h>

int partition (int arr[],int low,int high) 
{
	int temp, pivot=arr[high], i=(low - 1),j;
  
    for (j = low; j < high; j++) 
    {
        if (arr[j] < pivot) 
        { 
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        } 
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i+1); 
} 

void quickSort(int arr[],int low,int high) 
{
	int pi;
    if(low<high) 
    {
        pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
} 

void display(int arr[],int n) 
{
	int i;
    for (i=0;i<n;i++)
        printf("%d,",arr[i]);
} 

int main() 
{ 
    int a[10], n=10, i;
    
    printf("\n\t\t\t\t\t[ Quick Sort ]\n");
    printf("\n Enter 10 elements >>| ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    
    printf("\n Before sorting : ");
    display(a,n);
    quickSort(a, 0, n - 1);
    printf("\n After  sorting : ");
    display(a, n);
    
    getch();
    return 0;
} 
