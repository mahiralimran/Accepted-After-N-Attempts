#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double code,price;
	cin>>code>>price;
	
	if(code==1){
		price *= 4.00;
	}
	else if(code==2){
		price *= 4.50;
	}
	else if(code==3){
		price *= 5.00;
	}
	else if(code==4){
		price *= 2.00;
	}
	else if(code==5){
		price *= 1.50;
	}
	
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<price<<endl;
	
	return 0;
}