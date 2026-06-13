#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ind=0;
	cin >> n;
	
	int arr[n];
	int mn = INT_MAX;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i] < mn){
			mn = arr[i];
			ind = i;
		}
	}
	
	cout << "Menor valor: " << mn << endl;
	cout << "Posicao: " << ind << endl;
	
	return 0;
}