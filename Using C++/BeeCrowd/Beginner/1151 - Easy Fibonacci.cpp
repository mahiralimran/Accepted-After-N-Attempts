#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	cin >> n;
	
	int fib0 = 0;
	int fib1 = 1;
	
	cout << fib0 << " " << fib1 << " ";
	
	for(int i=2; i<n; i++){
		sum = 0;
		sum += fib0 + fib1;
		cout << sum;
		
		if(i<n-1){
			cout << " ";
		}
		if(i==n-1){
			cout << endl;
		}
		
		fib0 = fib1;
		fib1 = sum;
	}
	
	return 0;
}