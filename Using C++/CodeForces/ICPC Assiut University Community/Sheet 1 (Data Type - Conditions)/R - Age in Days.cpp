#include<iostream>
using namespace std;
int main()
{
	long long int n,y,m,d,temp;
	cin>>n;
	
	y = n/365;
	temp = n - y * 365;
	m = temp / 30;
	temp = temp - m * 30;
	d = temp;
	
	cout<<y<<" years"<<endl;
	cout<<m<<" months"<<endl;
	cout<<d<<" days"<<endl;
	
	return 0;
}