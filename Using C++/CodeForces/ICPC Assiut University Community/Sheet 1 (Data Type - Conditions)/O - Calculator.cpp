#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	
	cin>>a>>c>>b;
	
	if(c == '+'){
		int cal = a + b;
		cout<<cal<<endl;
	}
	else if(c == '-'){
		int cal = a - b;
		cout<<cal<<endl;
	}
	else if(c == '*'){
		int cal = a * b;
		cout<<cal<<endl;
	}
	else{
		int cal = a / b;
		cout<<cal<<endl;
	}
	
	return 0;
}