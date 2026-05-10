#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b && b==c){
		cout<<a<<" eh o maior"<<endl;
	}
	
	else if(a==b && a!=c){
		if(a>c){
			cout<<a<<" eh o maior"<<endl;
		}
		else{
			cout<<c<<" eh o maior"<<endl;
		}
	}
	
	else if(a==c && a!=b){
		if(a>b){
			cout<<a<<" eh o maior"<<endl;
		}
		else{
			cout<<b<<" eh o maior"<<endl;
		}
	}
	
	else if(b==c && b!=a){
		if(b>a){
			cout<<b<<" eh o maior"<<endl;
		}
		else{
			cout<<a<<" eh o maior"<<endl;
		}
	}
	
	else if(a>b && a>c){
		cout<<a<<" eh o maior"<<endl;
	}
	
	else if(b>a && b>c){
		cout<<b<<" eh o maior"<<endl;
	}
	
	else if(c>a && c>b){
		cout<<c<<" eh o maior"<<endl;
	}
	
	return 0;
}