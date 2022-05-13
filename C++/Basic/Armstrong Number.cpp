// C++ program to display the armstrong number

#include<iostream>
#include<conio.h>
using namespace std;

// armstrong function, lenght function and power function
int armstrong(int);
int lennum(int);
int power(int,int);

int main()
{
	int a,n;
	
	// input the value to find armstrong number
	cout<<"\t\t\t\t\t[ Armstrong Number ]\n\n";
	cout<<"Enter the number >>| ";
	cin>>n;
	
	// value giving to the function to find the armstrong number
	a = armstrong(n);
	
	if(a==n)
	{
		cout<<"\nGiven ["<<n<<"] Number is Armstrong Number...";
	}
	else
	{
		cout<<"\nGiven ["<<n<<"] Number is not Armstrong Number...";
	}
	
	getch();
	
	return 0;
}

// armstrong function definition
int armstrong(int x)
{
	int a,b,sum=0;
	
	b = lennum(x);  // for getting length of the number
	cout<<"\nNumber lenght is >>| "<<b;
	while(x)
	{
		a = x % 10;
		sum = sum + power(a,b); // take separate number to the power length
		x=x/10;
	}
	
	return sum;
}

// length function definition
int lennum(int y)
{
	int i=0;
	
	while(y)
	{
		i++;
		y=y/10;
	}
	
	return i;
}

// power function definition
int power(int x,int y)
{
	int into=1;
	
	for(int i=y;i>0;i--)
	{
		into=into*x;
	}
	
	return into;
}
