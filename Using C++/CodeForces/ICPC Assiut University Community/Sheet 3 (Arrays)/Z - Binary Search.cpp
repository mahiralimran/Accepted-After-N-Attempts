#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t;
	cin >> n >> t;
	
	long long int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	while(t--){
		long long int val,flag=0;
		cin >> val;
		
		long long int l=0,r=n,mid=0;
		
		while(l<=r){
			mid = (l+r)/2;
			
			if(arr[mid]==val){
				flag = 1;
				break;
			}
			else if(arr[mid]>val){
				r = mid-1;
			}
			else{
				l = mid+1;
			}
		}
		
		if(flag == 1){
			cout << "found" << endl;
		}
		else{ 
			cout << "not found" << endl;
		}
	}
	
	return 0;
}