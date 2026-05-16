#include<iostream>
using namespace std;
int main()
{
	long long int n,m,even=0,odd=0,pos=0,neg=0;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>m;
		if(m>0){
			pos++;
		}
		
		if(m<0){
			neg++;
		}
		
		if(m%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<"Positive: "<<pos<<endl;
	cout<<"Negative: "<<neg<<endl;
	
	return 0;
}