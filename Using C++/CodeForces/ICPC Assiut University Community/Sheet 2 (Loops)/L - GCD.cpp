#include<iostream>
using namespace std;
int main()
{
	int m,n,max=0;
	cin>>m>>n;
	
	if(m>=n){
		for(int i=1; i<=m; i++){
			if(m%i==0 && n%i==0){
				if(i>max){
					max = i;
				}
			}
		}
	}
	else{
		for(int i=1; i<=n; i++){
			if(m%i==0 && n%i==0){
				if(i>max){
					max = i;
				}
			}
		}
	}
	cout<<max<<endl;
	return 0;
}