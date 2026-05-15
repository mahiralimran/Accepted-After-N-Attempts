#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int ll = n / 10;
	n = n - ll * 10;
	int ly = n;
	
	if((ly!=0 && ll % ly == 0) || (ll!=0 && ly % ll == 0)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}