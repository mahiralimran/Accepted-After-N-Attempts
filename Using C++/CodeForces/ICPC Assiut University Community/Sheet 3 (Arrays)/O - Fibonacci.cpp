#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	
	long long int fib[n];
	
	fib[0] = 0;
	fib[1] = 1;
	
	if(n==1){
		cout << fib[0] << endl;
	}
	else if(n==2){
		cout << fib[1] << endl;
	}
	else{
		for(long long int i=2; i<n; i++){
			fib[i] = fib[i-2] + fib[i-1];
		}
		cout << fib[n-1] << endl;
	}
	
	return 0;
}