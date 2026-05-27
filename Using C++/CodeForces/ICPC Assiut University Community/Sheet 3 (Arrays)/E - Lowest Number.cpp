#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,inx=0;
	cin >> n;
	
	long long int arr[n];
	
	for(i=0; i<n; i++){
		cin >> arr[i];
	}
	
	long long int min = arr[0];
	
	for(i=0; i<n; i++){
		if(arr[i] < min){
			min = arr[i];
			inx = i;
		}
	}
	
	cout << min << " " << inx+1 << endl;
		
	return 0;
}