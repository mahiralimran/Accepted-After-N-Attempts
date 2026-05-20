#include<iostream>
using namespace std;
int main()
{
	int n,j=1;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		cout<<j<<" "<<++j<<" "<<++j<<" PUM"<<endl;
		j += 2;
	}
	
	return 0;
}