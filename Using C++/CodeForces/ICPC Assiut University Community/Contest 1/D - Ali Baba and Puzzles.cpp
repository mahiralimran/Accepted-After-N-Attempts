#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,ans;
	cin>>a>>b>>c>>ans;
	
	if(a+b-c == ans || a+b*c==ans){
		cout<<"YES"<<endl;
	}
	else if(a-b+c == ans || a-b*c==ans){
		cout<<"YES"<<endl;
	}
	else if(a*b+c == ans || a*b-c==ans){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}