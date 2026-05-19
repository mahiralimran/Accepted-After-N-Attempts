#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n,pos=0,sum=0;
	
	for(int i=0; i<6; i++){
		cin>>n;
		
		if(n>0){
			pos++;
			sum += n;
		}
	}
	
	cout<<pos<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1)<<sum/pos<<endl;
	
	return 0;
}