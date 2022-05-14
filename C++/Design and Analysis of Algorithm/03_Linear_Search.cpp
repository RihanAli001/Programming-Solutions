// cpp program for Linear search

#include<iostream>
#include<conio.h>
using namespace std;

int linear_search(int [],int,int);

int main()
{
	int number[10],ele,posi,n=10;
	
	cout<<"\n\t\t\t\t\t[ Element Search Using Binary Search ]\n";
	cout<<"\n Enter any 10 number >>| ";
	
	for(int i=0;i<n;i++)
	{
		cin>>number[i];
	}
	
	cout<<" Which element do you want to search >>| ";
	cin>>ele;
	
	posi=linear_search(number,ele,n);
	if(posi!= -1)
	{
		cout<<"\n Element "<<ele<<" found at "<<posi<<"...";
	}
	else
	{
		cout<<"\n Element not found...";
	}
	
	getch();
	return 0;
}

int linear_search(int number[],int ele,int n)
{
	for(int i=0;i<n;i++)
	{
		if(number[i]==ele)
		{
			return i+1;
		}
	}
	return -1;
}
