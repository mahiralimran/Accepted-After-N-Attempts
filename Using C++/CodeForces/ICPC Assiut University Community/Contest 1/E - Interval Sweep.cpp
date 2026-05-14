#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	
	if(abs(a-b)<=1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}