#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,i,j,n,flag=0;
	cin >> a >> b;
	
	long long int arr[a][b];
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			cin >> arr[i][j];
		}
	}
	
	cin >> n;
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			if(arr[i][j] == n){
				flag = 1;
			}
		}
	}
	
	if(flag==1){
		cout << "will not take number" << endl;
	}
	else{
		cout << "will take number" << endl;
	}
	
	return 0;
}