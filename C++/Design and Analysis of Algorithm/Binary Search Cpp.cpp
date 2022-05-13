// cpp program for binary search

#include<iostream> // header file for standard input and output
#include<conio.h> // header file for console input and output
using namespace std;

// function definition for array sorting and binary search
void sort(int *,int);
int binary_search(int [],int,int,int);
// main function
int main()
{
	int number[10],ele,posi;
	
	// message for user
	cout<<"\n\t\t\t\t\t[ Element Search Using Binary Search ]\n";
	cout<<"\n Enter any 10 number >>| ";
	// take inputs from user
	for(int i=0;i<10;i++)
	{
		cin>>number[i];
	}
	
	// use sort function for array sorting 
	sort(number,10);
	// again display the sorted array elements
	cout<<"\n Here is the sort elements ==> ";
	for(int i=0;i<10;i++)
	{
		cout<<" "<<number[i]<<",";
	}
	
	// ask element from user to search
	cout<<"\n Which element do you want to search >>| ";
	cin>>ele;
	// use function to search element
	posi=binary_search(number,ele,0,9);
	cout<<"\n";
	if(posi!= -1) // if element found then display the position of element to the user
	{
		cout<<"\n Element "<<ele<<" found at "<<posi<<"...";
	}
	else // if element not found then display the message to the user that element not found
	{
		cout<<"\n Element not found...";
	}
	
	// for holding the screen
	getch();
	return 0;
}

// sorting function definition
void sort(int *arr,int count)
{
	int a;
	// sorting the array elements in assending order
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-1;j++)
		{
			if(arr[j]>arr[j+1]) // if element is greater than next element then swap elements
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
}

// binary search function definition
int binary_search(int number[],int ele,int min,int max)
{
	if(min>max) // if element not found
	{
		return -1;
	}
	else
	{
		int mid;
		// find mid of the range
		mid=(min+max)/2;
		cout<<"\n Min = "<<min+1<<"  Mid = "<<mid+1<<"  Max = "<<max+1;
		// if element found
		if(number[mid]==ele)
		{
			return mid+1;
		}
		else if(number[mid]>ele) // if found element on the mid is greater than searching element
		{
			return binary_search(number,ele,min,mid-1);
		}
		else if(number[mid]<ele) // if found element on the mid is lesser than searching element
		{
			return binary_search(number,ele,mid+1,max);
		}
	}
}
