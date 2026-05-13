#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b && b==c){
		cout<<a<<endl<<b<<endl<<c<<endl;
	}
	else if(a==b && a!=c){
		if(a>c){
			cout<<c<<endl<<a<<endl<<b<<endl;
		}
		else{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
	}
	else if(a==c && a!=b){
		if(a>b){
			cout<<b<<endl<<a<<endl<<c<<endl;
		}
		else{
			cout<<a<<endl<<c<<endl<<b<<endl;
		}
	}
	else if(b==c && b!=a){
		if(b>a){
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		else{
			cout<<b<<endl<<c<<endl<<a<<endl;
		}
	}
	else if(a>b && a>c){
		if(b>c){
			cout<<c<<endl<<b<<endl<<a<<endl;
		}
		else{
			cout<<b<<endl<<c<<endl<<a<<endl;
		}
	}
	else if(b>a && b>c){
		if(a>c){
			cout<<c<<endl<<a<<endl<<b<<endl;
		}
		else{
			cout<<a<<endl<<c<<endl<<b<<endl;
		}
	}
	else if(c>a && c>b){
		if(a>b){
			cout<<b<<endl<<a<<endl<<c<<endl;
		}
		else{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
	}
	
	cout<<endl<<a<<endl<<b<<endl<<c<<endl;
	
	return 0;
}