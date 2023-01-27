#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];

		for(int i = 0; i<n; i++){
			cin>>a[i];
		}

		for(int i=0,j=n-1;i<j;i++,j--){
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}

		for(auto &i : a){
			cout<<i<<" ";
		}
		
		cout<<"\n";
	}
	return 0;
}
