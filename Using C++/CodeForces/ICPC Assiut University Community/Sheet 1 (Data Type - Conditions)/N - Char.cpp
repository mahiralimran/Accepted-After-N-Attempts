#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	
	int val = c;
	
	if(val>=65 && val<=90){
		c = val + 32;
	}
	else{
		c = val - 32;
	}
	
	cout<<c<<endl;
	
	return 0;
}