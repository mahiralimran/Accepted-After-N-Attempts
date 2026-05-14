#include<iostream>
using namespace std;
int main()
{
	int a,b,val=0;
	char ch;
	
	cin>>a>>ch>>b;
	
	if(ch == '<'){
		val = a<b;
		if(val == 1){
			cout<<"Right"<<endl;
		}
		else{
			cout<<"Wrong"<<endl;
		}
	}
	else if(ch == '>'){
		val = a>b;
		if(val == 1){
			cout<<"Right"<<endl;
		}
		else{
			cout<<"Wrong"<<endl;
		}
	}
	else if(ch == '='){
		if(a==b){
			cout<<"Right"<<endl;
		}
		else{
			cout<<"Wrong"<<endl;
		}
	}
	return 0;
}