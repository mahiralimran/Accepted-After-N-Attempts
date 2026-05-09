#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int pn1,pu1,pn2,pu2;
	double pri1,pri2;
	
	cin>>pn1>>pu1>>pri1;
	cin>>pn2>>pu2>>pri2;
	
	double tprice = (pu1 * pri1) + (pu2 * pri2);
	
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<tprice<<endl;
	
	return 0;
}