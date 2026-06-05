#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,cnt=0,eve=0;
	cin >> n;
	
	long long int arr[n];
	
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	while(1){
		cnt=0;
		for(i=0; i<n; i++){
			if(arr[i]%2==0){
				arr[i] = arr[i] / 2;
				cnt++;
			}
		}
		
		if(cnt==n){
			eve++;
			continue;
		}
		else{
			break;
		}
	}
	
	cout << eve << endl;
	
	return 0;
}