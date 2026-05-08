#include<iostream>
using namespace std;
int main()
{
	long long int a,b,sum=0;
	cin>>a>>b;
	
	sum += a%10;
	sum += b%10;
	
	cout<<sum<<endl;
	
	return 0;
}