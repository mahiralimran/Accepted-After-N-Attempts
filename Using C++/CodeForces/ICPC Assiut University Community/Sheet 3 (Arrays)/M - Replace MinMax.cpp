#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,temp;
	cin >> n;
	
	long long int arr[n];
	
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	long long int mn = arr[0];
	long long int mx = arr[0];
	
	for(i=0; i<n; i++){
		if(arr[i] <= mn){
			mn = arr[i];
		}
		if(arr[i] >= mx){
			mx = arr[i];
		}
	}
	
	for(i=0; i<n; i++){
		if(arr[i] == mn){
			arr[i] = mx;
		}
		else if(arr[i] == mx){
			arr[i] = mn;
		}
		else{
			continue;
		}
	}
	
	for(i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}