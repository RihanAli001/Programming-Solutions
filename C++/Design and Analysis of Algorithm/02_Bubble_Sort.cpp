// cpp program for bubble sort
#include<iostream>
#include<conio.h>
using namespace std;

void bubble_sort(int *,int);
void display(int *,int);

int main()
{
	int arr[10],n;
	
	cout<<"\n\t\t\t\t\t[ BUBBLE SORTING ]\n";
	cout<<"\n Type limit >>| ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cout<<"\tElement "<<i+1<<" >>| ";
		cin>>arr[i];
	}
	
	cout<<"\n Before sorting.... >> ";
	display(arr,n);
	bubble_sort(arr,n);
	cout<<"\n\n After  sorting.... >> ";
	display(arr,n);
	
	getch();
	return 0;
}

void bubble_sort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			int temp;
			if(arr[j] > arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
