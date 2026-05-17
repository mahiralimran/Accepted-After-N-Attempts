#include<iostream>
using namespace std;
int main()
{
	long long int t,n,mul=1;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		if(n==0){
			cout<<1<<endl;
		}
		else{
			for(int i=1; i<=n; i++){
				mul *= i;
			}
			cout<<mul<<endl;
			mul=1;
		}
	}
	
	return 0;
}