#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	long long int multi = a * b * c * d;
	
	a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    multi = (a * b * c * d) % 100;
    
	long long int ll = multi % 10;
	multi = multi / 10;
	long long int lly = multi % 10;
	
	cout<<lly<<ll<<endl;
	
	return 0;
}