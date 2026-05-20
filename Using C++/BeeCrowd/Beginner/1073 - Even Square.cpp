#include<iostream>
using namespace std;
int main()
{
	long long int n,i,val=0;
	cin>>n;
	
	for(i=1; i<=n; i++){
		if(i%2==0){
			val = i*i;
			cout<<i<<"^"<<2<<" = "<<val<<endl;
		}
		val = 0;
	}
	
	return 0;
}