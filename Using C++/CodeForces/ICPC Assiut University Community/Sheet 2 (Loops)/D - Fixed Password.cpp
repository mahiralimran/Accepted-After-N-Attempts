#include<iostream>
using namespace std;
int main()
{
	int n;
	
	while(1){
		scanf("%d",&n);
		if(n==1999){
			cout<<"Correct"<<endl;
			break;
		}
		else{
			cout<<"Wrong"<<endl;
		}
	}
	
	return 0;
}