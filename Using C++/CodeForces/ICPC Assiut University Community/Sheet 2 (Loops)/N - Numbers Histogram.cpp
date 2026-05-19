#include<iostream>
using namespace std;
int main()
{
	char c;
	cin>>c;
	
	int n,m;
	cin>>n;
	
	while(n--){
		cin>>m;
		
		for(int i=0; i<m; i++){
			cout<<c;
		}
		cout<<endl;
	}
	
	return 0;
}