#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,z;
	cin>>t;
	
	while(t--){
		cin>>a>>z;
		int sum = 0;
		
		if(a<=z){
			for(int i=a+1; i<z; i++){
				if(i%2!=0){
					sum += i;
				}
			}
			
			cout << sum << endl;
		}
		else{
			for(int i=z+1; i<a; i++){
				if(i%2!=0){
					sum += i;
				}
			}
			
			cout << sum << endl;
		}
	}
	
	return 0;
}