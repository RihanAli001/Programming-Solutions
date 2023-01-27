#include <bits/stdc++.h>
using namespace std;

long long digit_sum(long long n){
	long long sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<digit_sum(n)<<"\n";
	}
	return 0;
}
