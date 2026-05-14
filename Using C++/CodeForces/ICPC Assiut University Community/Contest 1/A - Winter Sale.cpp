#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x,p;
	cin>>x>>p;
	
	double op = p / (1.00-(x/100));

	cout<<fixed<<setprecision(2)<<op<<endl;
	
	return 0;
}
