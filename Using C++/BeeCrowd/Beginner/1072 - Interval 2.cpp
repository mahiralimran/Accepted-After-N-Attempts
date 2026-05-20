#include<iostream>
using namespace std;
int main()
{
	long long int t,n,in=0,out=0;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		if(n>=10 && n<=20){
			in++;
		}
		else{
			out++;
		}
	}
	
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	
	return 0;
}