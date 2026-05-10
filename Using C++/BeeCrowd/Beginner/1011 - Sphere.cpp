#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long double r,pi=3.14159;
	cin>>r;
	
	long double vol = 4.0/3.0 * pi * r * r * r;
	
	cout<<"VOLUME = "<<fixed<<setprecision(3)<<vol<<endl;
	
	return 0;
}