#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i;
	cin >> t;
	
	while(t--){
		long long int n;
		cin >> n;
		
		if(n==0){
			cout << "Fib(0) = 0" << endl;
		}
		else if(n==1){
			cout << "Fib(1) = 1" << endl;
		}
		else{
			long long int arr[n+1];
			arr[0] = 0;
			arr[1] = 1;
			
			for(i=2; i<=n; i++){
				arr[i] = arr[i-1] + arr[i-2];
			}
			
			cout << "Fib(" << n << ") = " << arr[n] << endl;
		}
	}
	
	return 0;
}