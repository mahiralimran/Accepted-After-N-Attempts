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
	
	long long int min = arr[0];
	
	for(i=0; i<n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	for(i=0; i<n; i++){
		if(arr[i] == min){
			cnt++;
		}
	}
	
	if(cnt%2==0){
		cout << "Unlucky" << endl;
	}
	else{
		cout << "Lucky" << endl;
	}
	
	return 0;
}