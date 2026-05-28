#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,z,i,sum=0;
	cin >> x >> z;
	
	if(x<=z){
		for(i=x; i<=z; i++){
			if(i%13 != 0){
				sum += i;
			}
		}
	}
	else{
		for(i=z; i<=x; i++){
			if(i%13 != 0){
				sum += i;
			}
		}
	}
	
	cout << sum << endl;
	
	return 0;
}