#include<iostream>
using namespace std;
int main()
{
	int a,z,sum=0;
	
	while(1){
		cin>>a>>z;
		sum = 0;
		
		if(a<=0 || z<=0){
			break;
		}
		else{
			if(a<=z){	
				for(int i=a; i<=z; i++){
					sum += i;
					cout<<i<<" ";
				}
				cout<<"sum ="<<sum<<endl;
			}
			else{
				for(int i=z; i<=a; i++){
					sum += i;
					cout<<i<<" ";
				}
				cout<<"sum ="<<sum<<endl;
			}
		}
	}
	
	return 0;
}