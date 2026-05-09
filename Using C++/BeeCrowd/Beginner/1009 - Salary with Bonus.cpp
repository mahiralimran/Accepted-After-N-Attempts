#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string nam;
	double sal,sell,got;
	
	cin>>nam;
	cin>>sal>>sell;
	
	got = sal + (sell * 0.15);
	
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<got<<endl;
	
	return 0;
}