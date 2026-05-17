#include<iostream>
using namespace std;
int main()
{
	long long int n,m,max=0;
	cin>>n;
	
	while(n--){
		cin>>m;
		
		if(m>max){
			max = m;
		}
	}
	
	cout<<max<<endl;
	
	return 0;
}