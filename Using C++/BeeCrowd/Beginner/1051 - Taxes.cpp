#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n,taxa,taxb,tax,maintax;
	cin>>n;
	
	if(n>=0.00 && n<=2000.00){
		cout<<"Isento"<<endl;
	}
	else if(n>2000.00 && n<=3000.00){
		n -= 2000.00;
		tax = n * 0.08;
		cout<<"R$ "<<fixed<<setprecision(2)<<tax<<endl;
	}
	else if(n>3000.0 && n<=4500.00){
		n -= 3000.00;
		taxa = 1000 * 0.08;
		tax = n * 0.18;
		
		maintax = taxa + tax;
		cout<<"R$ "<<fixed<<setprecision(2)<<maintax<<endl;
	}
	else if(n>4500.0){
		n -= 4500.00;
		taxa = 1000 * 0.08;
		taxb = 1500 * 0.18;
		tax = n * 0.28;
		
		maintax = taxa + taxb + tax;
		cout<<"R$ "<<fixed<<setprecision(2)<<maintax<<endl;
	}
	
	return 0;
}