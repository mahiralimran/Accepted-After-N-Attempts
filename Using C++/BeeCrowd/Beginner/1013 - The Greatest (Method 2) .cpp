#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	
	long long int maiorab = (a + b + abs(a-b)) / 2;
	long long int major = (maiorab + c + abs(maiorab-c)) / 2;
	
	cout<<major<<" eh o maior"<<endl;
	
	return 0;
}