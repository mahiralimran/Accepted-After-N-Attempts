#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,j,temp=0;
	cin >> n >> m;
	
	long long int arr[n][m];
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m/2; j++){
			temp = arr[i][j];
			arr[i][j] = arr[i][m-1-j];
			arr[i][m-1-j] = temp;
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}