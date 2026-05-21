#include<iostream>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		if(n==0){
			cout<<"NULL"<<endl;
		}
		else if(n>0){
			if(n%2==0){
				cout<<"EVEN POSITIVE"<<endl;
			}
			else{
				cout<<"ODD POSITIVE"<<endl;
			}
		}
		else{
			if(n%2==0){
				cout<<"EVEN NEGATIVE"<<endl;
			}
			else{
				cout<<"ODD NEGATIVE"<<endl;
			}
		}
	}
	
	return 0;
}