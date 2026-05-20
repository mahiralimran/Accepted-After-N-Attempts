#include<iostream>
using namespace std;
int main()
{
	int a,z,sum=0;
	cin>>a>>z;
	
	if(a<=z){
		for(int i=a+1; i<z; i++){
			if(i%2!=0){
				sum += i;
			}
		}
	}
	else{
		for(int i=z+1; i<a; i++){
			if(i%2!=0){
				sum += i;
			}
		}
	}
	
	cout<<sum<<endl;
	
	return 0;
}