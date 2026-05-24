#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,z;
	
	while(1){
		cin>>a>>z;
		
		if(a<=0 || z<=0){
			break;
		}
		
		int sum = 0;
		
		if(a<=z){
			for(int i=a; i<=z; i++){
				cout << i << " ";
				sum += i;
			}
			
			cout << "Sum=" << sum << endl;
		}
		else{
			for(int i=z; i<=a; i++){
				cout << i << " ";
				sum += i;
			}
			
			cout << "Sum=" << sum << endl;
		}
	}
	
	return 0;
}