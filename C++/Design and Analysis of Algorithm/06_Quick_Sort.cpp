// cpp program for quick sort

#include <iostream>
#include <conio.h>
using namespace std; 

int partition (int arr[],int low,int high) 
{
	int temp, pivot=arr[high], i=(low - 1);
  
    for (int j = low; j < high; j++) 
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
    if(low<high) 
    {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    }
} 

void display(int arr[],int n) 
{ 
    for (int i=0;i<n;i++)
        cout<<arr[i]<<",";
} 

int main() 
{ 
    int a[10], n=10;
    
    cout<<"\n\t\t\t\t\t[ Quick Sort ]\n";
    cout<<"\n Enter 10 elements >>| ";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
    
    cout<<"\n Before sorting : ";
    display(a,n);
    quickSort(a, 0, n - 1);
    cout<<"\n After  sorting : ";
    display(a, n);
    
    getch();
    return 0;
} 
