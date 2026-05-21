#include<iostream>
using namespace std;
int main()
{
	int pos=0,max=0,n;
	
	for(int i=1; i<=100; i++){
		cin>>n;
		
		if(n>max){
			max = n;
			pos = i;
		}
	}
	
	cout<<max<<endl<<pos<<endl;
	
	return 0;
}