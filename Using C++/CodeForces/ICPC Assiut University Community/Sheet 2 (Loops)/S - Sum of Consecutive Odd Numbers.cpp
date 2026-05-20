#include<iostream>
using namespace std;
int main()
{
	long long int i,t,a,z,sum=0;
	cin>>t;
	
	
	while(t--){
		cin>>a>>z;
		sum = 0;
		
		if(a<=z){
			for(i=a+1; i<z; i++){
				if(i%2!=0){
				sum += i;
				}
			}
			cout<<sum<<endl;
		}
		else{
			for(i=z+1; i<a; i++){
				if(i%2!=0){
				sum += i;
				}
			}
			cout<<sum<<endl;
		}	
	}
	
	return 0;
}