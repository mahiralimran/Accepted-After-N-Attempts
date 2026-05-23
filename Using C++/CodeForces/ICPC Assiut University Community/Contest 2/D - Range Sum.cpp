#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,z,t,sum=0;
	cin>>t;
	
	while(t--){
		cin>>a>>z;
		
		if(a > z){
            swap(a, z);
        }
        
		sum = (z*(z+1))/2 - ((a-1)*a)/2;
		
		cout << sum << endl;
		
		sum = 0;
	}
	
	return 0;
}