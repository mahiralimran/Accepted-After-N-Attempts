#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,cnt=0;
	cin >> n;
	
	long long int arr[n];
	
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for(i=0; i<n; i++){
		if(arr[i] == arr[n-i-1]){
			cnt++;
		}
	}
	
	if(cnt==n){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	
	return 0;
}