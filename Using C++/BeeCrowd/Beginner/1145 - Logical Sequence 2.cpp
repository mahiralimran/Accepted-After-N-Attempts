#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,z,i,j,digit=1;
	cin >> n >> z;
	
	for(i=1; i<=z; i++){
		for(j=1; j<=n; j++){
			cout << digit;

    		if(j<n){
    			cout << " ";
    		}
    		
    		digit++;
		}
		cout << endl;
		
		if(digit == z+1){
			break;
		}
	}
	
	return 0;
}