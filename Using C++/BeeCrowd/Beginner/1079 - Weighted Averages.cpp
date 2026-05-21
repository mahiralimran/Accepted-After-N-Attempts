#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	double a,b,c,avg;
	
	while(t--){
		avg = 0;
		
		cin>>a>>b>>c;
		
		avg = (a*2 + b*3 + c*5)/10;
		cout<<fixed<<setprecision(1)<<avg<<endl;
	}
	
	return 0;
}