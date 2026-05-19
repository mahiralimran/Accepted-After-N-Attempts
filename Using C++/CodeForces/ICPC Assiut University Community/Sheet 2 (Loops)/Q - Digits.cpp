#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int i,t,len=0;
	cin>>t;
	
	string str;
	
	while(t--){
		cin>>str;
		
		len = str.length();
		
		for(i=len-1; i>=0; i--){
			cout<<str[i]<<" ";
		}
		
		len = 0;
		cout<<endl;
	}
	
	return 0;
}