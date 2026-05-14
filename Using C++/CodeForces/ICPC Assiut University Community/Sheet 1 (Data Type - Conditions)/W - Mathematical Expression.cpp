#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char exp,eq;
	cin>>a>>exp>>b>>eq>>c;
	
	if(exp == '+'){
		int sum = a + b;
		if(sum == c){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<sum<<endl;
		}
	}
	else if(exp == '-'){
		int sum = a - b;
		if(sum == c){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<sum<<endl;
		}
	}
	else if(exp == '*'){
		int sum = a * b;
		if(sum == c){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<sum<<endl;
		}
	}
	
	return 0;
}