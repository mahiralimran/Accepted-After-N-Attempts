#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,pd=0,sd=0;
	cin >> n;
	
	long long int arr[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cin >> arr[i][j];
			
			if(i==j){
				pd += arr[i][j];
			}
			if(i+j==n-1){
				sd += arr[i][j];
			}
		}
	}
	
	cout << abs(pd-sd) << endl;
	
	return 0;
}