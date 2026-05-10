#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	
	int val = c;
	
	if(val>=48 && val <= 57){
		cout<<"IS DIGIT"<<endl;
	}
	else if(val>=65 && val<=90){
		cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
	}
	else{
		cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
	}
	
	return 0;
}