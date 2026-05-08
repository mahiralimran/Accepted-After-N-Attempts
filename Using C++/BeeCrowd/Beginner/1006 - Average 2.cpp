#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,grd;
	cin>>a>>b>>c;
	
	grd = (a*2 + b*3 + c*5) / 10.00;
	
	cout<<"MEDIA = "<<fixed<<setprecision(1)<<grd<<endl;
	
	return 0;
}