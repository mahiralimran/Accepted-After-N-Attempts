#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,min=0,val=0;
	cin >> t;
	
	while(t--){
		
		cin >> n;
		
		long long int arr[n];
		
		for(i=0; i<n; i++){
			cin >> arr[i];
		}
		
		min = arr[0] + arr[1] + 1;
		
		for(i=0; i<n-1; i++){
			for(j=i+1; j<n; j++){
				val = arr[i] + arr[j] + (j-i);
				if(val<min){
					min = val;
				}
			}
		}
		
		cout << min << endl;
	}
}