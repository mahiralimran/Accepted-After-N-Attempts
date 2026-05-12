#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double time,speed,oil;
	cin>>time>>speed;
	
	oil = (time * speed) / 12.00;
	
	cout<<fixed<<setprecision(3)<<oil<<endl;
	
	return 0;
}