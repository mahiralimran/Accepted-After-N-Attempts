#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,area,peri;
	cin>>a>>b>>c;
	
	if(a+b>c && a+c>b && b+c>a){
		peri = a + b + c;
		cout<<"Perimetro = "<<fixed<<setprecision(1)<<peri<<endl;
	}
	else{
		area = ((a+b) / 2) * c;
		cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;
	}
	
	return 0;
}