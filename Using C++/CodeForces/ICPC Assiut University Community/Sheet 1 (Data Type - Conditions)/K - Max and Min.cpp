#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b && b==c){
		cout<<a<<" "<<b;
	}
	
	else if(a==b && a!=c){
		if(a>c){
			cout<<c<<" "<<a;
		}
		else{
			cout<<a<<" "<<c;
		}
	}
	
	else if(a==c && a!=b){
		if(a>b){
			cout<<b<<" "<<a;
		}
		else{
			cout<<a<<" "<<b;
		}
	}
	
	else if(b==c && b!=a){
		if(b>a){
			cout<<a<<" "<<b;
		}
		else{
			cout<<b<<" "<<a;
		}
	}
	
	else if(a>b && a>c){
		if(b>c){
			cout<<c<<" "<<a;
		}
		else{
			cout<<b<<" "<<a;
		}
	}
	
	else if(b>a && b>c){
		if(a>c){
			cout<<c<<" "<<b;
		}
		else{
			cout<<a<<" "<<b;
		}
	}
	
	else if(c>a && c>b){
		if(a>b){
			cout<<b<<" "<<c;
		}
		else{
			cout<<a<<" "<<c;
		}
	}
	
	return 0;
}