#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,pi=3.14159;
	cin>>a>>b>>c;
	
	double tri = 0.5 * a * c;
	double cir = pi * c * c;
	double trape = ((a+b)/2.0) * c;
	double squ = b * b;
	double req = a * b;
	
	cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tri<<endl;
	cout<<"CIRCULO: "<<fixed<<setprecision(3)<<cir<<endl;
	cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trape<<endl;
	cout<<"QUADRADO: "<<fixed<<setprecision(3)<<squ<<endl;
	cout<<"RETANGULO: "<<fixed<<setprecision(3)<<req<<endl;
	
	return 0;
}