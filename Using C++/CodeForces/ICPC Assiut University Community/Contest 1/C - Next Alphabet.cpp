#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	
	int val = ch;
	
	if(val>=97 && val<=121){
		val++;
		cout<< (char)val <<endl;
	}
	else if(val == 122){
		cout<<"a"<<endl;
	}
	
	return 0;
}