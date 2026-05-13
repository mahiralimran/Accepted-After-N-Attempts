#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	
	double root = b*b - 4*a*c;
	
	if(a==0 || root<0){
		cout<<"Impossivel calcular"<<endl;
	}
	else{
		double r1 = (-b + sqrt(root)) / (2*a);
		double r2 = (-b - sqrt(root)) / (2*a);
		
		cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
		cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;
	}
	
	return 0;
}