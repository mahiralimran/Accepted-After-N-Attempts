#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,z;
	
	while(1){
		cin >> a >> z;
		
		if(a>z){
			cout << "Decrescente" << endl;
		}
		else if(z>a){
			cout << "Crescente" << endl;
		}
		else{
			break;
		}
	}
	
	return 0;
}