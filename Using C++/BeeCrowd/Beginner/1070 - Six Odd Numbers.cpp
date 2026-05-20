#include<iostream>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	
	int i=n;
	while(1){
		if(i%2!=0){
			cout<<i<<endl;
			cnt++;
		}
		if(cnt==6){
			break;
		}
		else{
			i++;
		}
	}
	
	return 0;
}