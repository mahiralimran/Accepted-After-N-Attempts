#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	double pone = b * log(a);
	double ptwo = d * log(c);
	
	if(pone>ptwo){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}