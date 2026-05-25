#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,t,n,exist=0;
	cin >> t;
	
	long long int arr[t];
	for(i=0; i<t; i++){
		cin >> arr[i];
	}
	
	cin >> n;
	
	for(i=0; i<t; i++){
		if(n == arr[i]){
			exist = i;
			break;
		}
		else{
			exist = -1;
		}
	}
	
	if(exist >= 0){
		cout << exist << endl;
	}
	else{
		cout << -1 << endl;
	}
	
	return 0;
}