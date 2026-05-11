#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double d,g,con;
	cin>>d>>g;
	
	con = double(d/g);
	
	cout<<fixed<<setprecision(3)<<con<<" km/l"<<endl;
	
	return 0;
}