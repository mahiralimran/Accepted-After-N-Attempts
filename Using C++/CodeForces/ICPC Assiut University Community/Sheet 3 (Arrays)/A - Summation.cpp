#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,t,sum=0;
	cin >> t;
	
	long long int arr[t];
	for(i=0; i<t; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	cout << abs(sum) << endl;
	
	return 0;
}
