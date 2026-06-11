#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i;
	cin >> n >> m;
	
	long long  int arr[n];
	long long int freq[m];
	
	for(i=0; i<=m; i++){
		freq[i] = 0;
	}
	
	for(i=0; i<n; i++){
		cin >> arr[i];
		freq[arr[i]]++;
	}
	
	for(i=1; i<=m; i++){
		cout << freq[i] << endl;
	}
	
	return 0;
}