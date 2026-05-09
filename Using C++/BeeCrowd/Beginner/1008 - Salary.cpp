#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double h,r,sal;
	cin>>n>>h>>r;
	
	sal = h*r;
	
	cout<<"NUMBER = "<<n<<endl;
	cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<sal<<endl;
	
	return 0;
}